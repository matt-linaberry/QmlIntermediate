/****************************************************************************
** Meta object code from reading C++ file 'cppclass.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ConversionBasicTypesDemo/cppclass.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cppclass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CppClass_t {
    QByteArrayData data[11];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CppClass_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CppClass_t qt_meta_stringdata_CppClass = {
    {
QT_MOC_LITERAL(0, 0, 8), // "CppClass"
QT_MOC_LITERAL(1, 9, 7), // "sendInt"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 5), // "param"
QT_MOC_LITERAL(4, 24, 10), // "sendDouble"
QT_MOC_LITERAL(5, 35, 11), // "doubleParam"
QT_MOC_LITERAL(6, 47, 17), // "sendBoolRealFloat"
QT_MOC_LITERAL(7, 65, 9), // "boolParam"
QT_MOC_LITERAL(8, 75, 9), // "realParam"
QT_MOC_LITERAL(9, 85, 10), // "floatParam"
QT_MOC_LITERAL(10, 96, 7) // "cppSlot"

    },
    "CppClass\0sendInt\0\0param\0sendDouble\0"
    "doubleParam\0sendBoolRealFloat\0boolParam\0"
    "realParam\0floatParam\0cppSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CppClass[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    3,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::QReal, QMetaType::Float,    7,    8,    9,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void CppClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CppClass *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendInt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sendDouble((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->sendBoolRealFloat((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 3: _t->cppSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CppClass::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CppClass::sendInt)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CppClass::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CppClass::sendDouble)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CppClass::*)(bool , qreal , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CppClass::sendBoolRealFloat)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CppClass::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CppClass.data,
    qt_meta_data_CppClass,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CppClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CppClass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CppClass.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CppClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CppClass::sendInt(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CppClass::sendDouble(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CppClass::sendBoolRealFloat(bool _t1, qreal _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
