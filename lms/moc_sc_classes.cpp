/****************************************************************************
** Meta object code from reading C++ file 'sc_classes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OPE_LMS/cm/school/sc_classes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sc_classes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SC_Classes_t {
    QByteArrayData data[11];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SC_Classes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SC_Classes_t qt_meta_stringdata_SC_Classes = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SC_Classes"
QT_MOC_LITERAL(1, 11, 11), // "nameChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 13), // "numberChanged"
QT_MOC_LITERAL(4, 38, 17), // "instructorChanged"
QT_MOC_LITERAL(5, 56, 4), // "name"
QT_MOC_LITERAL(6, 61, 7), // "setName"
QT_MOC_LITERAL(7, 69, 6), // "number"
QT_MOC_LITERAL(8, 76, 9), // "setNumber"
QT_MOC_LITERAL(9, 86, 10), // "instructor"
QT_MOC_LITERAL(10, 97, 13) // "setInstructor"

    },
    "SC_Classes\0nameChanged\0\0numberChanged\0"
    "instructorChanged\0name\0setName\0number\0"
    "setNumber\0instructor\0setInstructor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SC_Classes[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,   80, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    1,   62,    2, 0x06 /* Public */,
       4,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   68,    2, 0x0a /* Public */,
       6,    1,   69,    2, 0x0a /* Public */,
       7,    0,   72,    2, 0x0a /* Public */,
       8,    1,   73,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    1,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    9,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00495103,
       7, QMetaType::QString, 0x00495103,
       9, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void SC_Classes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SC_Classes *_t = static_cast<SC_Classes *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->numberChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->instructorChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: { QString _r = _t->name();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: { QString _r = _t->number();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->setNumber((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: { QString _r = _t->instructor();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setInstructor((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SC_Classes::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SC_Classes::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SC_Classes::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SC_Classes::numberChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SC_Classes::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SC_Classes::instructorChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SC_Classes *_t = static_cast<SC_Classes *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->number(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->instructor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SC_Classes *_t = static_cast<SC_Classes *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setNumber(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setInstructor(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject SC_Classes::staticMetaObject = {
    { &CM_PersistentObject::staticMetaObject, qt_meta_stringdata_SC_Classes.data,
      qt_meta_data_SC_Classes,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SC_Classes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SC_Classes::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SC_Classes.stringdata0))
        return static_cast<void*>(this);
    return CM_PersistentObject::qt_metacast(_clname);
}

int SC_Classes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CM_PersistentObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SC_Classes::nameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SC_Classes::numberChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SC_Classes::instructorChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
