/****************************************************************************
** Meta object code from reading C++ file 'communicator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../common/communicator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'communicator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TCommunicator_t {
    const uint offsetsAndSize[10];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_TCommunicator_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_TCommunicator_t qt_meta_stringdata_TCommunicator = {
    {
QT_MOC_LITERAL(0, 13), // "TCommunicator"
QT_MOC_LITERAL(14, 8), // "recieved"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 4), // "send"
QT_MOC_LITERAL(29, 7) // "recieve"

    },
    "TCommunicator\0recieved\0\0send\0recieve"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TCommunicator[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   35,    2, 0x0a,    2 /* Public */,
       4,    0,   38,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,

       0        // eod
};

void TCommunicator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TCommunicator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->recieved((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->send((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->recieve(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TCommunicator::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCommunicator::recieved)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject TCommunicator::staticMetaObject = { {
    QMetaObject::SuperData::link<QUdpSocket::staticMetaObject>(),
    qt_meta_stringdata_TCommunicator.offsetsAndSize,
    qt_meta_data_TCommunicator,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_TCommunicator_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *TCommunicator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TCommunicator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TCommunicator.stringdata0))
        return static_cast<void*>(this);
    return QUdpSocket::qt_metacast(_clname);
}

int TCommunicator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QUdpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void TCommunicator::recieved(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
