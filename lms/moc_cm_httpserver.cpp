/****************************************************************************
** Meta object code from reading C++ file 'cm_httpserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OPE_LMS/cm/cm_httpserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cm_httpserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CM_HTTPServer_t {
    QByteArrayData data[31];
    char stringdata0[639];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CM_HTTPServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CM_HTTPServer_t qt_meta_stringdata_CM_HTTPServer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CM_HTTPServer"
QT_MOC_LITERAL(1, 14, 18), // "HTTPRequestArrived"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 15), // "CM_HTTPRequest*"
QT_MOC_LITERAL(4, 50, 7), // "request"
QT_MOC_LITERAL(5, 58, 16), // "CM_HTTPResponse*"
QT_MOC_LITERAL(6, 75, 8), // "response"
QT_MOC_LITERAL(7, 84, 23), // "slot_clientAboutToClose"
QT_MOC_LITERAL(8, 108, 23), // "slot_clientBytesWritten"
QT_MOC_LITERAL(9, 132, 20), // "slot_clientConnected"
QT_MOC_LITERAL(10, 153, 20), // "slot_clientDestroyed"
QT_MOC_LITERAL(11, 174, 23), // "slot_clientDisconnected"
QT_MOC_LITERAL(12, 198, 20), // "slot_clientHostFound"
QT_MOC_LITERAL(13, 219, 28), // "slot_clientObjectNameChanged"
QT_MOC_LITERAL(14, 248, 37), // "slot_clientProxyAuthenticatio..."
QT_MOC_LITERAL(15, 286, 13), // "QNetworkProxy"
QT_MOC_LITERAL(16, 300, 15), // "QAuthenticator*"
QT_MOC_LITERAL(17, 316, 30), // "slot_clientReadChannelFinished"
QT_MOC_LITERAL(18, 347, 20), // "slot_clientReadyRead"
QT_MOC_LITERAL(19, 368, 23), // "slot_clientStateChanged"
QT_MOC_LITERAL(20, 392, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(21, 421, 16), // "slot_clientError"
QT_MOC_LITERAL(22, 438, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(23, 467, 20), // "slot_clientEncrypted"
QT_MOC_LITERAL(24, 488, 32), // "slot_clientEncryptedBytesWritten"
QT_MOC_LITERAL(25, 521, 22), // "slot_clientModeChanged"
QT_MOC_LITERAL(26, 544, 19), // "QSslSocket::SslMode"
QT_MOC_LITERAL(27, 564, 26), // "slot_clientPeerVerifyError"
QT_MOC_LITERAL(28, 591, 9), // "QSslError"
QT_MOC_LITERAL(29, 601, 20), // "slot_clientSslErrors"
QT_MOC_LITERAL(30, 622, 16) // "QList<QSslError>"

    },
    "CM_HTTPServer\0HTTPRequestArrived\0\0"
    "CM_HTTPRequest*\0request\0CM_HTTPResponse*\0"
    "response\0slot_clientAboutToClose\0"
    "slot_clientBytesWritten\0slot_clientConnected\0"
    "slot_clientDestroyed\0slot_clientDisconnected\0"
    "slot_clientHostFound\0slot_clientObjectNameChanged\0"
    "slot_clientProxyAuthenticationRequest\0"
    "QNetworkProxy\0QAuthenticator*\0"
    "slot_clientReadChannelFinished\0"
    "slot_clientReadyRead\0slot_clientStateChanged\0"
    "QAbstractSocket::SocketState\0"
    "slot_clientError\0QAbstractSocket::SocketError\0"
    "slot_clientEncrypted\0"
    "slot_clientEncryptedBytesWritten\0"
    "slot_clientModeChanged\0QSslSocket::SslMode\0"
    "slot_clientPeerVerifyError\0QSslError\0"
    "slot_clientSslErrors\0QList<QSslError>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CM_HTTPServer[] = {

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
       7,    0,  114,    2, 0x0a /* Public */,
       8,    1,  115,    2, 0x0a /* Public */,
       9,    0,  118,    2, 0x0a /* Public */,
      10,    0,  119,    2, 0x0a /* Public */,
      10,    1,  120,    2, 0x0a /* Public */,
      11,    0,  123,    2, 0x0a /* Public */,
      12,    0,  124,    2, 0x0a /* Public */,
      13,    1,  125,    2, 0x0a /* Public */,
      14,    2,  128,    2, 0x0a /* Public */,
      17,    0,  133,    2, 0x0a /* Public */,
      18,    0,  134,    2, 0x0a /* Public */,
      19,    1,  135,    2, 0x0a /* Public */,
      21,    1,  138,    2, 0x0a /* Public */,
      23,    0,  141,    2, 0x0a /* Public */,
      24,    1,  142,    2, 0x0a /* Public */,
      25,    1,  145,    2, 0x0a /* Public */,
      27,    1,  148,    2, 0x0a /* Public */,
      29,    1,  151,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 16,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void, 0x80000000 | 22,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, 0x80000000 | 26,    2,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void, 0x80000000 | 30,    2,

       0        // eod
};

