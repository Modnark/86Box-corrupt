/****************************************************************************
** Meta object code from reading C++ file 'qt_settingsnetwork.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qt_settingsnetwork.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_settingsnetwork.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsNetwork_t {
    QByteArrayData data[9];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsNetwork_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsNetwork_t qt_meta_stringdata_SettingsNetwork = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SettingsNetwork"
QT_MOC_LITERAL(1, 16, 23), // "onCurrentMachineChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 9), // "machineId"
QT_MOC_LITERAL(4, 51, 30), // "on_pushButtonConfigure_clicked"
QT_MOC_LITERAL(5, 82, 38), // "on_comboBoxAdapter_currentInd..."
QT_MOC_LITERAL(6, 121, 5), // "index"
QT_MOC_LITERAL(7, 127, 38), // "on_comboBoxNetwork_currentInd..."
QT_MOC_LITERAL(8, 166, 35) // "on_comboBoxPcap_currentIndexC..."

    },
    "SettingsNetwork\0onCurrentMachineChanged\0"
    "\0machineId\0on_pushButtonConfigure_clicked\0"
    "on_comboBoxAdapter_currentIndexChanged\0"
    "index\0on_comboBoxNetwork_currentIndexChanged\0"
    "on_comboBoxPcap_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsNetwork[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    0,   42,    2, 0x08 /* Private */,
       5,    1,   43,    2, 0x08 /* Private */,
       7,    1,   46,    2, 0x08 /* Private */,
       8,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void SettingsNetwork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingsNetwork *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onCurrentMachineChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_pushButtonConfigure_clicked(); break;
        case 2: _t->on_comboBoxAdapter_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_comboBoxNetwork_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_comboBoxPcap_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SettingsNetwork::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SettingsNetwork.data,
    qt_meta_data_SettingsNetwork,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SettingsNetwork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsNetwork::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsNetwork.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SettingsNetwork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
