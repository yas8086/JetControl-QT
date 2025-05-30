#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QSerialPort"
#include "QSerialPortInfo"
#include "QMessageBox"
#include <QDebug>
#include<QButtonGroup>
#include<QFile>
#include "QTimer"

namespace Ui {
class MainWindow;
}
struct dataRec
{
    char hard[6];
    uint8_t stateOilPump;
    uint8_t WaterPump;
    uint8_t PowderValue;
    uint8_t Engine;
    uint16_t clc;
};
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    //私有变量
    bool serialIsOpen;
    bool sendDataFlag = false;
    uint oilPumpCount;
    uint8_t OilButtonPressFlag = 0;
    int verticalSliderValue = 0;
    //私有对象
    QTimer *timOilButton;
    QTimer *timThrottle;
    QSerialPort serial;
    QButtonGroup* ButtonGroupEngineStatus;
    //私有函数
    bool eventFilter(QObject* watched, QEvent* event);
    uint16_t crc16Calc(uint8_t *data, uint8_t len);
    uint8_t crc8Calc(uint8_t *data, uint8_t len);
    void serialSendData(uint8_t deviceId,uint8_t value);
    void serialSendEngineData(uint8_t EngineControlFlag, uint8_t EngineControlValue);
    void serialSendOilPumpData();
private slots:
    void timeoutOilButton();
    void timeOutThrottle();
    void on_pushButtonSerial_clicked(bool checked);
//    void on_pushButtonOilPump_clicked(bool checked);
    void on_pushButtonWaterPump_clicked();
    void on_pushButtonWaterPumpOff_clicked();
//    void on_pushButtonPowderValue_clicked();
    void on_pushButtonPowderPump_clicked();
    void on_pushButtonPowderPumpOff_clicked();
//    void on_pushButtonEngine_clicked();
    void on_pushButtonReset_clicked();
//    void timeoutSendData();
    void slotrevserialmsg();
    void on_windowTopButton_clicked(bool checked);
    void on_pushButtonEngineControl_clicked(bool checked);
    void on_pushButtonEngineStart_clicked();
    void on_pushButtonEngineStop_clicked();
    void on_pushButtonEngineEmergentStop_clicked();
    void on_pushButtonTestOilPump_clicked();
    void verticalSliderEngineValueChanged(int val);
};

#endif // MAINWINDOW_H
