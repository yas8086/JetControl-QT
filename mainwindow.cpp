#include "mainwindow.h"
#include "ui_mainwindow.h"

static uint8_t crcArray[] = {
    0x00, 0x5e, 0xbc, 0xe2, 0x61, 0x3f, 0xdd, 0x83,
    0xc2, 0x9c, 0x7e, 0x20, 0xa3, 0xfd, 0x1f, 0x41,
    0x9d, 0xc3, 0x21, 0x7f, 0xfc, 0xa2, 0x40, 0x1e,
    0x5f, 0x01, 0xe3, 0xbd, 0x3e, 0x60, 0x82, 0xdc,
    0x23, 0x7d, 0x9f, 0xc1, 0x42, 0x1c, 0xfe, 0xa0,
    0xe1, 0xbf, 0x5d, 0x03, 0x80, 0xde, 0x3c, 0x62,
    0xbe, 0xe0, 0x02, 0x5c, 0xdf, 0x81, 0x63, 0x3d,
    0x7c, 0x22, 0xc0, 0x9e, 0x1d, 0x43, 0xa1, 0xff,
    0x46, 0x18, 0xfa, 0xa4, 0x27, 0x79, 0x9b, 0xc5,
    0x84, 0xda, 0x38, 0x66, 0xe5, 0xbb, 0x59, 0x07,
    0xdb, 0x85, 0x67, 0x39, 0xba, 0xe4, 0x06, 0x58,
    0x19, 0x47, 0xa5, 0xfb, 0x78, 0x26, 0xc4, 0x9a,
    0x65, 0x3b, 0xd9, 0x87, 0x04, 0x5a, 0xb8, 0xe6,
    0xa7, 0xf9, 0x1b, 0x45, 0xc6, 0x98, 0x7a, 0x24,
    0xf8, 0xa6, 0x44, 0x1a, 0x99, 0xc7, 0x25, 0x7b,
    0x3a, 0x64, 0x86, 0xd8, 0x5b, 0x05, 0xe7, 0xb9,
    0x8c, 0xd2, 0x30, 0x6e, 0xed, 0xb3, 0x51, 0x0f,
    0x4e, 0x10, 0xf2, 0xac, 0x2f, 0x71, 0x93, 0xcd,
    0x11, 0x4f, 0xad, 0xf3, 0x70, 0x2e, 0xcc, 0x92,
    0xd3, 0x8d, 0x6f, 0x31, 0xb2, 0xec, 0x0e, 0x50,
    0xaf, 0xf1, 0x13, 0x4d, 0xce, 0x90, 0x72, 0x2c,
    0x6d, 0x33, 0xd1, 0x8f, 0x0c, 0x52, 0xb0, 0xee,
    0x32, 0x6c, 0x8e, 0xd0, 0x53, 0x0d, 0xef, 0xb1,
    0xf0, 0xae, 0x4c, 0x12, 0x91, 0xcf, 0x2d, 0x73,
    0xca, 0x94, 0x76, 0x28, 0xab, 0xf5, 0x17, 0x49,
    0x08, 0x56, 0xb4, 0xea, 0x69, 0x37, 0xd5, 0x8b,
    0x57, 0x09, 0xeb, 0xb5, 0x36, 0x68, 0x8a, 0xd4,
    0x95, 0xcb, 0x29, 0x77, 0xf4, 0xaa, 0x48, 0x16,
    0xe9, 0xb7, 0x55, 0x0b, 0x88, 0xd6, 0x34, 0x6a,
    0x2b, 0x75, 0x97, 0xc9, 0x4a, 0x14, 0xf6, 0xa8,
    0x74, 0x2a, 0xc8, 0x96, 0x15, 0x4b, 0xa9, 0xf7,
    0xb6, 0xe8, 0x0a, 0x54, 0xd7, 0x89, 0x6b, 0x35
};
static QString ECodeText[]={"无错误","超时","电压低","火头故障","油泵故障","启动电机故障","转速低","转速不稳定","排气温度高","排气温度低","排气温度传感器故障",
                            "点火电磁阀故障","主油路电磁阀故障","控制信号丢失","启动电机控制器温度过高","油泵温度控制器温度过高","离合器故障","电流过载","引擎离线","数据错误"};
static QString EngineStateText[]={"停机/禁止自动散热","停机/自动散热","点火（需要油门最小）","点火","预热","加速","运行（学习模式，需要油门最大）",
                                  "运行（学习模式，需要油门最小）","运行（学习怠速）","运行（油门最小）","运行（警告，油泵达到极限）","运行","冷却","重启",
                                  "测试热火头","测试主油路电磁阀","测试点火油路电磁阀","测试油泵","测试启动电机","油路排空气","数据错误"};

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
//    //qss
//    QFile file(":/qss/style.qss");
//    file.open(QIODevice::ReadOnly);
//    setStyleSheet(file.readAll());
//    setFixedSize(this->width(), this->height());
//    setWindowFlags((windowFlags() | Qt::WindowMaximizeButtonHint) & ~Qt::WindowMinimizeButtonHint);

