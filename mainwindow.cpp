#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
//    //qss
//    QFile file(":/qss/style.qss");
//    file.open(QIODevice::ReadOnly);
//    setStyleSheet(file.readAll());
    ui->setupUi(this);
    setWindowTitle("喷烟控制程序");
    setWindowIcon(QIcon(":/Logo.ico"));
    //串口相关
    serialIsOpen = false;
    foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
    {
        ui->comboBoxSerial->addItem(info.portName());
    }
    ui->pushButtonSerial->setCheckable(true);
    ui->comboBoxSerial->installEventFilter(this);
    connect(&serial,SIGNAL(readyRead()),this,SLOT(slotrevserialmsg()));
    //定时器
    //油泵按钮不可点击定时器
    timOilButton = new QTimer();
    timOilButton->setInterval(10);
    oilPumpCount = 0;
    connect(timOilButton,SIGNAL(timeout()),this,SLOT(timeoutOilButton()));
    //油门数据发送节流定时器
    timThrottle = new QTimer();
    timThrottle->setInterval(30);
    connect(timThrottle,SIGNAL(timeout()),this,SLOT(timeOutThrottle()));
    //粉阀
    ui->pushButtonPowderLED->setEnabled(false); // 禁用按钮
    //水泵
    ui->pushButtonWaterLED->setEnabled(false); // 禁用按钮
    //发动机
    ButtonGroupEngineStatus = new QButtonGroup();
    ButtonGroupEngineStatus->addButton(ui->pushButtonEngineStart,3);
    ButtonGroupEngineStatus->addButton(ui->pushButtonEngineStop,2);
    ButtonGroupEngineStatus->addButton(ui->pushButtonEngineEmergentStop,1);
    QObject::connect(ui->verticalSliderEngine,SIGNAL(valueChanged(int)),ui->spinBoxEngineValue,SLOT(setValue(int)));
    QObject::connect(ui->spinBoxEngineValue,SIGNAL(valueChanged(int)),ui->verticalSliderEngine,SLOT(setValue(int)));
    connect(ui->verticalSliderEngine,SIGNAL(valueChanged(int)),this,SLOT(verticalSliderEngineValueChanged(int)));
    ui->verticalSliderEngine->setEnabled(false);
    ui->pushButtonEngineStart->setEnabled(false);
    ui->pushButtonEngineStop->setEnabled(false);

}
//油泵按钮定时器槽函数
void MainWindow::timeoutOilButton()
{
    if(OilButtonPressFlag == 1){
        oilPumpCount += 1;
    }
    if(oilPumpCount>=120){
        OilButtonPressFlag = 0;
        oilPumpCount = 0;
        ui->pushButtonTestOilPump->setEnabled(true);
        timOilButton->stop();
    }
}
//串口节流定时器槽函数
void MainWindow::timeOutThrottle()
{
    serialSendEngineData(3,uint8_t(verticalSliderValue));
    timThrottle->stop();
}
//过滤器
bool MainWindow::eventFilter(QObject* watched, QEvent* event)
{
    if(watched==ui->comboBoxSerial&&event->type()==QEvent::MouseButtonPress)
    {
        ui->comboBoxSerial->clear();
        foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
        {
            ui->comboBoxSerial->addItem(info.portName());
        }
    }
}
//串口发送泵阀数据
//deviceId 油泵：1 水泵：2  粉阀：3  发动机：4  复位：5
void MainWindow::serialSendData(uint8_t deviceId,uint8_t value)
{
    QVector<uint8_t> dataSend;
    uint16_t crc16Value;
    uint8_t functionID;
    dataSend.append(0x0C);
    switch (deviceId) {
    case 1: case 2: case 3:
        functionID = 0x0A;
        break;
    case 4:
        functionID = 0x0B;
        break;
    case 5:
        functionID = 0x0C;
        break;

    default:
        qWarning() << "Invalid deviceId:" << deviceId;
        return;
    }
    dataSend.append(functionID);
    dataSend.append(deviceId);
    dataSend.append(value);
    crc16Value = crc16Calc(dataSend.data(),4);
    dataSend.append(crc16Value >> 8);
    dataSend.append(crc16Value & 0xFF);

    QByteArray dataSendByteArray(reinterpret_cast<const char*>(dataSend.data()), static_cast<int>(dataSend.size()));
    serial.write(dataSendByteArray);
    dataSendByteArray.clear();
    dataSend.clear();
}
//串口发送涡喷数据
void MainWindow::serialSendEngineData(uint8_t EngineControlFlag, uint8_t EngineControlValue)
{
    QVector<uint8_t> dataSend;
    uint16_t crc16Value;
    dataSend.append(0x0E);
    dataSend.append(EngineControlFlag);
    dataSend.append(EngineControlValue);
    crc16Value = crc16Calc(dataSend.data(),3);
    dataSend.append(crc16Value >> 8);
    dataSend.append(crc16Value & 0xFF);

    QByteArray dataSendByteArray(reinterpret_cast<const char*>(dataSend.data()), static_cast<int>(dataSend.size()));
    serial.write(dataSendByteArray);
    dataSendByteArray.clear();
    dataSend.clear();
}
//串口发送油泵数据
void MainWindow::serialSendOilPumpData()
{
    QVector<uint8_t> dataSend;
    uint16_t crc16Value;
    dataSend.append(0x0F);
    dataSend.append(0x01);
    crc16Value = crc16Calc(dataSend.data(),2);
    dataSend.append(crc16Value >> 8);
    dataSend.append(crc16Value & 0xFF);

    QByteArray dataSendByteArray(reinterpret_cast<const char*>(dataSend.data()), static_cast<int>(dataSend.size()));
    serial.write(dataSendByteArray);
    dataSendByteArray.clear();
    dataSend.clear();
}
//串口接收数据
void MainWindow::slotrevserialmsg()
{
    static QByteArray msg;
    uint16_t deviceId = 0, deviceValue = 0;
    msg.append(serial.readAll());
    while (msg.size()>=5)
    {
        if(msg.data()[0]==0x0C)
        {
            uint16_t crc=crc16Calc((uint8_t*)msg.data(),3);
            if((char(crc>>8)==msg[msg.size()-2])&&(char(crc&0xff)==msg[msg.size()-1]))//有符号和无符号比较一定要注意
            {
                deviceId = msg[1];
                deviceValue = msg[2];
                msg.remove(0,5);
                sendDataFlag = true;
            }
        }
    }
    if(sendDataFlag)
    {
        //deviceId  失败：0  油泵：1  水泵：2  粉阀：3  发动机：4  复位：5
        switch (deviceId) {
        //失败
        case 0:
            break;
        //水泵
        case 2:
            if(deviceValue==1)
            {
                ui->pushButtonWaterLED->setChecked(true);
            }
            else {
                ui->pushButtonWaterLED->setChecked(false);
            }
            break;
        //粉阀
        case 3:
            if(deviceValue==1)
            {
                ui->pushButtonPowderLED->setChecked(true);
            }
            else {
                ui->pushButtonPowderPump->setText("打开");
                ui->pushButtonPowderLED->setChecked(false);
            }
            break;
        //发动机
        case 4:
            QMessageBox::information(nullptr,"提示","发动机设置成功");
            break;
        //复位
        case 5:
            //水泵
            ui->pushButtonWaterLED->setChecked(false);
            //粉阀
            ui->pushButtonPowderLED->setChecked(false);
            //发动机
//            ui->spinBoxEngine->setValue(0);
//            QMessageBox::information(nullptr,"提示","复位成功");
            break;
        default:
            break;
        }
        sendDataFlag = false;
    }

}
//串口打开按钮设置
void MainWindow::on_pushButtonSerial_clicked(bool checked)
{
    if(checked==true)
    {
        serial.setPortName(ui->comboBoxSerial->currentText());//设置串口号
        serial.setBaudRate(57600);//设置波特率
        serial.setDataBits(QSerialPort::Data8);//设置串口数据位8
        serial.setParity(QSerialPort::NoParity);//无校验位
        serial.setStopBits(QSerialPort::OneStop);//1位停止位
        serial.setFlowControl(QSerialPort::NoFlowControl);
        if(!serial.open(QIODevice::ReadWrite))
        {
            QMessageBox::critical(nullptr,"提示","串口打开失败");
            ui->pushButtonSerial->setChecked(false);
        }
        else {
            serialIsOpen = true;
            QMessageBox::information(nullptr,"提示","串口打开成功");
//            ui->pushButtonSerial->setText("点击关闭");
        }
    }else {
        serial.close();
        serialIsOpen = false;
//        ui->pushButtonSerial->setText("打开");
    }
}
//水泵按钮设置 deviceId:2
void MainWindow::on_pushButtonWaterPump_clicked()
{
    if(serialIsOpen==true)
    {
        serialSendData(2,1);
    }else {
        QMessageBox::information(nullptr,"提示","水泵打开失败，串口未打开");
    }
//    ui->pushButtonWaterPump->setChecked(false);
}
//水泵按钮关闭设置 deviceId:2
void MainWindow::on_pushButtonWaterPumpOff_clicked()
{
    if(serialIsOpen==true)
    {
        serialSendData(2,0);
    }else {
        QMessageBox::information(nullptr,"提示","水泵打开失败，串口未打开");
    }
}
//粉阀按钮设置 deviceId:3
void MainWindow::on_pushButtonPowderPump_clicked()
{
    if(serialIsOpen==true)
    {
        serialSendData(3,1);
    }else {
        QMessageBox::information(nullptr,"提示","粉阀打开失败，串口未打开");
    }
}
//粉阀按钮关闭设置 deviceId:3
void MainWindow::on_pushButtonPowderPumpOff_clicked()
{
    if(serialIsOpen==true)
    {
        serialSendData(3,0);
    }else {
        QMessageBox::information(nullptr,"提示","粉阀打开失败，串口未打开");
    }
}
//复位按钮设置 deviceId:5
void MainWindow::on_pushButtonReset_clicked()
{
    if(serialIsOpen==true){
        serialSendData(5,1);
    }
    else {
        QMessageBox::information(nullptr,"提示","复位失败，串口未打开");
    }
}
//窗口置顶按钮槽函数
void MainWindow::on_windowTopButton_clicked(bool checked)
{
    setWindowFlag(Qt::WindowStaysOnTopHint, checked);
    show();
}
//开启控制按钮槽函数
void MainWindow::on_pushButtonEngineControl_clicked(bool checked)
{
    ButtonGroupEngineStatus->button(1)->setChecked(true);
    if(checked){
        ui->pushButtonEngineStart->setEnabled(true);
        ui->pushButtonEngineStop->setEnabled(true);
    }
    else {
        ui->verticalSliderEngine->setValue(0);
        ui->pushButtonEngineStart->setEnabled(false);
        ui->pushButtonEngineStop->setEnabled(false);
        ui->verticalSliderEngine->setEnabled(false);
    }
}
//启动按钮槽函数
void MainWindow::on_pushButtonEngineStart_clicked()
{
    serialSendEngineData(3,0);
    ui->verticalSliderEngine->setEnabled(true);
}
//停车按钮槽函数
void MainWindow::on_pushButtonEngineStop_clicked()
{
    serialSendEngineData(2,0);
    ui->verticalSliderEngine->setValue(0);
    ui->verticalSliderEngine->setEnabled(false);
}
//紧急停车按钮槽函数
void MainWindow::on_pushButtonEngineEmergentStop_clicked()
{
    serialSendEngineData(1,0);
    ui->verticalSliderEngine->setValue(0);
    ui->verticalSliderEngine->setEnabled(false);
}
//滑动条值变化槽函数
void MainWindow::verticalSliderEngineValueChanged(int val)
{
//    qDebug() << "valueChanged" << val;
    verticalSliderValue = val;
    if(ButtonGroupEngineStatus->checkedId()==3){
        if (!timThrottle->isActive()) {
            timThrottle->start();
        }
    }
}
//测试油泵按钮槽函数
void MainWindow::on_pushButtonTestOilPump_clicked()
{
    //开启1.2S油泵，1.2S内油泵按钮不可点击
    OilButtonPressFlag = 1;
    timOilButton->start();
    ui->pushButtonTestOilPump->setEnabled(false);
    serialSendOilPumpData();

}
//16位CRC校验
uint16_t MainWindow::crc16Calc(uint8_t *data, uint8_t len) {
    uint16_t crc_buf, crc16;
    crc16 = 0xFFFF;
    for(int i=0; i< len;i++){
        crc_buf = data[i] & 0x00FF;
        crc16 ^= crc_buf;
        for(int j = 0; j<8; j++){
            if(crc16 & 0x0001){
                crc16 >>=1;
                crc16 ^= 0xA001;
            }else{
                crc16 >>= 1;
            }
        }
    }
    return crc16;
}
//8位CRC校验
uint8_t MainWindow::crc8Calc(uint8_t *data, uint8_t len) {
    uint8_t crc8 = 0x00;
    for (uint8_t byte=0; byte<len;byte++) {
        crc8 ^= data[byte];
        for (int i = 0; i < 8; ++i) {
            if (crc8 & 0x80) {
                crc8 = uint8_t((crc8 << 1) ^ 0x31);
            } else {
                crc8 <<= 1;
            }
        }
    }
    return crc8;
}

MainWindow::~MainWindow()
{
    delete ui;
}
