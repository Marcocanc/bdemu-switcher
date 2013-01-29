/****************************************************************************
** Meta object code from reading C++ file 'switcher.h'
**
** Created: Sat Aug 4 01:16:44 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "switcher.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'switcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Switcher[] = {

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
      10,    9,    9,    9, 0x08,
      31,    9,    9,    9, 0x08,
      55,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Switcher[] = {
    "Switcher\0\0on_logicBt_clicked()\0"
    "on_pushButton_clicked()\0warning()\0"
};

void Switcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Switcher *_t = static_cast<Switcher *>(_o);
        switch (_id) {
        case 0: _t->on_logicBt_clicked(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->warning(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Switcher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Switcher::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Switcher,
      qt_meta_data_Switcher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Switcher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Switcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Switcher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Switcher))
        return static_cast<void*>(const_cast< Switcher*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Switcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