//    // 创建堆叠容器
//   stackedWidget = new QStackedWidget(this);
//   setCentralWidget(stackedWidget);

//   // 创建两个UI容器
//   normalWidget = new QWidget(stackedWidget);
//   maximizedWidget = new QWidget(stackedWidget);

//   // 设置UI
//   setupNormalUI();
//   setupMaximizedUI();

//   // 添加到堆叠容器
//   stackedWidget->addWidget(normalWidget);
//   stackedWidget->addWidget(maximizedWidget);

//   // 初始显示正常UI
//   stackedWidget->setCurrentIndex(0);
//   adjustToNormalSize();

    ui->setupUi(this);



    setWindowTitle("发烟控制程序");
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
//void MainWindow::setupNormalUI() {
//    // 加载正常UI
//    normalUI.setupUi(normalWidget);

//    // 设置固定尺寸（根据UI设计设置）
//    normalWidget->setFixedSize(800, 600);

//    // 连接信号槽（示例）
//    connect(normalUI.pushButton, &QPushButton::clicked, this, [this](){
//        qDebug() << "Normal button clicked";
//    });
//}

//void MainWindow::setupMaximizedUI() {
//    // 加载最大化UI
//    maximizedUI.setupUi(maximizedWidget);

//    // 设置布局策略为可扩展
//    maximizedWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

