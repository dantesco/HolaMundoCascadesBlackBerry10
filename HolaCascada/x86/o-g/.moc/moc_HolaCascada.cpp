/****************************************************************************
** Meta object code from reading C++ file 'HolaCascada.hpp'
**
** Created: Thu 8. Nov 11:53:23 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/HolaCascada.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HolaCascada.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HolaCascada[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_HolaCascada[] = {
    "HolaCascada\0\0data\0dataSignal(QVariant)\0"
    "btnClickSlot()\0"
};

void HolaCascada::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HolaCascada *_t = static_cast<HolaCascada *>(_o);
        switch (_id) {
        case 0: _t->dataSignal((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 1: _t->btnClickSlot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HolaCascada::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HolaCascada::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HolaCascada,
      qt_meta_data_HolaCascada, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HolaCascada::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HolaCascada::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HolaCascada::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HolaCascada))
        return static_cast<void*>(const_cast< HolaCascada*>(this));
    return QObject::qt_metacast(_clname);
}

int HolaCascada::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void HolaCascada::dataSignal(QVariant _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
