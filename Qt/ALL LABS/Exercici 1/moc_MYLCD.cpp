/****************************************************************************
** Meta object code from reading C++ file 'MYLCD.h'
**
** Created: Sun Jun 1 18:26:47 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MYLCD.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MYLCD.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MYLCD[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x0a,
      19,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MYLCD[] = {
    "MYLCD\0\0posarCero()\0posarNumero(int)\0"
};

void MYLCD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MYLCD *_t = static_cast<MYLCD *>(_o);
        switch (_id) {
        case 0: _t->posarCero(); break;
        case 1: _t->posarNumero((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MYLCD::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MYLCD::staticMetaObject = {
    { &QLCDNumber::staticMetaObject, qt_meta_stringdata_MYLCD,
      qt_meta_data_MYLCD, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MYLCD::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MYLCD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MYLCD::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MYLCD))
        return static_cast<void*>(const_cast< MYLCD*>(this));
    return QLCDNumber::qt_metacast(_clname);
}

int MYLCD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLCDNumber::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
