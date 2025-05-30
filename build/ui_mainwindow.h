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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *gridGroupBox;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QPushButton *pushButtonReset;
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
    QGroupBox *GroupBoxSeries;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *comboBoxSerial;
    QPushButton *pushButtonSerial;
    QPushButton *windowTopButton;
    QGroupBox *gridGroupBox1;
    QGridLayout *gridLayout_3;
    QGroupBox *gridGroupBox2;
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
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *gridGroupBox_2;
    QGridLayout *gridLayout_7;
    QPushButton *pushButtonTestOilPump;
    QPushButton *pushButtonOilPumpLED;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(628, 520);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridGroupBox = new QGroupBox(centralWidget);
        gridGroupBox->setObjectName(QStringLiteral("gridGroupBox"));
        gridLayout_6 = new QGridLayout(gridGroupBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(gridGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        pushButtonReset = new QPushButton(gridGroupBox);
        pushButtonReset->setObjectName(QStringLiteral("pushButtonReset"));

        horizontalLayout->addWidget(pushButtonReset);


        gridLayout_6->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout->addWidget(gridGroupBox, 3, 0, 1, 1);

        GroupBoxValve = new QGroupBox(centralWidget);
        GroupBoxValve->setObjectName(QStringLiteral("GroupBoxValve"));
        gridLayout_2 = new QGridLayout(GroupBoxValve);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(GroupBoxValve);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        pushButtonWaterPump = new QPushButton(GroupBoxValve);
        pushButtonWaterPump->setObjectName(QStringLiteral("pushButtonWaterPump"));

        horizontalLayout_3->addWidget(pushButtonWaterPump);

        pushButtonWaterPumpOff = new QPushButton(GroupBoxValve);
        pushButtonWaterPumpOff->setObjectName(QStringLiteral("pushButtonWaterPumpOff"));

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

        horizontalLayout_2->addWidget(label_2);

        pushButtonPowderPump = new QPushButton(GroupBoxValve);
        pushButtonPowderPump->setObjectName(QStringLiteral("pushButtonPowderPump"));

        horizontalLayout_2->addWidget(pushButtonPowderPump);

        pushButtonPowderPumpOff = new QPushButton(GroupBoxValve);
        pushButtonPowderPumpOff->setObjectName(QStringLiteral("pushButtonPowderPumpOff"));

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


        gridLayout->addWidget(GroupBoxValve, 1, 0, 2, 1);

        GroupBoxSeries = new QGroupBox(centralWidget);
        GroupBoxSeries->setObjectName(QStringLiteral("GroupBoxSeries"));
        gridLayout_4 = new QGridLayout(GroupBoxSeries);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(GroupBoxSeries);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        comboBoxSerial = new QComboBox(GroupBoxSeries);
        comboBoxSerial->setObjectName(QStringLiteral("comboBoxSerial"));

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


        gridLayout_4->addLayout(horizontalLayout_4, 0, 0, 1, 1);

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

        gridLayout_4->addWidget(windowTopButton, 0, 1, 1, 1);


        gridLayout->addWidget(GroupBoxSeries, 0, 0, 1, 1);

        gridGroupBox1 = new QGroupBox(centralWidget);
        gridGroupBox1->setObjectName(QStringLiteral("gridGroupBox1"));
        gridLayout_3 = new QGridLayout(gridGroupBox1);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridGroupBox2 = new QGroupBox(gridGroupBox1);
        gridGroupBox2->setObjectName(QStringLiteral("gridGroupBox2"));
        gridLayout_5 = new QGridLayout(gridGroupBox2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSliderEngine = new QSlider(gridGroupBox2);
        verticalSliderEngine->setObjectName(QStringLiteral("verticalSliderEngine"));
        verticalSliderEngine->setMinimumSize(QSize(68, 0));
        verticalSliderEngine->setStyleSheet(QString::fromUtf8("/* \347\273\277\350\211\262\345\256\275\347\211\210\345\236\202\347\233\264\346\273\221\345\235\227\346\240\267\345\274\217 */\n"
"QSlider::groove:vertical {\n"
"    background: #37474F;\n"
"    width:800px;  /* \345\212\240\345\256\275\350\275\250\351\201\223 */\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: rgb(255, 255, 255);\n"
"    width: 50px;  /* \345\212\240\345\244\247\346\211\213\346\237\204 */\n"
"    height: 20px;\n"
"\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"    background: #455A64;\n"
"    border: 1px solid #1B5E20;\n"
"    border-radius: 15px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                           stop:0 #2E7D32, stop:0.5 #4CAF50, stop:1 #81C784);\n"
"    border: 1px solid #37474F;\n"
"    border-radius: 15px;\n"
"}\n"
"\n"
"QSlider::handle:vertical:hover {\n"
"    background: qradialgradient(cx:0.5, cy:0.5, radius:0.5, \n"
"                           fx:0.5, fy:0.5, \n"
"                       "
                        "    stop:0.8 white, stop:1.0 #81C784);\n"
"    border-color: #388E3C;\n"
"}\n"
"\n"
"QSlider::handle:vertical:pressed {\n"
"    background: qradialgradient(cx:0.5, cy:0.5, radius:0.5, \n"
"                           fx:0.5, fy:0.5, \n"
"                           stop:0.8 white, stop:1.0 #1B5E20);\n"
"    border-color: #1B5E20;\n"
"}"));
        verticalSliderEngine->setMaximum(100);
        verticalSliderEngine->setOrientation(Qt::Vertical);

        verticalLayout_2->addWidget(verticalSliderEngine);

        spinBoxEngineValue = new QSpinBox(gridGroupBox2);
        spinBoxEngineValue->setObjectName(QStringLiteral("spinBoxEngineValue"));
        spinBoxEngineValue->setMaximum(100);

        verticalLayout_2->addWidget(spinBoxEngineValue);


        gridLayout_5->addLayout(verticalLayout_2, 3, 3, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButtonEngineControl = new QPushButton(gridGroupBox2);
        pushButtonEngineControl->setObjectName(QStringLiteral("pushButtonEngineControl"));
        pushButtonEngineControl->setStyleSheet(QLatin1String("QPushButton::checked\n"
"{\n"
"	background-color: rgb(255, 85, 0);\n"
"}"));
        pushButtonEngineControl->setCheckable(true);

        verticalLayout->addWidget(pushButtonEngineControl);

        pushButtonEngineStart = new QPushButton(gridGroupBox2);
        pushButtonEngineStart->setObjectName(QStringLiteral("pushButtonEngineStart"));
        pushButtonEngineStart->setStyleSheet(QLatin1String("QPushButton::checked\n"
"{\n"
"	background-color: rgb(85, 255, 127);\n"
"}"));
        pushButtonEngineStart->setCheckable(true);
        pushButtonEngineStart->setAutoExclusive(true);

        verticalLayout->addWidget(pushButtonEngineStart);

        pushButtonEngineStop = new QPushButton(gridGroupBox2);
        pushButtonEngineStop->setObjectName(QStringLiteral("pushButtonEngineStop"));
        pushButtonEngineStop->setStyleSheet(QLatin1String("QPushButton::checked\n"
"{\n"
"	background-color: rgb(85, 255, 127);\n"
"}"));
        pushButtonEngineStop->setCheckable(true);
        pushButtonEngineStop->setAutoExclusive(true);

        verticalLayout->addWidget(pushButtonEngineStop);

        pushButtonEngineEmergentStop = new QPushButton(gridGroupBox2);
        pushButtonEngineEmergentStop->setObjectName(QStringLiteral("pushButtonEngineEmergentStop"));
        pushButtonEngineEmergentStop->setStyleSheet(QLatin1String("QPushButton::checked\n"
"{\n"
"	background-color: rgb(85, 255, 127);\n"
"}"));
        pushButtonEngineEmergentStop->setCheckable(true);
        pushButtonEngineEmergentStop->setChecked(true);
        pushButtonEngineEmergentStop->setAutoExclusive(true);

        verticalLayout->addWidget(pushButtonEngineEmergentStop);


        gridLayout_5->addLayout(verticalLayout, 3, 0, 3, 3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(gridGroupBox2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        lineEdit = new QLineEdit(gridGroupBox2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_5->addWidget(lineEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        gridLayout_5->addLayout(horizontalLayout_5, 6, 0, 1, 4);


        gridLayout_3->addWidget(gridGroupBox2, 4, 0, 1, 1);

        gridGroupBox_2 = new QGroupBox(gridGroupBox1);
        gridGroupBox_2->setObjectName(QStringLiteral("gridGroupBox_2"));
        gridLayout_7 = new QGridLayout(gridGroupBox_2);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        pushButtonTestOilPump = new QPushButton(gridGroupBox_2);
        pushButtonTestOilPump->setObjectName(QStringLiteral("pushButtonTestOilPump"));

        gridLayout_7->addWidget(pushButtonTestOilPump, 0, 0, 1, 1);

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

        gridLayout_7->addWidget(pushButtonOilPumpLED, 0, 1, 1, 1);


        gridLayout_3->addWidget(gridGroupBox_2, 5, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(gridGroupBox1);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        lineEdit_2 = new QLineEdit(gridGroupBox1);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_6->addWidget(lineEdit_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        gridLayout_3->addLayout(horizontalLayout_6, 0, 0, 1, 1);


        gridLayout->addWidget(gridGroupBox1, 0, 1, 4, 2);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        gridGroupBox->setTitle(QApplication::translate("MainWindow", "\345\244\215\344\275\215\346\216\247\345\210\266", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\345\244\215\344\275\215", Q_NULLPTR));
        pushButtonReset->setText(QApplication::translate("MainWindow", "\345\205\250\351\203\250\345\205\263\351\227\255", Q_NULLPTR));
        GroupBoxValve->setTitle(QApplication::translate("MainWindow", "\351\230\200\351\227\250\346\216\247\345\210\266", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\346\260\264\346\263\265", Q_NULLPTR));
        pushButtonWaterPump->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        pushButtonWaterPumpOff->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
        pushButtonWaterLED->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\347\262\211\351\230\200", Q_NULLPTR));
        pushButtonPowderPump->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        pushButtonPowderPumpOff->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
        pushButtonPowderLED->setText(QString());
        GroupBoxSeries->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\344\270\262\345\217\243", Q_NULLPTR));
        pushButtonSerial->setText(QString());
        windowTopButton->setText(QString());
        gridGroupBox1->setTitle(QApplication::translate("MainWindow", "\345\217\221\345\212\250\346\234\272\346\216\247\345\210\266", Q_NULLPTR));
        gridGroupBox2->setTitle(QApplication::translate("MainWindow", "\346\262\271\351\227\250\346\216\247\345\210\266", Q_NULLPTR));
        pushButtonEngineControl->setText(QApplication::translate("MainWindow", "\345\274\200\345\220\257\346\216\247\345\210\266", Q_NULLPTR));
        pushButtonEngineStart->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250", Q_NULLPTR));
        pushButtonEngineStop->setText(QApplication::translate("MainWindow", "\345\201\234\350\275\246/\346\225\243\347\203\255", Q_NULLPTR));
        pushButtonEngineEmergentStop->setText(QApplication::translate("MainWindow", "\347\264\247\346\200\245\345\201\234\350\275\246", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\350\275\254\351\200\237\357\274\232", Q_NULLPTR));
        gridGroupBox_2->setTitle(QApplication::translate("MainWindow", "\346\265\213\350\257\225\346\262\271\346\263\265", Q_NULLPTR));
        pushButtonTestOilPump->setText(QApplication::translate("MainWindow", "\346\265\213\350\257\225\346\262\271\346\263\265(\347\237\255\346\227\266)", Q_NULLPTR));
        pushButtonOilPumpLED->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "\347\224\265\345\216\213\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
