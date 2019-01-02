/****************************************************************************
** Meta object code from reading C++ file 'cm_persistentobjectmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OPE_LMS/cm/cm_persistentobjectmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cm_persistentobjectmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CM_PersistentObjectModel_t {
    QByteArrayData data[20];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CM_PersistentObjectModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CM_PersistentObjectModel_t qt_meta_stringdata_CM_PersistentObjectModel = {
    {
QT_MOC_LITERAL(0, 0, 24), // "CM_PersistentObjectModel"
QT_MOC_LITERAL(1, 25, 12), // "countChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 17), // "parentItemChanged"
QT_MOC_LITERAL(4, 57, 11), // "parent_item"
QT_MOC_LITERAL(5, 69, 10), // "parentItem"
QT_MOC_LITERAL(6, 80, 13), // "setParentItem"
QT_MOC_LITERAL(7, 94, 6), // "insert"
QT_MOC_LITERAL(8, 101, 5), // "index"
QT_MOC_LITERAL(9, 107, 4), // "name"
QT_MOC_LITERAL(10, 112, 6), // "append"
QT_MOC_LITERAL(11, 119, 6), // "remove"
QT_MOC_LITERAL(12, 126, 3), // "get"
QT_MOC_LITERAL(13, 130, 11), // "setProperty"
QT_MOC_LITERAL(14, 142, 8), // "property"
QT_MOC_LITERAL(15, 151, 5), // "value"
QT_MOC_LITERAL(16, 157, 7), // "setData"
QT_MOC_LITERAL(17, 165, 11), // "QModelIndex"
QT_MOC_LITERAL(18, 177, 4), // "role"
QT_MOC_LITERAL(19, 182, 5) // "count"

    },
    "CM_PersistentObjectModel\0countChanged\0"
    "\0parentItemChanged\0parent_item\0"
    "parentItem\0setParentItem\0insert\0index\0"
    "name\0append\0remove\0get\0setProperty\0"
    "property\0value\0setData\0QModelIndex\0"
    "role\0count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CM_PersistentObjectModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       2,  110, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   73,    2, 0x0a /* Public */,
       6,    1,   74,    2, 0x0a /* Public */,
       7,    2,   77,    2, 0x0a /* Public */,
      10,    1,   82,    2, 0x0a /* Public */,
      11,    1,   85,    2, 0x0a /* Public */,
      12,    1,   88,    2, 0x0a /* Public */,
      13,    3,   91,    2, 0x0a /* Public */,
      16,    3,   98,    2, 0x0a /* Public */,
      16,    2,  105,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::QObjectStar, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    8,   14,   15,
    QMetaType::Bool, 0x80000000 | 17, QMetaType::QVariant, QMetaType::Int,    8,   15,   18,
    QMetaType::Bool, 0x80000000 | 17, QMetaType::QVariant,    8,   15,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00495103,
      19, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

void CM_PersistentObjectModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CM_PersistentObjectModel *_t = static_cast<CM_PersistentObjectModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->parentItemChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: { QString _r = _t->parentItem();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->setParentItem((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->insert((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->append((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->remove((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: { QObject* _r = _t->get((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setProperty((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 9: { bool _r = _t->setData((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->setData((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CM_PersistentObjectModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CM_PersistentObjectModel::countChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CM_PersistentObjectModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CM_PersistentObjectModel::parentItemChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CM_PersistentObjectModel *_t = static_cast<CM_PersistentObjectModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->parentItem(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->count(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CM_PersistentObjectModel *_t = static_cast<CM_PersistentObjectModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setParentItem(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject CM_PersistentObjectModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_CM_PersistentObjectModel.data,
      qt_meta_data_CM_PersistentObjectModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CM_PersistentObjectModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CM_PersistentObjectModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CM_PersistentObjectModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int CM_PersistentObjectModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CM_PersistentObjectModel::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CM_PersistentObjectModel::parentItemChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