//    // 连接信号槽（示例）
//    connect(maximizedUI.largeButton, &QPushButton::clicked, this, [this](){
//        qDebug() << "Maximized button clicked";
//    });
//}
//油泵按钮定时器槽函数
void MainWindow::timeoutOilButton()
{
    if(OilButtonPressFlag == 1){
        oilPumpCount += 1;
    }
    if(oilPumpCount>=3){
        OilButtonPressFlag = 0;
        oilPumpCount = 0;
        ui->pushButtonTestOilPump->setEnabled(true);
        timOilButton->stop();
    }
}
//串口节流定时器槽函数
void MainWindow::timeOutThrottle()
{
    serialSendData(0xC0,uint8_t(verticalSliderValue));
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
//泵阀    functionID:0x0A  deviceId   水泵：2  粉阀：3
//发动机  functionID:0x0B  deviceId    油泵：1 发动机紧急停车：0xA0  发动机停车：0xB0 发动机启动：0xC0
//复位    functionID:0x0C  deviceId   复位：5
void MainWindow::serialSendData(uint8_t deviceId,uint8_t value)
{
    QVector<uint8_t> dataSend;
    uint16_t crc16Value;
    uint8_t functionID;
    dataSend.append(0x0C);
    switch (deviceId) {
    case 2: case 3:
        functionID = 0x0A;
        break;
    case 1: case 0xA0: case 0xB0: case 0xC0: case 0xD0:
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
//void MainWindow::serialSendEngineData(uint8_t EngineControlFlag, uint8_t EngineControlValue)
//{
//    QVector<uint8_t> dataSend;
//    uint16_t crc16Value;
//    dataSend.append(0x0E);
//    dataSend.append(EngineControlFlag);
//    dataSend.append(EngineControlValue);
//    crc16Value = crc16Calc(dataSend.data(),3);
//    dataSend.append(crc16Value >> 8);
//    dataSend.append(crc16Value & 0xFF);

//    QByteArray dataSendByteArray(reinterpret_cast<const char*>(dataSend.data()), static_cast<int>(dataSend.size()));
//    serial.write(dataSendByteArray);
//    dataSendByteArray.clear();
//    dataSend.clear();
//}
//串口发送油泵数据
//void MainWindow::serialSendOilPumpData()
//{
//    QVector<uint8_t> dataSend;
//    uint16_t crc16Value;
//    dataSend.append(0x0F);
//    dataSend.append(0x01);
//    crc16Value = crc16Calc(dataSend.data(),2);
//    dataSend.append(crc16Value >> 8);
//    dataSend.append(crc16Value & 0xFF);

//    QByteArray dataSendByteArray(reinterpret_cast<const char*>(dataSend.data()), static_cast<int>(dataSend.size()));
//    serial.write(dataSendByteArray);
//    dataSendByteArray.clear();
//    dataSend.clear();
//}
//串口接收数据
void MainWindow::slotrevserialmsg()
{
    static QByteArray msg;
    uint16_t deviceId = 0, deviceValue = 0;
    msg.append(serial.readAll());
    while (msg.size()>=7)
    {
        uint8_t head,cmd_id;
        head = msg.data()[0] & 0xF0;
        cmd_id = msg.data()[0] & 0x0F;
        if(msg.data()[0]==0x0C)
        {
            uint16_t crc=crc16Calc(reinterpret_cast<uint8_t*>(msg.data()),5);
            if((char(crc>>8)==msg[msg.size()-2])&&(char(crc&0xff)==msg[msg.size()-1]))//有符号和无符号比较一定要注意
            {
                deviceId = uint8_t(msg.data()[1]);
                deviceValue = uint8_t(msg.data()[2]);
                msg.remove(0,7);
                sendDataFlag = true;
            }
            else {
                msg.remove(0,7);
            }
        }
        if(head==0xF0)
        {
            ecuCalcCrc = ecu_crc8(reinterpret_cast<uint8_t*>(msg.data()),6,0);
            if(char(ecuCalcCrc) == msg[6]){
                get_ecu_rec_data(reinterpret_cast<uint8_t*>(msg.data()),cmd_id);
                Refresh();
                msg.remove(0,7);
            }
            else {
                msg.remove(0,7);
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
//            QMessageBox::information(this,"提示","发动机设置成功");
            break;
        //复位
        case 5:
            //水泵
            ui->pushButtonWaterLED->setChecked(false);
            //粉阀
            ui->pushButtonPowderLED->setChecked(false);
            break;
        default:
            break;
        }
        sendDataFlag = false;
    }

}
//串口打开按钮槽函数
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
        }
    }else {
        serial.close();
        serialIsOpen = false;
//        ui->pushButtonSerial->setText("打开");
    }
}
//水泵开启按钮槽函数 deviceId:2
void MainWindow::on_pushButtonWaterPump_clicked()
{
    if(serialIsOpen==true)
    {
        serialSendData(2,1);
    }else {
        QMessageBox::information(this,"提示","水泵打开失败，串口未打开");
    }
}
//水泵关闭按钮槽函数 deviceId:2
void MainWindow::on_pushButtonWaterPumpOff_clicked()
{
    if(serialIsOpen==true)
    {
        serialSendData(2,0);
    }else {
        QMessageBox::information(this,"提示","水泵打开失败，串口未打开");
    }
}
//粉阀开启按钮槽函数 deviceId:3
void MainWindow::on_pushButtonPowderPump_clicked()
{
    if(serialIsOpen==true)
    {
        serialSendData(3,1);
    }else {
        QMessageBox::information(this,"提示","粉阀打开失败，串口未打开");
    }
}
//粉阀关闭按钮槽函数 deviceId:3
void MainWindow::on_pushButtonPowderPumpOff_clicked()
{
    if(serialIsOpen==true)
    {
        serialSendData(3,0);
    }else {
        QMessageBox::information(this,"提示","粉阀打开失败，串口未打开");
    }
}
//复位按钮槽函数 deviceId:5
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
//开启控制按钮槽函数
void MainWindow::on_pushButtonEngineControl_clicked(bool checked)
{
    ButtonGroupEngineStatus->button(1)->setChecked(true);
    if(checked){
        ui->pushButtonEngineStart->setEnabled(true);
        ui->pushButtonEngineStop->setEnabled(true);
        ui->pushButtonTestOilPump->setEnabled(false);
        serialSendData(0xD0,1);
        ui->pushButtonEngineControl->setText("关闭控制");
    }
    else {
        ui->verticalSliderEngine->setValue(0);
        ui->pushButtonEngineStart->setEnabled(false);
        ui->pushButtonEngineStop->setEnabled(false);
        ui->verticalSliderEngine->setEnabled(false);
        ui->pushButtonTestOilPump->setEnabled(true);
        serialSendData(0xD0,0);
    }
}
//启动按钮槽函数
void MainWindow::on_pushButtonEngineStart_clicked()
{
    serialSendData(0xC0,0);
    ui->verticalSliderEngine->setEnabled(true);
}
//停车按钮槽函数
void MainWindow::on_pushButtonEngineStop_clicked()
{
    serialSendData(0xB0,0);
    ui->verticalSliderEngine->setValue(0);
    ui->verticalSliderEngine->setEnabled(false);
}
//紧急停车按钮槽函数
void MainWindow::on_pushButtonEngineEmergentStop_clicked()
{
    serialSendData(0xA0,0);
    ui->verticalSliderEngine->setValue(0);
    ui->verticalSliderEngine->setEnabled(false);
}
//滑动条值变化槽函数
void MainWindow::verticalSliderEngineValueChanged(int val)
{
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
    //开启0.3S油泵，0.3S内油泵按钮不可点击
    OilButtonPressFlag = 1;
    timOilButton->start();
    ui->pushButtonTestOilPump->setEnabled(false);
    serialSendData(1,1);

}
//解包函数
void MainWindow::get_ecu_rec_data(uint8_t *data,uint8_t id)
{
//    实例 1：0xF1 0x00 0x00 0x00 0x00 0x4C 0xA0
//    F1 00 00 00 00 4C A0
//    ID: 1
//    RPM: 0 引擎转速
//    Engine State: 0 引擎状态 (停机)
//    ECode: 0 错误代码
//    Temp: 26℃ 引擎排气温度（摄氏度）
//    SwSt: 0 主机(计算机、飞控)给 ECU 的控制状态(引擎停机)
//    -------------------------------------------------
//    实例 2：0xF6 0x00 0x00 0xA0 0x00 0x10 0xAB
//    F6 00 00 A0 00 10 AB
//    ID: 6
//    RPM: 0 引擎转速
//    Max RPM: 160000 引擎最大转速
//    Max Pump Voltage: 0.0V 已经学习的油泵最高电压
//    Protocol Version: 4 协议版本
//    SRate: 20Hz 当前数据更新速率
//    实例 3：0xF1 0x01 0x87 0x63 0x44 0x6F 0x47
//    F1 01 87 63 44 6F 47
//    ID: 1
//    RPM: 345610 引擎转速
//    Engine State: 3 点火
//    ECode: 3 火头故障
//    Temp: 317℃ 引擎排气温度（摄氏度）
//    SwSt: 2 主机(计算机、飞控)给 ECU 的控制状态(引擎启动)
    if(id == 0x01)
    {
        dataReal.engineRPM = ((data[2] << 8) + data[1])*10;
        dataReal.engineState = data[3] & 0x1F;
        dataReal.ECode = ((data[4] & 0x03) << 3) + ((data[3] & 0xE0)>>5);
        dataReal.temp = ((int(data[4] & 0x1C)) << 6) + int(data[5]) - 50;
        if(dataReal.engineState>=19){
            dataReal.engineState=19;
        }
        if(dataReal.engineState>=20){
            dataReal.engineState=20;
        }
        if(dataReal.ECode>=19){
            dataReal.ECode=19;
        }
    }
    else if(id == 0x02)
    {
        dataReal.engineRPM = ((data[2] << 8) + data[1])*10;
        dataReal.powerVoltage = double(data[4])*0.1;
        dataReal.pumpVoltage = double(data[5])*0.1;
    }
    else if(id == 0x04)
    {
        dataReal.engineRPM = ((data[2] << 8) + data[1])*10;
        dataReal.current = double((uint16_t(data[4] & 0x01) << 8) + uint16_t(data[3]))*0.1;
    }
    else{
        dataReal.engineRPM = ((data[2] << 8) + data[1])*10;
    }

}
//刷新数据
void MainWindow::Refresh()
{
    ui->lineEditPowerVoltage->setText(QString::number(dataReal.powerVoltage,'f',2));
    ui->lineEditCurrent->setText(QString::number(dataReal.current,'f',2));
    ui->lineEditEngineState->setText(EngineStateText[dataReal.engineState]);
    ui->lineEditECode->setText(ECodeText[dataReal.ECode]);
    ui->lineEditEngineRPM->setText(QString::number(dataReal.engineRPM));
    ui->lineEditTemp->setText(QString::number(dataReal.temp));
    ui->lineEditPumpVoltage->setText(QString::number(dataReal.pumpVoltage,'f',2));
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
uint8_t MainWindow::ecu_crc8(uint8_t *puchMsg,uint8_t crc_len, uint8_t seed)
{
    uint8_t i,ecuCrc8 = seed;
    for(i = 0 ; i < crc_len; i++)
    {
        ecuCrc8 = crcArray[ecuCrc8^puchMsg[i]];
    }
    return ecuCrc8;
}


//void MainWindow::Reslove_Data(Rev_data data,Real_Data &data1)
//{
//    #pragma pack(1)//设定为1字节对齐
//    union Swap
//    {
//        char a[2];
//        unsigned short b;
//    };
//    #pragma pack(0)//设定为1字节对齐
//    Swap swap;

//    swap.a[0]=((char *)(&data.engineRPM))[1];
//    swap.a[1]=((char *)(&data.engineRPM))[0];
//    data1.engineRPM=swap.b*10;

//    data1.powerVoltage=double(int(&data.powerVoltage))/10.00;

//    swap.a[0]=((char *)(&data.current))[1];
//    swap.a[1]=((char *)(&data.current))[0];
//    data1.current=swap.b/10.00;

//    data1.pumpVoltage=double(int(&data.pumpVoltage))/10.00;

//    swap.a[0]=((char *)(&data.temp))[1];
//    swap.a[1]=((char *)(&data.temp))[0];
//    data1.temp=swap.b-50;

//    data1.ECode=int(&data.ECode);

//    data1.engineState=int(&data.engineState);
//}
MainWindow::~MainWindow()
{
    delete ui;
}
