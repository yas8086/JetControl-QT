#include "mainwindow.h"
#include "ui_mainwindow.h"

static uint8_t timeEngineValue = 0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
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
    //粉阀
//    ui->pushButtonPowderPump->setCheckable(true);
    ui->pushButtonPowderLED->setEnabled(false); // 禁用按钮
    //水泵
//    ui->pushButtonWaterPump->setCheckable(true);
    ui->pushButtonWaterLED->setEnabled(false); // 禁用按钮
    //粉阀
    //信号和槽连接QSpinbox&QSlider，使两者的值相互变化。
//    ui->spinBoxPowderValue->setRange(0,100);
//    ui->horizontalSliderPowderValue->setRange(0,100);
//    QObject::connect(ui->spinBoxPowderValue,SIGNAL(valueChanged(int)),ui->horizontalSliderPowderValue,SLOT(setValue(int)));
//    QObject::connect(ui->horizontalSliderPowderValue,SIGNAL(valueChanged(int)),ui->spinBoxPowderValue,SLOT(setValue(int)));
//    //发动机
//    /* 设置页长（两个最大刻度的间距）*/
//    ui->dialEngine->setPageStep(10);
//    /* 设置刻度可见 */
//    ui->dialEngine->setNotchesVisible(true);
//    /* 设置两个凹槽之间的目标像素数 */
//    ui->dialEngine->setNotchTarget(1.00);
//    /* 设置dial值的范围 */
//    ui->dialEngine->setRange(0,100);
//    ui->spinBoxEngine->setRange(0,100);
//    QObject::connect(ui->dialEngine,SIGNAL(valueChanged(int)),ui->spinBoxEngine,SLOT(setValue(int)));
//    QObject::connect(ui->spinBoxEngine,SIGNAL(valueChanged(int)),ui->dialEngine,SLOT(setValue(int)));
    //定时器
//    tim = new QTimer();
//    //20ms中断一次，一秒50次
//    tim->setInterval(20);
//    connect(tim,SIGNAL(timeout()),this,SLOT(timeoutSendData()));

}
//定时器槽函数
//void MainWindow::timeoutSendData()
//{
//    serialSendData(4,timeEngineValue);
//}
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
//串口发送数据
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
            switch (deviceValue){
//            case 1:
//                ui->pushButtonOilPump->setChecked(true);
//                break;
            case 2:
//                ui->pushButtonWaterPump->setChecked(true);
                break;
            case 3:
//                ui->pushButtonPowderPump->setChecked(true);
                break;
            default:
                break;
            }
//            QMessageBox::information(nullptr,"提示","打开失败，请重试！");
            break;
          //油泵
//        case 1:
//            if(deviceValue==1)
//            {
//                QMessageBox::information(nullptr,"提示","油泵打开成功");
//                ui->pushButtonOilPump->setChecked(true);
//                ui->pushButtonOilPump->setText("油泵已开启，点击关闭");
//            }
//            else {
//                ui->pushButtonOilPump->setText("打开");
//            }
//            break;
        //水泵
        case 2:
            if(deviceValue==1)
            {
//                QMessageBox::information(nullptr,"提示","水泵打开成功");
//                ui->pushButtonWaterPump->setChecked(true);
                ui->pushButtonWaterLED->setChecked(true);
//                ui->pushButtonWaterPump->setText("水泵已开启，点击关闭");
            }
            else {
//                ui->pushButtonWaterPump->setText("打开");
                ui->pushButtonWaterLED->setChecked(false);
            }
            break;
        //粉阀
        case 3:
            if(deviceValue==1)
            {
//                QMessageBox::information(nullptr,"提示","粉阀打开成功");
//                ui->pushButtonPowderPump->setChecked(true);
                ui->pushButtonPowderLED->setChecked(true);
//                ui->pushButtonPowderPump->setText("粉阀已开启，点击关闭");
            }
            else {
                ui->pushButtonPowderPump->setText("打开");
                ui->pushButtonPowderLED->setChecked(false);
            }
            break;
        case 5:
            //油泵
//            ui->pushButtonOilPump->setChecked(false);
//            ui->pushButtonOilPump->setText("打开");
            //水泵
//            ui->pushButtonWaterPump->setChecked(false);
            ui->pushButtonWaterLED->setChecked(false);
//            ui->pushButtonWaterPump->setText("打开");
            //粉阀
//            ui->spinBoxPowderValue->setValue(0);
//            ui->pushButtonPowderPump->setChecked(false);
            ui->pushButtonPowderLED->setChecked(false);
//            ui->pushButtonPowderPump->setText("打开");
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
            QMessageBox::critical(this,"提示","串口打开失败");
            ui->pushButtonSerial->setChecked(false);
        }
        else {
            serialIsOpen = true;
            QMessageBox::information(this,"提示","串口打开成功");
//            ui->pushButtonSerial->setText("点击关闭");
        }
    }else {
        serial.close();
        serialIsOpen = false;
//        ui->pushButtonSerial->setText("打开");
    }
}
////油泵按钮设置 deviceId:1
//void MainWindow::on_pushButtonOilPump_clicked(bool checked)
//{
//    if(serialIsOpen==true){
//        if(checked==true){
//            serialSendData(1,1);
//        }
//        else {
//            serialSendData(1,0);
//        }
//    }
//    else {
//        QMessageBox::information(nullptr,"提示","油泵打开失败，串口未打开");
//    }
//    ui->pushButtonOilPump->setChecked(false);
//}
//水泵按钮设置 deviceId:2
void MainWindow::on_pushButtonWaterPump_clicked()
{
    if(serialIsOpen==true)
    {
        serialSendData(2,1);
    }else {
        QMessageBox::information(this,"提示","水泵打开失败，串口未打开");
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
        QMessageBox::information(this,"提示","水泵打开失败，串口未打开");
    }
}
//粉阀按钮设置 deviceId:3
void MainWindow::on_pushButtonPowderPump_clicked()
{
    if(serialIsOpen==true)
    {
        serialSendData(3,1);
    }else {
        QMessageBox::information(this,"提示","粉阀打开失败，串口未打开");
    }
}
//粉阀按钮关闭设置 deviceId:3
void MainWindow::on_pushButtonPowderPumpOff_clicked()
{
    if(serialIsOpen==true)
    {
        serialSendData(3,0);
    }else {
        QMessageBox::information(this,"提示","粉阀打开失败，串口未打开");
    }
}
//发动机按钮设置 deviceId:4
//void MainWindow::on_pushButtonEngine_clicked()
//{
//    if(serialIsOpen==true){
//        serialSendData(4,uint8_t(ui->spinBoxEngine->value()));
//        timeEngineValue = uint8_t(ui->spinBoxEngine->value());
//    }
//    else {
//        QMessageBox::information(nullptr,"提示","发动机设置失败，串口未打开");
//    }
//}
//复位按钮设置 deviceId:5
void MainWindow::on_pushButtonReset_clicked()
{
    if(serialIsOpen==true){
        serialSendData(5,1);
    }
    else {
        QMessageBox::information(this,"提示","复位失败，串口未打开");
    }
}
//窗口置顶按钮槽函数
void MainWindow::on_windowTopButton_clicked(bool checked)
{
    setWindowFlag(Qt::WindowStaysOnTopHint, checked);
    show();
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
