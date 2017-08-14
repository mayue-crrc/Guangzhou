/****************************************************************************
** Meta object code from reading C++ file 'digitalio.h'
**
** Created: Thu Apr 14 15:44:45 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "digitalio.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'digitalio.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DigitalIO[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_DigitalIO[] = {
    "DigitalIO\0"
};

const QMetaObject DigitalIO::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DigitalIO,
      qt_meta_data_DigitalIO, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DigitalIO::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DigitalIO::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DigitalIO::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DigitalIO))
        return static_cast<void*>(const_cast< DigitalIO*>(this));
    return QWidget::qt_metacast(_clname);
}

int DigitalIO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
