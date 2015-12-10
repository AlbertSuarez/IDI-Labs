/****************************************************************************
** Meta object code from reading C++ file 'MyQTextEdit.h'
**
** Created: Fri May 30 12:05:58 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MyQTextEdit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyQTextEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyQTextEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   13,   12,   12, 0x0a,
      48,   43,   12,   12, 0x0a,
      69,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MyQTextEdit[] = {
    "MyQTextEdit\0\0number\0receivenumber(QString)\0"
    "text\0receivetext(QString)\0receiveok()\0"
};

void MyQTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyQTextEdit *_t = static_cast<MyQTextEdit *>(_o);
        switch (_id) {
        case 0: _t->receivenumber((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->receivetext((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->receiveok(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MyQTextEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MyQTextEdit::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_MyQTextEdit,
      qt_meta_data_MyQTextEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyQTextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyQTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyQTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyQTextEdit))
        return static_cast<void*>(const_cast< MyQTextEdit*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int MyQTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
