/****************************************************************************
** Meta object code from reading C++ file 'application.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../application.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'application.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TApplication_t {
    const uint offsetsAndSize[8];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_TApplication_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_TApplication_t qt_meta_stringdata_TApplication = {
    {
QT_MOC_LITERAL(0, 12), // "TApplication"
QT_MOC_LITERAL(13, 16), // "fromCommunicator"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 14) // "toCommunicator"

    },
    "TApplication\0fromCommunicator\0\0"
    "toCommunicator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TApplication[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x0a,    0 /* Public */,
       3,    1,   29,    2, 0x0a,    2 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void TApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TApplication *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fromCommunicator((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->toCommunicator((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject TApplication::staticMetaObject = { {
    QMetaObject::SuperData::link<QApplication::staticMetaObject>(),
    qt_meta_stringdata_TApplication.offsetsAndSize,
    qt_meta_data_TApplication,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_TApplication_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *TApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TApplication.stringdata0))
        return static_cast<void*>(this);
    return QApplication::qt_metacast(_clname);
}

int TApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
