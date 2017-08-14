/****************************************************************************
** Meta object code from reading C++ file 'othersparameters.h'
**
** Created: Fri Jul 28 15:19:34 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "othersparameters.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'othersparameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OthersParameters[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      39,   17,   17,   17, 0x08,
      58,   17,   17,   17, 0x08,
      79,   17,   17,   17, 0x08,
      99,   17,   17,   17, 0x08,
     119,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OthersParameters[] = {
    "OthersParameters\0\0on_btnDown_clicked()\0"
    "on_btnUp_clicked()\0on_btnBack_clicked()\0"
    "on_btnBcu_pressed()\0on_btnTcu_pressed()\0"
    "on_btnSiv_pressed()\0"
};

const QMetaObject OthersParameters::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_OthersParameters,
      qt_meta_data_OthersParameters, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OthersParameters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OthersParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OthersParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OthersParameters))
        return static_cast<void*>(const_cast< OthersParameters*>(this));
    return MyBase::qt_metacast(_clname);
}

int OthersParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnDown_clicked(); break;
        case 1: on_btnUp_clicked(); break;
        case 2: on_btnBack_clicked(); break;
        case 3: on_btnBcu_pressed(); break;
        case 4: on_btnTcu_pressed(); break;
        case 5: on_btnSiv_pressed(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
