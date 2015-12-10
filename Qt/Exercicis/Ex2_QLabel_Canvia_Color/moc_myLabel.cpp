/****************************************************************************
** Meta object code from reading C++ file 'myLabel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "myLabel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myLabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_myLabel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,    9,    8,    8, 0x0a,
      23,    9,    8,    8, 0x0a,
      37,    9,    8,    8, 0x0a,
      50,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_myLabel[] = {
    "myLabel\0\0n\0getRed(int)\0getGreen(int)\0"
    "getBlue(int)\0ok()\0"
};

void myLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        myLabel *_t = static_cast<myLabel *>(_o);
        switch (_id) {
        case 0: _t->getRed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->getGreen((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->getBlue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->ok(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData myLabel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject myLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_myLabel,
      qt_meta_data_myLabel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &myLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *myLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *myLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_myLabel))
        return static_cast<void*>(const_cast< myLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int myLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
