/****************************************************************************
** Meta object code from reading C++ file 'sivtest.h'
**
** Created: Fri Jul 28 15:19:37 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sivtest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sivtest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SivTest[] = {

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
       9,    8,    8,    8, 0x08,
      37,    8,    8,    8, 0x08,
      65,    8,    8,    8, 0x08,
      93,    8,    8,    8, 0x08,
     121,    8,    8,    8, 0x08,
     142,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SivTest[] = {
    "SivTest\0\0on_btnSivCutoutA2_clicked()\0"
    "on_btnSivCutoutC2_clicked()\0"
    "on_btnSivCutoutC1_clicked()\0"
    "on_btnSivCutoutA1_clicked()\0"
    "on_btnBack_clicked()\0resetFlag()\0"
};

const QMetaObject SivTest::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_SivTest,
      qt_meta_data_SivTest, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SivTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SivTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SivTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SivTest))
        return static_cast<void*>(const_cast< SivTest*>(this));
    return MyBase::qt_metacast(_clname);
}

int SivTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnSivCutoutA2_clicked(); break;
        case 1: on_btnSivCutoutC2_clicked(); break;
        case 2: on_btnSivCutoutC1_clicked(); break;
        case 3: on_btnSivCutoutA1_clicked(); break;
        case 4: on_btnBack_clicked(); break;
        case 5: resetFlag(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
