/****************************************************************************
** Meta object code from reading C++ file 'wheeldiameterset.h'
**
** Created: Fri Jul 28 15:19:00 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wheeldiameterset.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wheeldiameterset.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WheelDiameterSet[] = {

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
      24,   18,   17,   17, 0x0a,
      42,   17,   17,   17, 0x0a,
      67,   17,   17,   17, 0x0a,
      83,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WheelDiameterSet[] = {
    "WheelDiameterSet\0\0index\0selectButton(int)\0"
    "myKeyPressEvent(QString)\0mySelectEvent()\0"
    "wheelDiamterCommandReset()\0"
};

const QMetaObject WheelDiameterSet::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_WheelDiameterSet,
      qt_meta_data_WheelDiameterSet, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WheelDiameterSet::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WheelDiameterSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WheelDiameterSet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WheelDiameterSet))
        return static_cast<void*>(const_cast< WheelDiameterSet*>(this));
    return MyBase::qt_metacast(_clname);
}

int WheelDiameterSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selectButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: myKeyPressEvent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: mySelectEvent(); break;
        case 3: wheelDiamterCommandReset(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
