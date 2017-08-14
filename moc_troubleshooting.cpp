/****************************************************************************
** Meta object code from reading C++ file 'troubleshooting.h'
**
** Created: Fri Jul 28 15:18:58 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "troubleshooting.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'troubleshooting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TroubleShooting[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      37,   16,   16,   16, 0x08,
      62,   16,   16,   16, 0x08,
      93,   16,   16,   16, 0x08,
     118,   16,   16,   16, 0x08,
     142,   16,   16,   16, 0x08,
     165,   16,   16,   16, 0x08,
     196,   16,   16,   16, 0x08,
     224,   16,   16,   16, 0x08,
     248,   16,   16,   16, 0x08,
     276,   16,   16,   16, 0x08,
     303,   16,   16,   16, 0x08,
     327,   16,   16,   16, 0x08,
     356,   16,   16,   16, 0x08,
     384,   16,   16,   16, 0x08,
     414,   16,   16,   16, 0x08,
     442,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TroubleShooting[] = {
    "TroubleShooting\0\0on_btnLcu_clicked()\0"
    "on_btnBusState_clicked()\0"
    "on_btnHmiPositionSet_clicked()\0"
    "on_btnAllPorts_clicked()\0"
    "on_btnMvbPort_clicked()\0on_btnIOUnit_clicked()\0"
    "on_btnChangePassword_clicked()\0"
    "on_btnFaultRecord_clicked()\0"
    "on_btnVersion_clicked()\0"
    "on_btnDeviceState_clicked()\0"
    "on_btnColorCheck_clicked()\0"
    "on_btnNetwork_clicked()\0"
    "on_btnAccumulation_clicked()\0"
    "on_btnVehicleTest_clicked()\0"
    "on_btnVehicleNumber_clicked()\0"
    "on_btnDiameterSet_clicked()\0"
    "on_btnTimeSet_clicked()\0"
};

const QMetaObject TroubleShooting::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_TroubleShooting,
      qt_meta_data_TroubleShooting, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TroubleShooting::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TroubleShooting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TroubleShooting::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TroubleShooting))
        return static_cast<void*>(const_cast< TroubleShooting*>(this));
    return MyBase::qt_metacast(_clname);
}

int TroubleShooting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnLcu_clicked(); break;
        case 1: on_btnBusState_clicked(); break;
        case 2: on_btnHmiPositionSet_clicked(); break;
        case 3: on_btnAllPorts_clicked(); break;
        case 4: on_btnMvbPort_clicked(); break;
        case 5: on_btnIOUnit_clicked(); break;
        case 6: on_btnChangePassword_clicked(); break;
        case 7: on_btnFaultRecord_clicked(); break;
        case 8: on_btnVersion_clicked(); break;
        case 9: on_btnDeviceState_clicked(); break;
        case 10: on_btnColorCheck_clicked(); break;
        case 11: on_btnNetwork_clicked(); break;
        case 12: on_btnAccumulation_clicked(); break;
        case 13: on_btnVehicleTest_clicked(); break;
        case 14: on_btnVehicleNumber_clicked(); break;
        case 15: on_btnDiameterSet_clicked(); break;
        case 16: on_btnTimeSet_clicked(); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
