/****************************************************************************
** Meta object code from reading C++ file 'qt_settingsdisplay.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qt_settingsdisplay.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_settingsdisplay.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsDisplay_t {
    QByteArrayData data[12];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsDisplay_t qt_meta_stringdata_SettingsDisplay = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SettingsDisplay"
QT_MOC_LITERAL(1, 16, 23), // "onCurrentMachineChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 9), // "machineId"
QT_MOC_LITERAL(4, 51, 30), // "on_checkBoxVoodoo_stateChanged"
QT_MOC_LITERAL(5, 82, 5), // "state"
QT_MOC_LITERAL(6, 88, 27), // "on_checkBoxXga_stateChanged"
QT_MOC_LITERAL(7, 116, 36), // "on_comboBoxVideo_currentIndex..."
QT_MOC_LITERAL(8, 153, 5), // "index"
QT_MOC_LITERAL(9, 159, 36), // "on_pushButtonConfigureVoodoo_..."
QT_MOC_LITERAL(10, 196, 33), // "on_pushButtonConfigureXga_cli..."
QT_MOC_LITERAL(11, 230, 30) // "on_pushButtonConfigure_clicked"

    },
    "SettingsDisplay\0onCurrentMachineChanged\0"
    "\0machineId\0on_checkBoxVoodoo_stateChanged\0"
    "state\0on_checkBoxXga_stateChanged\0"
    "on_comboBoxVideo_currentIndexChanged\0"
    "index\0on_pushButtonConfigureVoodoo_clicked\0"
    "on_pushButtonConfigureXga_clicked\0"
    "on_pushButtonConfigure_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsDisplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x08 /* Private */,
       6,    1,   55,    2, 0x08 /* Private */,
       7,    1,   58,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,
      10,    0,   62,    2, 0x08 /* Private */,
      11,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SettingsDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingsDisplay *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onCurrentMachineChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_checkBoxVoodoo_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_checkBoxXga_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_comboBoxVideo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_pushButtonConfigureVoodoo_clicked(); break;
        case 5: _t->on_pushButtonConfigureXga_clicked(); break;
        case 6: _t->on_pushButtonConfigure_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SettingsDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SettingsDisplay.data,
    qt_meta_data_SettingsDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SettingsDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsDisplay.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SettingsDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
