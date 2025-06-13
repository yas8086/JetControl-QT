/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *gridGroupBox_2;
    QGridLayout *gridLayout_7;
    QPushButton *pushButtonOilPumpLED;
    QPushButton *pushButtonTestOilPump;
    QLabel *label_10;
    QLineEdit *lineEditPumpVoltage;
    QGroupBox *GroupBoxSeries;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *comboBoxSerial;
    QPushButton *pushButtonSerial;
    QPushButton *windowTopButton;
    QGroupBox *GroupBoxValve;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QPushButton *pushButtonWaterPump;
    QPushButton *pushButtonWaterPumpOff;
    QPushButton *pushButtonWaterLED;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QPushButton *pushButtonPowderPump;
    QPushButton *pushButtonPowderPumpOff;
    QPushButton *pushButtonPowderLED;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QPushButton *pushButtonReset;
    QGroupBox *gridGroupBox;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_8;
    QLabel *label_7;
    QLineEdit *lineEditPowerVoltage;
    QLabel *label_5;
    QLineEdit *lineEditCurrent;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEditEngineState;
    QLineEdit *lineEditECode;
    QGroupBox *gridGroupBox1;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_2;
    QSlider *verticalSliderEngine;
    QSpinBox *spinBoxEngineValue;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonEngineControl;
    QPushButton *pushButtonEngineStart;
    QPushButton *pushButtonEngineStop;
    QPushButton *pushButtonEngineEmergentStop;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QLineEdit *lineEditTemp;
    QLabel *label;
    QLineEdit *lineEditEngineRPM;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1200, 800);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridGroupBox_2 = new QGroupBox(centralWidget);
        gridGroupBox_2->setObjectName(QStringLiteral("gridGroupBox_2"));
        gridGroupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid rgb(75, 75, 75);   \n"
"    border-radius: 5px;          /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    margin: 5px;             /* \344\270\272\346\240\207\351\242\230\351\242\204\347\225\231\347\251\272\351\227\264 */\n"
"	padding-top: 20px;\n"
"}\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;   /* \346\240\207\351\242\230\345\237\272\344\272\216margin\345\214\272\345\237\237\345\256\232\344\275\215 */\n"
"    subcontrol-position: top center; /* \346\240\207\351\242\230\345\261\205\344\270\255 */\n"
"    \n"
"}"));
        gridLayout_7 = new QGridLayout(gridGroupBox_2);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        pushButtonOilPumpLED = new QPushButton(gridGroupBox_2);
        pushButtonOilPumpLED->setObjectName(QStringLiteral("pushButtonOilPumpLED"));
        pushButtonOilPumpLED->setMinimumSize(QSize(38, 38));
        pushButtonOilPumpLED->setMaximumSize(QSize(38, 38));
        pushButtonOilPumpLED->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-image: url(:/img/\346\214\207\347\244\272\347\201\257-\347\272\242.png);\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"border-image: url(:/img/\346\214\207\347\244\272\347\201\257-\347\273\277.png);\n"
