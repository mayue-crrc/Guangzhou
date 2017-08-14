/****************************************************************************
** Meta object code from reading C++ file 'mycase.h'
**
** Created: Fri Jul 28 15:18:54 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mycase.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mycase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyCase[] = {

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
       8,    7,    7,    7, 0x08,
      28,    7,    7,    7, 0x08,
      57,    7,    7,    7, 0x08,
      82,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MyCase[] = {
    "MyCase\0\0on_btnAll_clicked()\0"
    "on_btnPreviousPage_clicked()\0"
    "on_btnNextPage_clicked()\0itemSelected()\0"
};

const QMetaObject MyCase::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_MyCase,
      qt_meta_data_MyCase, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyCase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyCase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyCase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyCase))
        return static_cast<void*>(const_cast< MyCase*>(this));
    return MyBase::qt_metacast(_clname);
}

int MyCase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnAll_clicked(); break;
        case 1: on_btnPreviousPage_clicked(); break;
        case 2: on_btnNextPage_clicked(); break;
        case 3: itemSelected(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
