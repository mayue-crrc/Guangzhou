/****************************************************************************
** Meta object code from reading C++ file 'systemtest.h'
**
** Created: Fri Jul 28 15:19:03 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "systemtest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemtest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SystemTest[] = {

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
      12,   11,   11,   11, 0x0a,
      23,   11,   11,   11, 0x08,
      44,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SystemTest[] = {
    "SystemTest\0\0mySelect()\0on_btnBack_clicked()\0"
    "on_btnConfirm_clicked()\0"
};

const QMetaObject SystemTest::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_SystemTest,
      qt_meta_data_SystemTest, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SystemTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SystemTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SystemTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SystemTest))
        return static_cast<void*>(const_cast< SystemTest*>(this));
    return MyBase::qt_metacast(_clname);
}

int SystemTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: mySelect(); break;
        case 1: on_btnBack_clicked(); break;
        case 2: on_btnConfirm_clicked(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