void CM_HTTPServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CM_HTTPServer *_t = static_cast<CM_HTTPServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->HTTPRequestArrived((*reinterpret_cast< CM_HTTPRequest*(*)>(_a[1])),(*reinterpret_cast< CM_HTTPResponse*(*)>(_a[2]))); break;
        case 1: _t->slot_clientAboutToClose(); break;
        case 2: _t->slot_clientBytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->slot_clientConnected(); break;
        case 4: _t->slot_clientDestroyed(); break;
        case 5: _t->slot_clientDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 6: _t->slot_clientDisconnected(); break;
        case 7: _t->slot_clientHostFound(); break;
        case 8: _t->slot_clientObjectNameChanged((*reinterpret_cast< QString(*)>(_a[1])), QPrivateSignal()); break;
        case 9: _t->slot_clientProxyAuthenticationRequest((*reinterpret_cast< QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 10: _t->slot_clientReadChannelFinished(); break;
        case 11: _t->slot_clientReadyRead(); break;
        case 12: _t->slot_clientStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 13: _t->slot_clientError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 14: _t->slot_clientEncrypted(); break;
        case 15: _t->slot_clientEncryptedBytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 16: _t->slot_clientModeChanged((*reinterpret_cast< QSslSocket::SslMode(*)>(_a[1]))); break;
        case 17: _t->slot_clientPeerVerifyError((*reinterpret_cast< QSslError(*)>(_a[1]))); break;
        case 18: _t->slot_clientSslErrors((*reinterpret_cast< QList<QSslError>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CM_HTTPRequest* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CM_HTTPResponse* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkProxy >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CM_HTTPServer::*)(CM_HTTPRequest * , CM_HTTPResponse * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CM_HTTPServer::HTTPRequestArrived)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CM_HTTPServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_CM_HTTPServer.data,
      qt_meta_data_CM_HTTPServer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CM_HTTPServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CM_HTTPServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CM_HTTPServer.stringdata0))
        return static_cast<void*>(this);
    return QTcpServer::qt_metacast(_clname);
}

int CM_HTTPServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
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
void CM_HTTPServer::HTTPRequestArrived(CM_HTTPRequest * _t1, CM_HTTPResponse * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_CM_HTTPRequest_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CM_HTTPRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CM_HTTPRequest_t qt_meta_stringdata_CM_HTTPRequest = {
    {
QT_MOC_LITERAL(0, 0, 14) // "CM_HTTPRequest"

    },
    "CM_HTTPRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CM_HTTPRequest[] = {

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

void CM_HTTPRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CM_HTTPRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CM_HTTPRequest.data,
      qt_meta_data_CM_HTTPRequest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CM_HTTPRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CM_HTTPRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CM_HTTPRequest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CM_HTTPRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CM_HTTPResponse_t {
    QByteArrayData data[16];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CM_HTTPResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CM_HTTPResponse_t qt_meta_stringdata_CM_HTTPResponse = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CM_HTTPResponse"
QT_MOC_LITERAL(1, 16, 11), // "SetProtocol"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "protocol"
QT_MOC_LITERAL(4, 38, 7), // "SetBody"
QT_MOC_LITERAL(5, 46, 4), // "html"
QT_MOC_LITERAL(6, 51, 9), // "AddHeader"
QT_MOC_LITERAL(7, 61, 11), // "header_name"
QT_MOC_LITERAL(8, 73, 12), // "header_value"
QT_MOC_LITERAL(9, 86, 19), // "RespondWith404Error"
QT_MOC_LITERAL(10, 106, 9), // "file_path"
QT_MOC_LITERAL(11, 116, 15), // "RespondWithFile"
QT_MOC_LITERAL(12, 132, 14), // "GetContentType"
QT_MOC_LITERAL(13, 147, 9), // "file_name"
QT_MOC_LITERAL(14, 157, 8), // "toString"
QT_MOC_LITERAL(15, 166, 11) // "GetResponse"

    },
    "CM_HTTPResponse\0SetProtocol\0\0protocol\0"
    "SetBody\0html\0AddHeader\0header_name\0"
    "header_value\0RespondWith404Error\0"
    "file_path\0RespondWithFile\0GetContentType\0"
    "file_name\0toString\0GetResponse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CM_HTTPResponse[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       4,    1,   57,    2, 0x0a /* Public */,
       6,    2,   60,    2, 0x0a /* Public */,
       9,    1,   65,    2, 0x0a /* Public */,
      11,    1,   68,    2, 0x0a /* Public */,
      12,    1,   71,    2, 0x0a /* Public */,
      14,    0,   74,    2, 0x0a /* Public */,
      15,    0,   75,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::QString, QMetaType::QString,   13,
    QMetaType::QString,
    QMetaType::QByteArray,

       0        // eod
};

void CM_HTTPResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CM_HTTPResponse *_t = static_cast<CM_HTTPResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetProtocol((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->SetBody((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->AddHeader((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->RespondWith404Error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->RespondWithFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: { QString _r = _t->GetContentType((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { QByteArray _r = _t->GetResponse();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CM_HTTPResponse::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CM_HTTPResponse.data,
      qt_meta_data_CM_HTTPResponse,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CM_HTTPResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CM_HTTPResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CM_HTTPResponse.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CM_HTTPResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
