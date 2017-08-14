/****************************************************************************
** Meta object code from reading C++ file 'portdata.h'
**
** Created: Fri Jul 28 15:19:19 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "portdata.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'portdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PortData[] = {

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
      10,    9,    9,    9, 0x08,
      31,    9,    9,    9, 0x08,
      54,    9,    9,    9, 0x08,
      80,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PortData[] = {
    "PortData\0\0on_btnBack_clicked()\0"
    "on_btnSearch_clicked()\0on_btnInputPort_clicked()\0"
    "keyboardEvent()\0"
};

const QMetaObject PortData::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_PortData,
      qt_meta_data_PortData, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PortData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PortData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PortData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PortData))
        return static_cast<void*>(const_cast< PortData*>(this));
    return MyBase::qt_metacast(_clname);
}

int PortData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnBack_clicked(); break;
        case 1: on_btnSearch_clicked(); break;
        case 2: on_btnInputPort_clicked(); break;
        case 3: keyboardEvent(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
