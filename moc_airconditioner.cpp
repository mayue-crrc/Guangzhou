/****************************************************************************
** Meta object code from reading C++ file 'airconditioner.h'
**
** Created: Fri Jul 28 15:18:53 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "airconditioner.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'airconditioner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AirConditioner[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      42,   15,   15,   15, 0x08,
      70,   15,   15,   15, 0x08,
      95,   15,   15,   15, 0x08,
     116,   15,   15,   15, 0x08,
     142,   15,   15,   15, 0x08,
     169,   15,   15,   15, 0x08,
     194,   15,   15,   15, 0x08,
     218,   15,   15,   15, 0x08,
     238,   15,   15,   15, 0x08,
     259,   15,   15,   15, 0x08,
     280,   15,   15,   15, 0x08,
     301,   15,   15,   15, 0x08,
     322,   15,   15,   15, 0x08,
     343,   15,   15,   15, 0x08,
     364,   15,   15,   15, 0x08,
     385,   15,   15,   15, 0x08,
     406,   15,   15,   15, 0x08,
     430,   15,   15,   15, 0x08,
     461,   15,   15,   15, 0x08,
     478,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AirConditioner[] = {
    "AirConditioner\0\0on_btnVentilate_clicked()\0"
    "on_btnExitPreCool_pressed()\0"
    "on_btnFireMode_clicked()\0on_btnAuto_clicked()\0"
    "on_btnEmergency_clicked()\0"
    "on_btnManualCool_clicked()\0"
    "on_btnAutoCool_clicked()\0"
    "on_btnSetting_clicked()\0on_btnAll_clicked()\0"
    "on_btnA002_clicked()\0on_btnB002_clicked()\0"
    "on_btnC002_clicked()\0on_btnD002_clicked()\0"
    "on_btnD001_clicked()\0on_btnC001_clicked()\0"
    "on_btnB001_clicked()\0on_btnA001_clicked()\0"
    "on_btnModeSet_clicked()\0"
    "on_btnTemperatureSet_clicked()\0"
    "temperatureSet()\0resetFlag()\0"
};

const QMetaObject AirConditioner::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_AirConditioner,
      qt_meta_data_AirConditioner, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AirConditioner::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AirConditioner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AirConditioner::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AirConditioner))
        return static_cast<void*>(const_cast< AirConditioner*>(this));
    return MyBase::qt_metacast(_clname);
}

int AirConditioner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnVentilate_clicked(); break;
        case 1: on_btnExitPreCool_pressed(); break;
        case 2: on_btnFireMode_clicked(); break;
        case 3: on_btnAuto_clicked(); break;
        case 4: on_btnEmergency_clicked(); break;
        case 5: on_btnManualCool_clicked(); break;
        case 6: on_btnAutoCool_clicked(); break;
        case 7: on_btnSetting_clicked(); break;
        case 8: on_btnAll_clicked(); break;
        case 9: on_btnA002_clicked(); break;
        case 10: on_btnB002_clicked(); break;
        case 11: on_btnC002_clicked(); break;
        case 12: on_btnD002_clicked(); break;
        case 13: on_btnD001_clicked(); break;
        case 14: on_btnC001_clicked(); break;
        case 15: on_btnB001_clicked(); break;
        case 16: on_btnA001_clicked(); break;
        case 17: on_btnModeSet_clicked(); break;
        case 18: on_btnTemperatureSet_clicked(); break;
        case 19: temperatureSet(); break;
        case 20: resetFlag(); break;
        default: ;
        }
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