"}\n"
"QPushButton::unchecked\n"
"{\n"
"border-image: url(:/img/\346\214\207\347\244\272\347\201\257-\347\272\242.png);\n"
"}"));

        gridLayout_7->addWidget(pushButtonOilPumpLED, 0, 3, 1, 1);

        pushButtonTestOilPump = new QPushButton(gridGroupBox_2);
        pushButtonTestOilPump->setObjectName(QStringLiteral("pushButtonTestOilPump"));
        pushButtonTestOilPump->setMinimumSize(QSize(150, 0));

        gridLayout_7->addWidget(pushButtonTestOilPump, 0, 0, 1, 1);

        label_10 = new QLabel(gridGroupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(label_10, 0, 4, 1, 1);

        lineEditPumpVoltage = new QLineEdit(gridGroupBox_2);
        lineEditPumpVoltage->setObjectName(QStringLiteral("lineEditPumpVoltage"));
        lineEditPumpVoltage->setMinimumSize(QSize(100, 0));
        lineEditPumpVoltage->setMaximumSize(QSize(400, 16777215));

        gridLayout_7->addWidget(lineEditPumpVoltage, 0, 5, 1, 1);


        gridLayout->addWidget(gridGroupBox_2, 3, 0, 1, 1);

        GroupBoxSeries = new QGroupBox(centralWidget);
        GroupBoxSeries->setObjectName(QStringLiteral("GroupBoxSeries"));
        GroupBoxSeries->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid rgb(75, 75, 75);   \n"
"    border-radius: 5px;          /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    margin: 5px;             /* \344\270\272\346\240\207\351\242\230\351\242\204\347\225\231\347\251\272\351\227\264 */\n"
"	padding-top: 20px;\n"
"}\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;   /* \346\240\207\351\242\230\345\237\272\344\272\216margin\345\214\272\345\237\237\345\256\232\344\275\215 */\n"
"    subcontrol-position: top center; /* \346\240\207\351\242\230\345\261\205\344\270\255 */\n"
"    \n"
"}"));
        gridLayout_4 = new QGridLayout(GroupBoxSeries);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(GroupBoxSeries);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_3);

        comboBoxSerial = new QComboBox(GroupBoxSeries);
        comboBoxSerial->setObjectName(QStringLiteral("comboBoxSerial"));
        comboBoxSerial->setMaximumSize(QSize(400, 16777215));

        horizontalLayout_4->addWidget(comboBoxSerial);

        pushButtonSerial = new QPushButton(GroupBoxSeries);
        pushButtonSerial->setObjectName(QStringLiteral("pushButtonSerial"));
        pushButtonSerial->setMinimumSize(QSize(87, 28));
        pushButtonSerial->setMaximumSize(QSize(87, 28));
        pushButtonSerial->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border-image: url(:/img/btncheckoff2.png);\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"border-image: url(:/img/btncheckon2.png);\n"
"}\n"
"QPushButton::unchecked\n"
"{\n"
"border-image: url(:/img/btncheckoff2.png);\n"
"}"));
        pushButtonSerial->setIconSize(QSize(87, 28));

        horizontalLayout_4->addWidget(pushButtonSerial);

        windowTopButton = new QPushButton(GroupBoxSeries);
        windowTopButton->setObjectName(QStringLiteral("windowTopButton"));
        windowTopButton->setEnabled(true);
        windowTopButton->setMinimumSize(QSize(38, 38));
        windowTopButton->setMaximumSize(QSize(38, 38));
        windowTopButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-image: url(:/img/\347\252\227\345\217\243\347\275\256\351\241\266.png);\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"border-image: url(:/img/\345\267\262\347\275\256\351\241\266.png);\n"
"}\n"
"QPushButton::unchecked\n"
"{\n"
"border-image: url(:/img/\347\252\227\345\217\243\347\275\256\351\241\266.png);\n"
"}"));
        windowTopButton->setCheckable(true);

        horizontalLayout_4->addWidget(windowTopButton);


        gridLayout_4->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        gridLayout->addWidget(GroupBoxSeries, 0, 0, 1, 1);

        GroupBoxValve = new QGroupBox(centralWidget);
        GroupBoxValve->setObjectName(QStringLiteral("GroupBoxValve"));
        GroupBoxValve->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid rgb(75, 75, 75);   \n"
