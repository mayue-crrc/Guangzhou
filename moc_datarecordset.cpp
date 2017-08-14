/****************************************************************************
** Meta object code from reading C++ file 'datarecordset.h'
**
** Created: Fri Jul 28 15:19:05 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "datarecordset.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datarecordset.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DataRecordSet[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      49,   14,   14,   14, 0x08,
      79,   14,   14,   14, 0x08,
     114,   14,   14,   14, 0x08,
     149,   14,   14,   14, 0x08,
     188,   14,   14,   14, 0x08,
     222,   14,   14,   14, 0x08,
     253,   14,   14,   14, 0x08,
     284,   14,   14,   14, 0x08,
     315,   14,   14,   14, 0x08,
     346,  342,   14,   14, 0x08,
     371,   14,   14,   14, 0x08,
     385,   14,   14,   14, 0x08,
     399,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DataRecordSet[] = {
    "DataRecordSet\0\0on_btnRecordDistanceSet_clicked()\0"
    "on_btnRecordTimeSet_clicked()\0"
    "on_btnRegeneratePowerSet_clicked()\0"
    "on_btnBrakeConsuptionSet_clicked()\0"
    "on_btnTractionConsumptionSet_clicked()\0"
    "on_btnSivConsumptionSet_clicked()\0"
    "on_btnConsumptionSet_clicked()\0"
    "on_btnCompressor2Set_clicked()\0"
    "on_btnCompressor1Set_clicked()\0"
    "on_btnMileageSet_clicked()\0key\0"
    "myKeyPressEvent(QString)\0mySelection()\0"
    "myRecordSet()\0resetFlag()\0"
};

const QMetaObject DataRecordSet::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_DataRecordSet,
      qt_meta_data_DataRecordSet, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DataRecordSet::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DataRecordSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DataRecordSet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataRecordSet))
        return static_cast<void*>(const_cast< DataRecordSet*>(this));
    return MyBase::qt_metacast(_clname);
}

int DataRecordSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnRecordDistanceSet_clicked(); break;
        case 1: on_btnRecordTimeSet_clicked(); break;
        case 2: on_btnRegeneratePowerSet_clicked(); break;
        case 3: on_btnBrakeConsuptionSet_clicked(); break;
        case 4: on_btnTractionConsumptionSet_clicked(); break;
        case 5: on_btnSivConsumptionSet_clicked(); break;
        case 6: on_btnConsumptionSet_clicked(); break;
        case 7: on_btnCompressor2Set_clicked(); break;
        case 8: on_btnCompressor1Set_clicked(); break;
        case 9: on_btnMileageSet_clicked(); break;
        case 10: myKeyPressEvent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: mySelection(); break;
        case 12: myRecordSet(); break;
        case 13: resetFlag(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
