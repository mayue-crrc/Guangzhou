/****************************************************************************
** Meta object code from reading C++ file 'softwareversion.h'
**
** Created: Fri Jul 28 15:19:10 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "softwareversion.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'softwareversion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SoftwareVersion[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      40,   16,   16,   16, 0x08,
      61,   16,   16,   16, 0x08,
      87,   16,   16,   16, 0x08,
     111,   16,   16,   16, 0x08,
     132,   16,   16,   16, 0x08,
     151,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SoftwareVersion[] = {
    "SoftwareVersion\0\0on_btnOthers_pressed()\0"
    "on_btnDoor_pressed()\0on_btnConverter_pressed()\0"
    "on_btnNetwork_pressed()\0on_btnDown_clicked()\0"
    "on_btnUp_clicked()\0on_btnBack_clicked()\0"
};

const QMetaObject SoftwareVersion::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_SoftwareVersion,
      qt_meta_data_SoftwareVersion, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SoftwareVersion::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SoftwareVersion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SoftwareVersion::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SoftwareVersion))
        return static_cast<void*>(const_cast< SoftwareVersion*>(this));
    return MyBase::qt_metacast(_clname);
}

int SoftwareVersion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnOthers_pressed(); break;
        case 1: on_btnDoor_pressed(); break;
        case 2: on_btnConverter_pressed(); break;
        case 3: on_btnNetwork_pressed(); break;
        case 4: on_btnDown_clicked(); break;
        case 5: on_btnUp_clicked(); break;
        case 6: on_btnBack_clicked(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
