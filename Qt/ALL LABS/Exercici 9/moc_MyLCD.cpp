/****************************************************************************
** Meta object code from reading C++ file 'MyLCD.h'
**
** Created: Sat May 31 21:46:52 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MyLCD.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyLCD.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyLCD[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x0a,
      21,   19,    6,    6, 0x0a,
      36,    6,    6,    6, 0x0a,
      43,    6,    6,    6, 0x0a,
      51,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MyLCD[] = {
    "MyLCD\0\0resetCero()\0n\0getNumero(int)\0"
    "suma()\0resta()\0setNumAnt()\0"
};

void MyLCD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyLCD *_t = static_cast<MyLCD *>(_o);
        switch (_id) {
        case 0: _t->resetCero(); break;
        case 1: _t->getNumero((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->suma(); break;
        case 3: _t->resta(); break;
        case 4: _t->setNumAnt(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MyLCD::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MyLCD::staticMetaObject = {
    { &QLCDNumber::staticMetaObject, qt_meta_stringdata_MyLCD,
      qt_meta_data_MyLCD, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyLCD::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyLCD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyLCD::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyLCD))
        return static_cast<void*>(const_cast< MyLCD*>(this));
    return QLCDNumber::qt_metacast(_clname);
}

int MyLCD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLCDNumber::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
