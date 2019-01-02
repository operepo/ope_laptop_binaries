/****************************************************************************
** Meta object code from reading C++ file 'db.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OPE_LMS/db.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'db.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GenericQueryModel_t {
    QByteArrayData data[23];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GenericQueryModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GenericQueryModel_t qt_meta_stringdata_GenericQueryModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "GenericQueryModel"
QT_MOC_LITERAL(1, 18, 7), // "refresh"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "data"
QT_MOC_LITERAL(4, 32, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 44, 5), // "index"
QT_MOC_LITERAL(6, 50, 4), // "role"
QT_MOC_LITERAL(7, 55, 9), // "roleNames"
QT_MOC_LITERAL(8, 65, 21), // "QHash<int,QByteArray>"
QT_MOC_LITERAL(9, 87, 11), // "modifyQuery"
QT_MOC_LITERAL(10, 99, 1), // "q"
QT_MOC_LITERAL(11, 101, 12), // "modifyFilter"
QT_MOC_LITERAL(12, 114, 1), // "f"
QT_MOC_LITERAL(13, 116, 13), // "combine_w_and"
QT_MOC_LITERAL(14, 130, 9), // "getRecord"
QT_MOC_LITERAL(15, 140, 3), // "row"
QT_MOC_LITERAL(16, 144, 13), // "getColumnName"
QT_MOC_LITERAL(17, 158, 9), // "col_index"
QT_MOC_LITERAL(18, 168, 14), // "getColumnIndex"
QT_MOC_LITERAL(19, 183, 8), // "col_name"
QT_MOC_LITERAL(20, 192, 6), // "sortOn"
QT_MOC_LITERAL(21, 199, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(22, 213, 5) // "order"

    },
    "GenericQueryModel\0refresh\0\0data\0"
    "QModelIndex\0index\0role\0roleNames\0"
    "QHash<int,QByteArray>\0modifyQuery\0q\0"
    "modifyFilter\0f\0combine_w_and\0getRecord\0"
    "row\0getColumnName\0col_index\0getColumnIndex\0"
    "col_name\0sortOn\0Qt::SortOrder\0order"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GenericQueryModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    2,   70,    2, 0x0a /* Public */,
       7,    0,   75,    2, 0x0a /* Public */,
       9,    1,   76,    2, 0x0a /* Public */,
      11,    2,   79,    2, 0x0a /* Public */,
      11,    1,   84,    2, 0x2a /* Public | MethodCloned */,
      14,    1,   87,    2, 0x0a /* Public */,
      16,    1,   90,    2, 0x0a /* Public */,
      18,    1,   93,    2, 0x0a /* Public */,
      20,    2,   96,    2, 0x0a /* Public */,
      20,    1,  101,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::QVariant, 0x80000000 | 4, QMetaType::Int,    5,    6,
    0x80000000 | 8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   12,   13,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::QVariantHash, QMetaType::Int,   15,
    QMetaType::QString, QMetaType::Int,   17,
    QMetaType::Int, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 21,   19,   22,
    QMetaType::Void, QMetaType::QString,   19,

       0        // eod
};

void GenericQueryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GenericQueryModel *_t = static_cast<GenericQueryModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: { QVariant _r = _t->data((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 2: { QHash<int,QByteArray> _r = _t->roleNames();
            if (_a[0]) *reinterpret_cast< QHash<int,QByteArray>*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->modifyQuery((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->modifyFilter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->modifyFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: { QHash<QString,QVariant> _r = _t->getRecord((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHash<QString,QVariant>*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->getColumnName((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { int _r = _t->getColumnIndex((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->sortOn((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 10: _t->sortOn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GenericQueryModel::staticMetaObject = {
    { &QSqlQueryModel::staticMetaObject, qt_meta_stringdata_GenericQueryModel.data,
      qt_meta_data_GenericQueryModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GenericQueryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GenericQueryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GenericQueryModel.stringdata0))
        return static_cast<void*>(this);
    return QSqlQueryModel::qt_metacast(_clname);
}

int GenericQueryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSqlQueryModel::qt_metacall(_c, _id, _a);
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
    return _id;
}
struct qt_meta_stringdata_GenericTableModel_t {
    QByteArrayData data[23];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GenericTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GenericTableModel_t qt_meta_stringdata_GenericTableModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "GenericTableModel"
QT_MOC_LITERAL(1, 18, 8), // "setTable"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "tableName"
QT_MOC_LITERAL(4, 38, 4), // "data"
QT_MOC_LITERAL(5, 43, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 55, 5), // "index"
QT_MOC_LITERAL(7, 61, 4), // "role"
QT_MOC_LITERAL(8, 66, 9), // "roleNames"
QT_MOC_LITERAL(9, 76, 21), // "QHash<int,QByteArray>"
QT_MOC_LITERAL(10, 98, 12), // "modifyFilter"
QT_MOC_LITERAL(11, 111, 1), // "f"
QT_MOC_LITERAL(12, 113, 9), // "getRecord"
QT_MOC_LITERAL(13, 123, 3), // "row"
QT_MOC_LITERAL(14, 127, 13), // "getColumnName"
QT_MOC_LITERAL(15, 141, 9), // "col_index"
QT_MOC_LITERAL(16, 151, 14), // "getColumnIndex"
QT_MOC_LITERAL(17, 166, 8), // "col_name"
QT_MOC_LITERAL(18, 175, 6), // "sortOn"
QT_MOC_LITERAL(19, 182, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(20, 196, 5), // "order"
QT_MOC_LITERAL(21, 202, 4), // "copy"
QT_MOC_LITERAL(22, 207, 18) // "GenericTableModel*"

    },
    "GenericTableModel\0setTable\0\0tableName\0"
    "data\0QModelIndex\0index\0role\0roleNames\0"
    "QHash<int,QByteArray>\0modifyFilter\0f\0"
    "getRecord\0row\0getColumnName\0col_index\0"
    "getColumnIndex\0col_name\0sortOn\0"
    "Qt::SortOrder\0order\0copy\0GenericTableModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GenericTableModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       4,    2,   67,    2, 0x0a /* Public */,
       8,    0,   72,    2, 0x0a /* Public */,
      10,    1,   73,    2, 0x0a /* Public */,
      12,    1,   76,    2, 0x0a /* Public */,
      14,    1,   79,    2, 0x0a /* Public */,
      16,    1,   82,    2, 0x0a /* Public */,
      18,    2,   85,    2, 0x0a /* Public */,
      18,    1,   90,    2, 0x2a /* Public | MethodCloned */,
      21,    0,   93,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::QVariant, 0x80000000 | 5, QMetaType::Int,    6,    7,
    0x80000000 | 9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::QVariantHash, QMetaType::Int,   13,
    QMetaType::QString, QMetaType::Int,   15,
    QMetaType::Int, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 19,   17,   20,
    QMetaType::Void, QMetaType::QString,   17,
    0x80000000 | 22,

       0        // eod
};

void GenericTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GenericTableModel *_t = static_cast<GenericTableModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setTable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: { QVariant _r = _t->data((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 2: { QHash<int,QByteArray> _r = _t->roleNames();
            if (_a[0]) *reinterpret_cast< QHash<int,QByteArray>*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->modifyFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: { QHash<QString,QVariant> _r = _t->getRecord((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHash<QString,QVariant>*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->getColumnName((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->getColumnIndex((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->sortOn((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 8: _t->sortOn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: { GenericTableModel* _r = _t->copy();
            if (_a[0]) *reinterpret_cast< GenericTableModel**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GenericTableModel::staticMetaObject = {
    { &QSqlTableModel::staticMetaObject, qt_meta_stringdata_GenericTableModel.data,
      qt_meta_data_GenericTableModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GenericTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GenericTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GenericTableModel.stringdata0))
        return static_cast<void*>(this);
    return QSqlTableModel::qt_metacast(_clname);
}

int GenericTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSqlTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
struct qt_meta_stringdata_APP_DB_t {
    QByteArrayData data[14];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_APP_DB_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_APP_DB_t qt_meta_stringdata_APP_DB = {
    {
QT_MOC_LITERAL(0, 0, 6), // "APP_DB"
QT_MOC_LITERAL(1, 7, 7), // "init_db"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 12), // "auth_student"
QT_MOC_LITERAL(4, 29, 9), // "user_name"
QT_MOC_LITERAL(5, 39, 8), // "password"
QT_MOC_LITERAL(6, 48, 12), // "add_resource"
QT_MOC_LITERAL(7, 61, 13), // "resource_name"
QT_MOC_LITERAL(8, 75, 12), // "resource_url"
QT_MOC_LITERAL(9, 88, 20), // "resource_description"
QT_MOC_LITERAL(10, 109, 10), // "sort_order"
QT_MOC_LITERAL(11, 120, 8), // "getTable"
QT_MOC_LITERAL(12, 129, 18), // "GenericTableModel*"
QT_MOC_LITERAL(13, 148, 10) // "table_name"

    },
    "APP_DB\0init_db\0\0auth_student\0user_name\0"
    "password\0add_resource\0resource_name\0"
    "resource_url\0resource_description\0"
    "sort_order\0getTable\0GenericTableModel*\0"
    "table_name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_APP_DB[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    2,   35,    2, 0x0a /* Public */,
       6,    4,   40,    2, 0x0a /* Public */,
      11,    1,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    7,    8,    9,   10,
    0x80000000 | 12, QMetaType::QString,   13,

       0        // eod
};

void APP_DB::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        APP_DB *_t = static_cast<APP_DB *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->init_db();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->auth_student((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->add_resource((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { GenericTableModel* _r = _t->getTable((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GenericTableModel**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject APP_DB::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_APP_DB.data,
      qt_meta_data_APP_DB,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *APP_DB::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APP_DB::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_APP_DB.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int APP_DB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
