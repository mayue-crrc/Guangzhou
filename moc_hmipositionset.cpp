/****************************************************************************
** Meta object code from reading C++ file 'hmipositionset.h'
**
** Created: Fri Jul 28 15:19:21 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "hmipositionset.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hmipositionset.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HmiPositionSet[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      39,   15,   15,   15, 0x08,
      60,   15,   15,   15, 0x08,
      79,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HmiPositionSet[] = {
    "HmiPositionSet\0\0on_btnReboot_clicked()\0"
    "on_btnBack_clicked()\0on_btnA2_clicked()\0"
    "on_btnA1_clicked()\0"
};

const QMetaObject HmiPositionSet::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_HmiPositionSet,
      qt_meta_data_HmiPositionSet, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HmiPositionSet::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HmiPositionSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HmiPositionSet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HmiPositionSet))
        return static_cast<void*>(const_cast< HmiPositionSet*>(this));
    return MyBase::qt_metacast(_clname);
}

int HmiPositionSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnReboot_clicked(); break;
        case 1: on_btnBack_clicked(); break;
        case 2: on_btnA2_clicked(); break;
        case 3: on_btnA1_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
