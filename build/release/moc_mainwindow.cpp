/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[494];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "timeoutOilButton"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "timeOutThrottle"
QT_MOC_LITERAL(4, 45, 27), // "on_pushButtonSerial_clicked"
QT_MOC_LITERAL(5, 73, 7), // "checked"
QT_MOC_LITERAL(6, 81, 30), // "on_pushButtonWaterPump_clicked"
QT_MOC_LITERAL(7, 112, 33), // "on_pushButtonWaterPumpOff_cli..."
QT_MOC_LITERAL(8, 146, 31), // "on_pushButtonPowderPump_clicked"
QT_MOC_LITERAL(9, 178, 34), // "on_pushButtonPowderPumpOff_cl..."
QT_MOC_LITERAL(10, 213, 26), // "on_pushButtonReset_clicked"
QT_MOC_LITERAL(11, 240, 16), // "slotrevserialmsg"
QT_MOC_LITERAL(12, 257, 26), // "on_windowTopButton_clicked"
QT_MOC_LITERAL(13, 284, 34), // "on_pushButtonEngineControl_cl..."
QT_MOC_LITERAL(14, 319, 32), // "on_pushButtonEngineStart_clicked"
QT_MOC_LITERAL(15, 352, 31), // "on_pushButtonEngineStop_clicked"
QT_MOC_LITERAL(16, 384, 39), // "on_pushButtonEngineEmergentSt..."
QT_MOC_LITERAL(17, 424, 32), // "on_pushButtonTestOilPump_clicked"
QT_MOC_LITERAL(18, 457, 32), // "verticalSliderEngineValueChanged"
QT_MOC_LITERAL(19, 490, 3) // "val"

    },
    "MainWindow\0timeoutOilButton\0\0"
    "timeOutThrottle\0on_pushButtonSerial_clicked\0"
    "checked\0on_pushButtonWaterPump_clicked\0"
    "on_pushButtonWaterPumpOff_clicked\0"
    "on_pushButtonPowderPump_clicked\0"
    "on_pushButtonPowderPumpOff_clicked\0"
    "on_pushButtonReset_clicked\0slotrevserialmsg\0"
    "on_windowTopButton_clicked\0"
    "on_pushButtonEngineControl_clicked\0"
    "on_pushButtonEngineStart_clicked\0"
    "on_pushButtonEngineStop_clicked\0"
    "on_pushButtonEngineEmergentStop_clicked\0"
    "on_pushButtonTestOilPump_clicked\0"
    "verticalSliderEngineValueChanged\0val"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    1,   96,    2, 0x08 /* Private */,
       6,    0,   99,    2, 0x08 /* Private */,
       7,    0,  100,    2, 0x08 /* Private */,
       8,    0,  101,    2, 0x08 /* Private */,
       9,    0,  102,    2, 0x08 /* Private */,
      10,    0,  103,    2, 0x08 /* Private */,
      11,    0,  104,    2, 0x08 /* Private */,
      12,    1,  105,    2, 0x08 /* Private */,
      13,    1,  108,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    1,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timeoutOilButton(); break;
        case 1: _t->timeOutThrottle(); break;
        case 2: _t->on_pushButtonSerial_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_pushButtonWaterPump_clicked(); break;
        case 4: _t->on_pushButtonWaterPumpOff_clicked(); break;
        case 5: _t->on_pushButtonPowderPump_clicked(); break;
        case 6: _t->on_pushButtonPowderPumpOff_clicked(); break;
        case 7: _t->on_pushButtonReset_clicked(); break;
        case 8: _t->slotrevserialmsg(); break;
        case 9: _t->on_windowTopButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_pushButtonEngineControl_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_pushButtonEngineStart_clicked(); break;
        case 12: _t->on_pushButtonEngineStop_clicked(); break;
        case 13: _t->on_pushButtonEngineEmergentStop_clicked(); break;
        case 14: _t->on_pushButtonTestOilPump_clicked(); break;
        case 15: _t->verticalSliderEngineValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
