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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *GroupBoxSeries;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *comboBoxSerial;
    QPushButton *pushButtonSerial;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *windowTopButton;
    QGroupBox *gridGroupBox;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonReset;
    QGroupBox *GroupBoxValve;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QPushButton *pushButtonPowderPump;
    QPushButton *pushButtonPowderPumpOff;
    QPushButton *pushButtonPowderLED;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QPushButton *pushButtonWaterPump;
    QPushButton *pushButtonWaterPumpOff;
    QPushButton *pushButtonWaterLED;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(975, 221);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
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

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


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

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonReset = new QPushButton(gridGroupBox);
        pushButtonReset->setObjectName(QStringLiteral("pushButtonReset"));

        horizontalLayout->addWidget(pushButtonReset);


        gridLayout_6->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout->addWidget(gridGroupBox, 0, 1, 1, 1);

        GroupBoxValve = new QGroupBox(centralWidget);
        GroupBoxValve->setObjectName(QStringLiteral("GroupBoxValve"));
        gridLayout_2 = new QGridLayout(GroupBoxValve);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
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

        horizontalSpacer_2 = new QSpacerItem(5, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_4 = new QLabel(GroupBoxValve);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        pushButtonWaterPump = new QPushButton(GroupBoxValve);
        pushButtonWaterPump->setObjectName(QStringLiteral("pushButtonWaterPump"));

        horizontalLayout_2->addWidget(pushButtonWaterPump);

        pushButtonWaterPumpOff = new QPushButton(GroupBoxValve);
        pushButtonWaterPumpOff->setObjectName(QStringLiteral("pushButtonWaterPumpOff"));

        horizontalLayout_2->addWidget(pushButtonWaterPumpOff);

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

        horizontalLayout_2->addWidget(pushButtonWaterLED);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 1, 1, 2);


        gridLayout->addWidget(GroupBoxValve, 1, 0, 2, 3);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        GroupBoxSeries->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\344\270\262\345\217\243", Q_NULLPTR));
        pushButtonSerial->setText(QString());
        windowTopButton->setText(QString());
        gridGroupBox->setTitle(QApplication::translate("MainWindow", "\345\244\215\344\275\215\346\216\247\345\210\266", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\345\244\215\344\275\215", Q_NULLPTR));
        pushButtonReset->setText(QApplication::translate("MainWindow", "\345\205\250\351\203\250\345\205\263\351\227\255", Q_NULLPTR));
        GroupBoxValve->setTitle(QApplication::translate("MainWindow", "\351\230\200\351\227\250\345\274\200\345\205\263", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\347\262\211\351\230\200", Q_NULLPTR));
        pushButtonPowderPump->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        pushButtonPowderPumpOff->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
        pushButtonPowderLED->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "\346\260\264\346\263\265", Q_NULLPTR));
        pushButtonWaterPump->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        pushButtonWaterPumpOff->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
        pushButtonWaterLED->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
