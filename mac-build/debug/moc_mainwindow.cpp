/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Source/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[14];
    char stringdata[469];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 22),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 30),
QT_MOC_LITERAL(4, 66, 45),
QT_MOC_LITERAL(5, 112, 45),
QT_MOC_LITERAL(6, 158, 45),
QT_MOC_LITERAL(7, 204, 37),
QT_MOC_LITERAL(8, 242, 40),
QT_MOC_LITERAL(9, 283, 39),
QT_MOC_LITERAL(10, 323, 32),
QT_MOC_LITERAL(11, 356, 32),
QT_MOC_LITERAL(12, 389, 38),
QT_MOC_LITERAL(13, 428, 39)
    },
    "MainWindow\0on_buttonClose_clicked\0\0"
    "on_buttonRunSimulation_clicked\0"
    "on_inputParaboloidCoefficientsX_returnPressed\0"
    "on_inputParaboloidCoefficientsY_returnPressed\0"
    "on_inputParaboloidCoefficientsZ_returnPressed\0"
    "on_inputParaboloidAngle_returnPressed\0"
    "on_inputSlicingPlaneHeight_returnPressed\0"
    "on_inputSlicingPlaneAngle_returnPressed\0"
    "on_inputPhoneAngle_returnPressed\0"
    "on_inputUserRadius_returnPressed\0"
    "on_inputResolutionLinear_returnPressed\0"
    "on_inputResolutionAngular_returnPressed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08,
       3,    0,   75,    2, 0x08,
       4,    0,   76,    2, 0x08,
       5,    0,   77,    2, 0x08,
       6,    0,   78,    2, 0x08,
       7,    0,   79,    2, 0x08,
       8,    0,   80,    2, 0x08,
       9,    0,   81,    2, 0x08,
      10,    0,   82,    2, 0x08,
      11,    0,   83,    2, 0x08,
      12,    0,   84,    2, 0x08,
      13,    0,   85,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_buttonClose_clicked(); break;
        case 1: _t->on_buttonRunSimulation_clicked(); break;
        case 2: _t->on_inputParaboloidCoefficientsX_returnPressed(); break;
        case 3: _t->on_inputParaboloidCoefficientsY_returnPressed(); break;
        case 4: _t->on_inputParaboloidCoefficientsZ_returnPressed(); break;
        case 5: _t->on_inputParaboloidAngle_returnPressed(); break;
        case 6: _t->on_inputSlicingPlaneHeight_returnPressed(); break;
        case 7: _t->on_inputSlicingPlaneAngle_returnPressed(); break;
        case 8: _t->on_inputPhoneAngle_returnPressed(); break;
        case 9: _t->on_inputUserRadius_returnPressed(); break;
        case 10: _t->on_inputResolutionLinear_returnPressed(); break;
        case 11: _t->on_inputResolutionAngular_returnPressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE