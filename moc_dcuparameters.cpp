/****************************************************************************
** Meta object code from reading C++ file 'dcuparameters.h'
**
** Created: Fri Jul 28 15:19:25 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dcuparameters.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dcuparameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DcuParameters[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      34,   14,   14,   14, 0x08,
      55,   14,   14,   14, 0x08,
      76,   14,   14,   14, 0x08,
      96,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DcuParameters[] = {
    "DcuParameters\0\0on_btnUp_clicked()\0"
    "on_btnDown_clicked()\0on_btnBack_clicked()\0"
    "on_btnBcu_pressed()\0on_btnSiv_pressed()\0"
};

const QMetaObject DcuParameters::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_DcuParameters,
      qt_meta_data_DcuParameters, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DcuParameters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DcuParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DcuParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DcuParameters))
        return static_cast<void*>(const_cast< DcuParameters*>(this));
    return MyBase::qt_metacast(_clname);
}

int DcuParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnUp_clicked(); break;
        case 1: on_btnDown_clicked(); break;
        case 2: on_btnBack_clicked(); break;
        case 3: on_btnBcu_pressed(); break;
        case 4: on_btnSiv_pressed(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
