/****************************************************************************
** Meta object code from reading C++ file 'setlight.h'
**
** Created: Fri Jul 28 15:19:16 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "setlight.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setlight.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SetLight[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      21,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SetLight[] = {
    "SetLight\0\0setVoice()\0setLightLevel()\0"
};

const QMetaObject SetLight::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_SetLight,
      qt_meta_data_SetLight, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SetLight::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SetLight::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SetLight::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SetLight))
        return static_cast<void*>(const_cast< SetLight*>(this));
    return MyBase::qt_metacast(_clname);
}

int SetLight::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setVoice(); break;
        case 1: setLightLevel(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
