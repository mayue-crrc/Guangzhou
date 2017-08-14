/****************************************************************************
** Meta object code from reading C++ file 'statparameter.h'
**
** Created: Fri Jul 28 15:19:09 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "statparameter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statparameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StatParameter[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      35,   14,   14,   14, 0x08,
      55,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StatParameter[] = {
    "StatParameter\0\0on_btnTcu_clicked()\0"
    "on_btnSiv_clicked()\0on_btnBack_clicked()\0"
};

const QMetaObject StatParameter::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_StatParameter,
      qt_meta_data_StatParameter, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StatParameter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StatParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StatParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StatParameter))
        return static_cast<void*>(const_cast< StatParameter*>(this));
    return MyBase::qt_metacast(_clname);
}

int StatParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnTcu_clicked(); break;
        case 1: on_btnSiv_clicked(); break;
        case 2: on_btnBack_clicked(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
