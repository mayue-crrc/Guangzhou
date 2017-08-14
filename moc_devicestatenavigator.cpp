/****************************************************************************
** Meta object code from reading C++ file 'devicestatenavigator.h'
**
** Created: Thu Jun 16 19:47:19 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "devicestatenavigator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devicestatenavigator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DeviceStateNavigator[] = {

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
      22,   21,   21,   21, 0x08,
      42,   21,   21,   21, 0x08,
      63,   21,   21,   21, 0x08,
      83,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DeviceStateNavigator[] = {
    "DeviceStateNavigator\0\0on_btnBcu_clicked()\0"
    "on_btnDcdc_clicked()\0on_btnSiv_clicked()\0"
    "on_btnDcu_clicked()\0"
};

const QMetaObject DeviceStateNavigator::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DeviceStateNavigator,
      qt_meta_data_DeviceStateNavigator, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DeviceStateNavigator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DeviceStateNavigator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DeviceStateNavigator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceStateNavigator))
        return static_cast<void*>(const_cast< DeviceStateNavigator*>(this));
    return QWidget::qt_metacast(_clname);
}

int DeviceStateNavigator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnBcu_clicked(); break;
        case 1: on_btnDcdc_clicked(); break;
        case 2: on_btnSiv_clicked(); break;
        case 3: on_btnDcu_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