"    border-radius: 5px;          /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    margin: 5px;             /* \344\270\272\346\240\207\351\242\230\351\242\204\347\225\231\347\251\272\351\227\264 */\n"
"	padding-top: 20px;\n"
"}\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;   /* \346\240\207\351\242\230\345\237\272\344\272\216margin\345\214\272\345\237\237\345\256\232\344\275\215 */\n"
"    subcontrol-position: top center; /* \346\240\207\351\242\230\345\261\205\344\270\255 */\n"
"    \n"
"}"));
        gridLayout_2 = new QGridLayout(GroupBoxValve);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(GroupBoxValve);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_4);

        pushButtonWaterPump = new QPushButton(GroupBoxValve);
        pushButtonWaterPump->setObjectName(QStringLiteral("pushButtonWaterPump"));
        pushButtonWaterPump->setMaximumSize(QSize(400, 16777215));

        horizontalLayout_3->addWidget(pushButtonWaterPump);

        pushButtonWaterPumpOff = new QPushButton(GroupBoxValve);
        pushButtonWaterPumpOff->setObjectName(QStringLiteral("pushButtonWaterPumpOff"));
        pushButtonWaterPumpOff->setMaximumSize(QSize(400, 16777215));

        horizontalLayout_3->addWidget(pushButtonWaterPumpOff);

        pushButtonWaterLED = new QPushButton(GroupBoxValve);
        pushButtonWaterLED->setObjectName(QStringLiteral("pushButtonWaterLED"));
        pushButtonWaterLED->setEnabled(false);
        pushButtonWaterLED->setMinimumSize(QSize(38, 38));
        pushButtonWaterLED->setMaximumSize(QSize(38, 38));
        pushButtonWaterLED->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-image: url(:/img/\346\214\207\347\244\272\347\201\257-\347\272\242.png);\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"border-image: url(:/img/\346\214\207\347\244\272\347\201\257-\347\273\277.png);\n"
"}\n"
"QPushButton::unchecked\n"
"{\n"
"border-image: url(:/img/\346\214\207\347\244\272\347\201\257-\347\272\242.png);\n"
"}"));
        pushButtonWaterLED->setCheckable(true);

        horizontalLayout_3->addWidget(pushButtonWaterLED);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 1, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(GroupBoxValve);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_2);

        pushButtonPowderPump = new QPushButton(GroupBoxValve);
        pushButtonPowderPump->setObjectName(QStringLiteral("pushButtonPowderPump"));
        pushButtonPowderPump->setMaximumSize(QSize(400, 16777215));

        horizontalLayout_2->addWidget(pushButtonPowderPump);

        pushButtonPowderPumpOff = new QPushButton(GroupBoxValve);
        pushButtonPowderPumpOff->setObjectName(QStringLiteral("pushButtonPowderPumpOff"));
        pushButtonPowderPumpOff->setMaximumSize(QSize(400, 16777215));

        horizontalLayout_2->addWidget(pushButtonPowderPumpOff);

        pushButtonPowderLED = new QPushButton(GroupBoxValve);
        pushButtonPowderLED->setObjectName(QStringLiteral("pushButtonPowderLED"));
        pushButtonPowderLED->setEnabled(false);
        pushButtonPowderLED->setMinimumSize(QSize(38, 38));
        pushButtonPowderLED->setMaximumSize(QSize(38, 38));
        pushButtonPowderLED->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-image: url(:/img/\346\214\207\347\244\272\347\201\257-\347\272\242.png);\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"border-image: url(:/img/\346\214\207\347\244\272\347\201\257-\347\273\277.png);\n"
