/****************************************************************************
** Meta object code from reading C++ file 'digtalioa2.h'
**
** Created: Fri Jul 28 15:19:18 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "digtalioa2.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'digtalioa2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DigtalIoA2[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   11,   11,   11, 0x08,
      58,   11,   11,   11, 0x08,
      77,   11,   11,   11, 0x08,
      96,   11,   11,   11, 0x08,
     117,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DigtalIoA2[] = {
    "DigtalIoA2\0\0name\0selectItem(QString)\0"
    "on_btnDown_clicked()\0on_btnUp_clicked()\0"
    "on_btnA1_clicked()\0on_btnBack_clicked()\0"
    "myKeyPress()\0"
};

const QMetaObject DigtalIoA2::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_DigtalIoA2,
      qt_meta_data_DigtalIoA2, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DigtalIoA2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DigtalIoA2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DigtalIoA2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DigtalIoA2))
        return static_cast<void*>(const_cast< DigtalIoA2*>(this));
    return MyBase::qt_metacast(_clname);
}

int DigtalIoA2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selectItem((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_btnDown_clicked(); break;
        case 2: on_btnUp_clicked(); break;
        case 3: on_btnA1_clicked(); break;
        case 4: on_btnBack_clicked(); break;
        case 5: myKeyPress(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void DigtalIoA2::selectItem(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
