/****************************************************************************
** Meta object code from reading C++ file 'braketestpage.h'
**
** Created: Fri Jul 28 15:19:35 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "braketestpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'braketestpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BrakeTestPage[] = {

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
      37,   14,   14,   14, 0x08,
      58,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BrakeTestPage[] = {
    "BrakeTestPage\0\0on_btnCheck_clicked()\0"
    "on_btnBack_clicked()\0resetSelfCheckFlag()\0"
};

const QMetaObject BrakeTestPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_BrakeTestPage,
      qt_meta_data_BrakeTestPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BrakeTestPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BrakeTestPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BrakeTestPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BrakeTestPage))
        return static_cast<void*>(const_cast< BrakeTestPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int BrakeTestPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnCheck_clicked(); break;
        case 1: on_btnBack_clicked(); break;
        case 2: resetSelfCheckFlag(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