"}\n"
"QPushButton::unchecked\n"
"{\n"
"border-image: url(:/img/\346\214\207\347\244\272\347\201\257-\347\272\242.png);\n"
"}"));
        pushButtonPowderLED->setCheckable(true);

        horizontalLayout_2->addWidget(pushButtonPowderLED);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(GroupBoxValve);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_6);

        pushButtonReset = new QPushButton(GroupBoxValve);
        pushButtonReset->setObjectName(QStringLiteral("pushButtonReset"));
        pushButtonReset->setMaximumSize(QSize(800, 16777215));

        horizontalLayout->addWidget(pushButtonReset);


        gridLayout_2->addLayout(horizontalLayout, 3, 1, 1, 2);


        gridLayout->addWidget(GroupBoxValve, 1, 0, 2, 1);

        gridGroupBox = new QGroupBox(centralWidget);
        gridGroupBox->setObjectName(QStringLiteral("gridGroupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gridGroupBox->sizePolicy().hasHeightForWidth());
        gridGroupBox->setSizePolicy(sizePolicy2);
        gridGroupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid rgb(75, 75, 75);   \n"
"    border-radius: 5px;          /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    margin: 5px;             /* \344\270\272\346\240\207\351\242\230\351\242\204\347\225\231\347\251\272\351\227\264 */\n"
"	padding-top: 20px;\n"
"}\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;   /* \346\240\207\351\242\230\345\237\272\344\272\216margin\345\214\272\345\237\237\345\256\232\344\275\215 */\n"
"    subcontrol-position: top center; /* \346\240\207\351\242\230\345\261\205\344\270\255 */\n"
"    \n"
"}"));
        gridLayout_3 = new QGridLayout(gridGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        label_7 = new QLabel(gridGroupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_8->addWidget(label_7, 0, 2, 1, 1);

        lineEditPowerVoltage = new QLineEdit(gridGroupBox);
        lineEditPowerVoltage->setObjectName(QStringLiteral("lineEditPowerVoltage"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEditPowerVoltage->sizePolicy().hasHeightForWidth());
        lineEditPowerVoltage->setSizePolicy(sizePolicy3);

        gridLayout_8->addWidget(lineEditPowerVoltage, 0, 1, 1, 1);

        label_5 = new QLabel(gridGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_8->addWidget(label_5, 0, 0, 1, 1);

        lineEditCurrent = new QLineEdit(gridGroupBox);
        lineEditCurrent->setObjectName(QStringLiteral("lineEditCurrent"));
        sizePolicy3.setHeightForWidth(lineEditCurrent->sizePolicy().hasHeightForWidth());
        lineEditCurrent->setSizePolicy(sizePolicy3);

        gridLayout_8->addWidget(lineEditCurrent, 0, 3, 1, 1);

        label_8 = new QLabel(gridGroupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_8->addWidget(label_8, 1, 0, 1, 1);

        label_9 = new QLabel(gridGroupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_8->addWidget(label_9, 1, 2, 1, 1);

        lineEditEngineState = new QLineEdit(gridGroupBox);
        lineEditEngineState->setObjectName(QStringLiteral("lineEditEngineState"));
        sizePolicy3.setHeightForWidth(lineEditEngineState->sizePolicy().hasHeightForWidth());
        lineEditEngineState->setSizePolicy(sizePolicy3);

        gridLayout_8->addWidget(lineEditEngineState, 1, 1, 1, 1);

        lineEditECode = new QLineEdit(gridGroupBox);
        lineEditECode->setObjectName(QStringLiteral("lineEditECode"));
        sizePolicy3.setHeightForWidth(lineEditECode->sizePolicy().hasHeightForWidth());
        lineEditECode->setSizePolicy(sizePolicy3);

        gridLayout_8->addWidget(lineEditECode, 1, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout_8, 0, 0, 1, 1);

        gridGroupBox1 = new QGroupBox(gridGroupBox);
        gridGroupBox1->setObjectName(QStringLiteral("gridGroupBox1"));
        gridLayout_5 = new QGridLayout(gridGroupBox1);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSliderEngine = new QSlider(gridGroupBox1);
        verticalSliderEngine->setObjectName(QStringLiteral("verticalSliderEngine"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(verticalSliderEngine->sizePolicy().hasHeightForWidth());
        verticalSliderEngine->setSizePolicy(sizePolicy4);
        verticalSliderEngine->setMinimumSize(QSize(200, 0));
        verticalSliderEngine->setStyleSheet(QString::fromUtf8("/* \347\273\277\350\211\262\345\256\275\347\211\210\345\236\202\347\233\264\346\273\221\345\235\227\346\240\267\345\274\217 */\n"
"QSlider::groove:vertical {\n"
"    background: #37474F;\n"
"    width:200px;  /* \345\212\240\345\256\275\350\275\250\351\201\223 */\n"
"}\n"
"/* \347\273\277\350\211\262\345\256\275\347\211\210\345\236\202\347\233\264\346\273\221\345\235\227\346\240\267\345\274\217 */\n"
"QSlider::handle:vertical {\n"
"    background: rgb(0, 255, 0);\n"
"    width: 110px;  /* \345\212\240\345\244\247\346\211\213\346\237\204 */\n"
"    height: 30px;\n"
"\n"
"}\n"
"/* \346\234\252\345\210\222\350\277\207\347\232\204 */\n"
"QSlider::add-page:vertical {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                           stop:0 #2E7D32, stop:0.5 #4CAF50, stop:1 #81C784);\n"
"   \n"
"}\n"
"/* \345\210\222\350\277\207\347\232\204 */\n"
"QSlider::sub-page:vertical {\n"
"    background: #455A64;\n"
"    \n"
"}"));
        verticalSliderEngine->setMaximum(100);
        verticalSliderEngine->setOrientation(Qt::Vertical);

        verticalLayout_2->addWidget(verticalSliderEngine);

        spinBoxEngineValue = new QSpinBox(gridGroupBox1);
        spinBoxEngineValue->setObjectName(QStringLiteral("spinBoxEngineValue"));
        spinBoxEngineValue->setMinimumSize(QSize(200, 0));
        spinBoxEngineValue->setMaximumSize(QSize(200, 16777215));
        spinBoxEngineValue->setMaximum(100);

        verticalLayout_2->addWidget(spinBoxEngineValue);


        gridLayout_5->addLayout(verticalLayout_2, 3, 3, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButtonEngineControl = new QPushButton(gridGroupBox1);
        pushButtonEngineControl->setObjectName(QStringLiteral("pushButtonEngineControl"));
        sizePolicy3.setHeightForWidth(pushButtonEngineControl->sizePolicy().hasHeightForWidth());
        pushButtonEngineControl->setSizePolicy(sizePolicy3);
        pushButtonEngineControl->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color: rgb(255, 80, 11);\n"
"border: 1px solid rgba(255, 255, 255, 0.1);\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"	background-color: rgb(0, 150, 0);\n"
"border: 1px solid rgba(255, 255, 255, 0.1);\n"
"}"));
        pushButtonEngineControl->setCheckable(true);

        verticalLayout->addWidget(pushButtonEngineControl);

        pushButtonEngineStart = new QPushButton(gridGroupBox1);
        pushButtonEngineStart->setObjectName(QStringLiteral("pushButtonEngineStart"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pushButtonEngineStart->sizePolicy().hasHeightForWidth());
        pushButtonEngineStart->setSizePolicy(sizePolicy5);
        pushButtonEngineStart->setStyleSheet(QLatin1String("QPushButton::checked\n"
"{\n"
"	background-color: rgb(85, 255, 127);\n"
"	border: 1px solid rgba(255, 255, 255, 0.1);\n"
"}"));
        pushButtonEngineStart->setCheckable(true);
        pushButtonEngineStart->setAutoExclusive(true);

        verticalLayout->addWidget(pushButtonEngineStart);

        pushButtonEngineStop = new QPushButton(gridGroupBox1);
        pushButtonEngineStop->setObjectName(QStringLiteral("pushButtonEngineStop"));
        sizePolicy5.setHeightForWidth(pushButtonEngineStop->sizePolicy().hasHeightForWidth());
        pushButtonEngineStop->setSizePolicy(sizePolicy5);
        pushButtonEngineStop->setStyleSheet(QLatin1String("QPushButton::checked\n"
"{\n"
"	background-color: rgb(85, 255, 127);\n"
"border: 1px solid rgba(255, 255, 255, 0.1);\n"
"}"));
        pushButtonEngineStop->setCheckable(true);
        pushButtonEngineStop->setAutoExclusive(true);

        verticalLayout->addWidget(pushButtonEngineStop);

        pushButtonEngineEmergentStop = new QPushButton(gridGroupBox1);
        pushButtonEngineEmergentStop->setObjectName(QStringLiteral("pushButtonEngineEmergentStop"));
        sizePolicy5.setHeightForWidth(pushButtonEngineEmergentStop->sizePolicy().hasHeightForWidth());
        pushButtonEngineEmergentStop->setSizePolicy(sizePolicy5);
        pushButtonEngineEmergentStop->setStyleSheet(QLatin1String("QPushButton::checked\n"
"{\n"
"	background-color: rgb(85, 255, 127);\n"
"border: 1px solid rgba(255, 255, 255, 0.1);\n"
"}"));
        pushButtonEngineEmergentStop->setCheckable(true);
        pushButtonEngineEmergentStop->setChecked(true);
        pushButtonEngineEmergentStop->setAutoExclusive(true);

        verticalLayout->addWidget(pushButtonEngineEmergentStop);


        gridLayout_5->addLayout(verticalLayout, 3, 0, 3, 3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_11 = new QLabel(gridGroupBox1);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_5->addWidget(label_11);

        lineEditTemp = new QLineEdit(gridGroupBox1);
        lineEditTemp->setObjectName(QStringLiteral("lineEditTemp"));
        sizePolicy3.setHeightForWidth(lineEditTemp->sizePolicy().hasHeightForWidth());
        lineEditTemp->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(lineEditTemp);

        label = new QLabel(gridGroupBox1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        lineEditEngineRPM = new QLineEdit(gridGroupBox1);
        lineEditEngineRPM->setObjectName(QStringLiteral("lineEditEngineRPM"));
        sizePolicy3.setHeightForWidth(lineEditEngineRPM->sizePolicy().hasHeightForWidth());
        lineEditEngineRPM->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(lineEditEngineRPM);


        gridLayout_5->addLayout(horizontalLayout_5, 6, 0, 1, 4);


        gridLayout_3->addWidget(gridGroupBox1, 2, 0, 4, 1);


        gridLayout->addWidget(gridGroupBox, 0, 1, 4, 2);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        gridGroupBox_2->setTitle(QApplication::translate("MainWindow", "\346\265\213\350\257\225\346\262\271\346\263\265", Q_NULLPTR));
        pushButtonOilPumpLED->setText(QString());
        pushButtonTestOilPump->setText(QApplication::translate("MainWindow", "\346\265\213\350\257\225\346\262\271\346\263\265(\347\237\255\346\227\266)", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "\346\262\271\346\263\265\347\224\265\345\216\213\357\274\232", Q_NULLPTR));
        GroupBoxSeries->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\344\270\262\345\217\243", Q_NULLPTR));
        pushButtonSerial->setText(QString());
        windowTopButton->setText(QString());
        GroupBoxValve->setTitle(QApplication::translate("MainWindow", "\351\230\200\351\227\250\346\216\247\345\210\266", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\346\260\264\346\263\265", Q_NULLPTR));
        pushButtonWaterPump->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        pushButtonWaterPumpOff->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
        pushButtonWaterLED->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\347\262\211\351\230\200", Q_NULLPTR));
        pushButtonPowderPump->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        pushButtonPowderPumpOff->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
        pushButtonPowderLED->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "\345\244\215\344\275\215", Q_NULLPTR));
        pushButtonReset->setText(QApplication::translate("MainWindow", "\345\205\250\351\203\250\345\205\263\351\227\255", Q_NULLPTR));
        gridGroupBox->setTitle(QApplication::translate("MainWindow", "\345\217\221\345\212\250\346\234\272\346\216\247\345\210\266", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\347\224\265\346\265\201\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\345\212\250\345\212\233\347\224\265\345\216\213\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\345\274\225\346\223\216\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\351\224\231\350\257\257\344\277\241\346\201\257\357\274\232", Q_NULLPTR));
        gridGroupBox1->setTitle(QApplication::translate("MainWindow", "\346\262\271\351\227\250\346\216\247\345\210\266", Q_NULLPTR));
        pushButtonEngineControl->setText(QApplication::translate("MainWindow", "\345\274\200\345\220\257\346\216\247\345\210\266", Q_NULLPTR));
        pushButtonEngineStart->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250", Q_NULLPTR));
        pushButtonEngineStop->setText(QApplication::translate("MainWindow", "\345\201\234\350\275\246/\346\225\243\347\203\255", Q_NULLPTR));
        pushButtonEngineEmergentStop->setText(QApplication::translate("MainWindow", "\347\264\247\346\200\245\345\201\234\350\275\246", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\346\216\222\346\260\224\346\270\251\345\272\246\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\350\275\254\351\200\237\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
