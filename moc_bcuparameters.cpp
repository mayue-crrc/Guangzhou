/****************************************************************************
** Meta object code from reading C++ file 'bcuparameters.h'
**
** Created: Fri Jul 28 15:19:31 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bcuparameters.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bcuparameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BcuParameters[] = {

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
      15,   14,   14,   14, 0x08,
      38,   14,   14,   14, 0x08,
      58,   14,   14,   14, 0x08,
      78,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BcuParameters[] = {
    "BcuParameters\0\0on_btnOthers_pressed()\0"
    "on_btnSiv_pressed()\0on_btnDcu_pressed()\0"
    "on_btnBack_clicked()\0"
};

const QMetaObject BcuParameters::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_BcuParameters,
      qt_meta_data_BcuParameters, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BcuParameters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BcuParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BcuParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BcuParameters))
        return static_cast<void*>(const_cast< BcuParameters*>(this));
    return MyBase::qt_metacast(_clname);
}

int BcuParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnOthers_pressed(); break;
        case 1: on_btnSiv_pressed(); break;
        case 2: on_btnDcu_pressed(); break;
        case 3: on_btnBack_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
