/****************************************************************************
** Meta object code from reading C++ file 'openetworkaccessmanagerfactory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OPE_LMS/openetworkaccessmanagerfactory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openetworkaccessmanagerfactory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OPENetworkAccessManager_t {
    QByteArrayData data[7];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OPENetworkAccessManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OPENetworkAccessManager_t qt_meta_stringdata_OPENetworkAccessManager = {
    {
QT_MOC_LITERAL(0, 0, 23), // "OPENetworkAccessManager"
QT_MOC_LITERAL(1, 24, 15), // "ignoreSSLErrors"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 14), // "QNetworkReply*"
QT_MOC_LITERAL(4, 56, 5), // "reply"
QT_MOC_LITERAL(5, 62, 16), // "QList<QSslError>"
QT_MOC_LITERAL(6, 79, 6) // "errors"

    },
    "OPENetworkAccessManager\0ignoreSSLErrors\0"
    "\0QNetworkReply*\0reply\0QList<QSslError>\0"
    "errors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OPENetworkAccessManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

       0        // eod
};

void OPENetworkAccessManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OPENetworkAccessManager *_t = static_cast<OPENetworkAccessManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ignoreSSLErrors((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QList<QSslError>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OPENetworkAccessManager::staticMetaObject = {
    { &QNetworkAccessManager::staticMetaObject, qt_meta_stringdata_OPENetworkAccessManager.data,
      qt_meta_data_OPENetworkAccessManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OPENetworkAccessManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OPENetworkAccessManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OPENetworkAccessManager.stringdata0))
        return static_cast<void*>(this);
    return QNetworkAccessManager::qt_metacast(_clname);
}

int OPENetworkAccessManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkAccessManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_OPENetworkAccessManagerFactory_t {
    QByteArrayData data[1];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OPENetworkAccessManagerFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OPENetworkAccessManagerFactory_t qt_meta_stringdata_OPENetworkAccessManagerFactory = {
    {
QT_MOC_LITERAL(0, 0, 30) // "OPENetworkAccessManagerFactory"

    },
    "OPENetworkAccessManagerFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OPENetworkAccessManagerFactory[] = {

 // content:
       7,       // revision
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

void OPENetworkAccessManagerFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OPENetworkAccessManagerFactory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OPENetworkAccessManagerFactory.data,
      qt_meta_data_OPENetworkAccessManagerFactory,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OPENetworkAccessManagerFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OPENetworkAccessManagerFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OPENetworkAccessManagerFactory.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlNetworkAccessManagerFactory"))
        return static_cast< QQmlNetworkAccessManagerFactory*>(this);
    return QObject::qt_metacast(_clname);
}

int OPENetworkAccessManagerFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
