/****************************************************************************
** Meta object code from reading C++ file 'texthandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MultiDocViewer/texthandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'texthandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TextHandler_t {
    QByteArrayData data[15];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TextHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TextHandler_t qt_meta_stringdata_TextHandler = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TextHandler"
QT_MOC_LITERAL(1, 12, 13), // "targetChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "fileUrlChanged"
QT_MOC_LITERAL(4, 42, 11), // "textChanged"
QT_MOC_LITERAL(5, 54, 16), // "textTitleChanged"
QT_MOC_LITERAL(6, 71, 10), // "setFileUrl"
QT_MOC_LITERAL(7, 82, 3), // "arg"
QT_MOC_LITERAL(8, 86, 7), // "setText"
QT_MOC_LITERAL(9, 94, 12), // "setTextTitle"
QT_MOC_LITERAL(10, 107, 6), // "target"
QT_MOC_LITERAL(11, 114, 11), // "QQuickItem*"
QT_MOC_LITERAL(12, 126, 7), // "fileUrl"
QT_MOC_LITERAL(13, 134, 4), // "text"
QT_MOC_LITERAL(14, 139, 9) // "textTitle"

    },
    "TextHandler\0targetChanged\0\0fileUrlChanged\0"
    "textChanged\0textTitleChanged\0setFileUrl\0"
    "arg\0setText\0setTextTitle\0target\0"
    "QQuickItem*\0fileUrl\0text\0textTitle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   53,    2, 0x0a /* Public */,
       8,    1,   56,    2, 0x0a /* Public */,
       9,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

 // properties: name, type, flags
      10, 0x80000000 | 11, 0x0049510b,
      12, QMetaType::QUrl, 0x00495103,
      13, QMetaType::QString, 0x00495103,
      14, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void TextHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TextHandler *_t = static_cast<TextHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->targetChanged(); break;
        case 1: _t->fileUrlChanged(); break;
        case 2: _t->textChanged(); break;
        case 3: _t->textTitleChanged(); break;
        case 4: _t->setFileUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 5: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setTextTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TextHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TextHandler::targetChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TextHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TextHandler::fileUrlChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TextHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TextHandler::textChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TextHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TextHandler::textTitleChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TextHandler *_t = static_cast<TextHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->target(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->fileUrl(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->textTitle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TextHandler *_t = static_cast<TextHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTarget(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 1: _t->setFileUrl(*reinterpret_cast< QUrl*>(_v)); break;
        case 2: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setTextTitle(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject TextHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TextHandler.data,
      qt_meta_data_TextHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TextHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TextHandler.stringdata0))
        return static_cast<void*>(const_cast< TextHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int TextHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TextHandler::targetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void TextHandler::fileUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void TextHandler::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void TextHandler::textTitleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
