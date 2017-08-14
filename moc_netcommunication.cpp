/****************************************************************************
** Meta object code from reading C++ file 'netcommunication.h'
**
** Created: Fri Jul 28 15:19:07 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "netcommunication.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'netcommunication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NetCommunication[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NetCommunication[] = {
    "NetCommunication\0\0on_btnBack_clicked()\0"
};

const QMetaObject NetCommunication::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_NetCommunication,
      qt_meta_data_NetCommunication, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NetCommunication::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NetCommunication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NetCommunication::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NetCommunication))
        return static_cast<void*>(const_cast< NetCommunication*>(this));
    return MyBase::qt_metacast(_clname);
}

int NetCommunication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnBack_clicked(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
