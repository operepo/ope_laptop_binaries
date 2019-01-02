/****************************************************************************
** Meta object code from reading C++ file 'cm_webrequest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OPE_LMS/cm/cm_webrequest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cm_webrequest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CM_WebRequest_t {
    QByteArrayData data[34];
    char stringdata0[450];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CM_WebRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CM_WebRequest_t qt_meta_stringdata_CM_WebRequest = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CM_WebRequest"
QT_MOC_LITERAL(1, 14, 8), // "progress"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 9), // "bytesRead"
QT_MOC_LITERAL(4, 34, 10), // "totalBytes"
QT_MOC_LITERAL(5, 45, 11), // "NetworkCall"
QT_MOC_LITERAL(6, 57, 3), // "url"
QT_MOC_LITERAL(7, 61, 6), // "method"
QT_MOC_LITERAL(8, 68, 23), // "QHash<QString,QString>*"
QT_MOC_LITERAL(9, 92, 1), // "p"
QT_MOC_LITERAL(10, 94, 7), // "headers"
QT_MOC_LITERAL(11, 102, 12), // "content_type"
QT_MOC_LITERAL(12, 115, 9), // "post_file"
QT_MOC_LITERAL(13, 125, 12), // "DownloadFile"
QT_MOC_LITERAL(14, 138, 10), // "local_path"
QT_MOC_LITERAL(15, 149, 24), // "ConvertHashToQueryString"
QT_MOC_LITERAL(16, 174, 3), // "arr"
QT_MOC_LITERAL(17, 178, 9), // "GetHeader"
QT_MOC_LITERAL(18, 188, 11), // "header_name"
QT_MOC_LITERAL(19, 200, 13), // "GetAllHeaders"
QT_MOC_LITERAL(20, 214, 22), // "QHash<QString,QString>"
QT_MOC_LITERAL(21, 237, 17), // "downloadReadyRead"
QT_MOC_LITERAL(22, 255, 21), // "downloadReplyFinished"
QT_MOC_LITERAL(23, 277, 14), // "QNetworkReply*"
QT_MOC_LITERAL(24, 292, 5), // "reply"
QT_MOC_LITERAL(25, 298, 16), // "downloadProgress"
QT_MOC_LITERAL(26, 315, 26), // "httpAuthenticationRequired"
QT_MOC_LITERAL(27, 342, 15), // "QAuthenticator*"
QT_MOC_LITERAL(28, 358, 13), // "httpSslErrors"
QT_MOC_LITERAL(29, 372, 16), // "QList<QSslError>"
QT_MOC_LITERAL(30, 389, 6), // "errors"
QT_MOC_LITERAL(31, 396, 12), // "httpFinished"
QT_MOC_LITERAL(32, 409, 13), // "httpReadyRead"
QT_MOC_LITERAL(33, 423, 26) // "httpUpdateDataReadProgress"

    },
    "CM_WebRequest\0progress\0\0bytesRead\0"
    "totalBytes\0NetworkCall\0url\0method\0"
    "QHash<QString,QString>*\0p\0headers\0"
    "content_type\0post_file\0DownloadFile\0"
    "local_path\0ConvertHashToQueryString\0"
    "arr\0GetHeader\0header_name\0GetAllHeaders\0"
    "QHash<QString,QString>\0downloadReadyRead\0"
    "downloadReplyFinished\0QNetworkReply*\0"
    "reply\0downloadProgress\0"
    "httpAuthenticationRequired\0QAuthenticator*\0"
    "httpSslErrors\0QList<QSslError>\0errors\0"
    "httpFinished\0httpReadyRead\0"
    "httpUpdateDataReadProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CM_WebRequest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    6,  114,    2, 0x0a /* Public */,
       5,    5,  127,    2, 0x2a /* Public | MethodCloned */,
       5,    4,  138,    2, 0x2a /* Public | MethodCloned */,
       5,    3,  147,    2, 0x2a /* Public | MethodCloned */,
       5,    2,  154,    2, 0x2a /* Public | MethodCloned */,
       5,    1,  159,    2, 0x2a /* Public | MethodCloned */,
      13,    2,  162,    2, 0x0a /* Public */,
      15,    1,  167,    2, 0x0a /* Public */,
      17,    1,  170,    2, 0x0a /* Public */,
      19,    0,  173,    2, 0x0a /* Public */,
      21,    0,  174,    2, 0x0a /* Public */,
      22,    1,  175,    2, 0x0a /* Public */,
      25,    2,  178,    2, 0x0a /* Public */,
      26,    2,  183,    2, 0x08 /* Private */,
      28,    2,  188,    2, 0x08 /* Private */,
      31,    0,  193,    2, 0x08 /* Private */,
      32,    0,  194,    2, 0x08 /* Private */,
      33,    2,  195,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,

 // slots: parameters
    QMetaType::QByteArray, QMetaType::QString, QMetaType::QString, 0x80000000 | 8, 0x80000000 | 8, QMetaType::QString, QMetaType::QString,    6,    7,    9,   10,   11,   12,
    QMetaType::QByteArray, QMetaType::QString, QMetaType::QString, 0x80000000 | 8, 0x80000000 | 8, QMetaType::QString,    6,    7,    9,   10,   11,
    QMetaType::QByteArray, QMetaType::QString, QMetaType::QString, 0x80000000 | 8, 0x80000000 | 8,    6,    7,    9,   10,
    QMetaType::QByteArray, QMetaType::QString, QMetaType::QString, 0x80000000 | 8,    6,    7,    9,
    QMetaType::QByteArray, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::QByteArray, QMetaType::QString,    6,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    6,   14,
    QMetaType::QString, 0x80000000 | 8,   16,
    QMetaType::QString, QMetaType::QString,   18,
    0x80000000 | 20,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 27,    2,    2,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 29,    2,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,

       0        // eod
};

void CM_WebRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CM_WebRequest *_t = static_cast<CM_WebRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->progress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 1: { QByteArray _r = _t->NetworkCall((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QHash<QString,QString>*(*)>(_a[3])),(*reinterpret_cast< QHash<QString,QString>*(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 2: { QByteArray _r = _t->NetworkCall((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QHash<QString,QString>*(*)>(_a[3])),(*reinterpret_cast< QHash<QString,QString>*(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 3: { QByteArray _r = _t->NetworkCall((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QHash<QString,QString>*(*)>(_a[3])),(*reinterpret_cast< QHash<QString,QString>*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 4: { QByteArray _r = _t->NetworkCall((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QHash<QString,QString>*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 5: { QByteArray _r = _t->NetworkCall((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 6: { QByteArray _r = _t->NetworkCall((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->DownloadFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->ConvertHashToQueryString((*reinterpret_cast< QHash<QString,QString>*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->GetHeader((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { QHash<QString,QString> _r = _t->GetAllHeaders();
            if (_a[0]) *reinterpret_cast< QHash<QString,QString>*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->downloadReadyRead(); break;
        case 12: _t->downloadReplyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 13: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 14: _t->httpAuthenticationRequired((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 15: _t->httpSslErrors((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslError>(*)>(_a[2]))); break;
        case 16: _t->httpFinished(); break;
        case 17: _t->httpReadyRead(); break;
        case 18: _t->httpUpdateDataReadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CM_WebRequest::*)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CM_WebRequest::progress)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CM_WebRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CM_WebRequest.data,
      qt_meta_data_CM_WebRequest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CM_WebRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CM_WebRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CM_WebRequest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CM_WebRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void CM_WebRequest::progress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
