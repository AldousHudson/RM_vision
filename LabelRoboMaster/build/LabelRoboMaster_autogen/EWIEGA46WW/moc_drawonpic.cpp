/****************************************************************************
** Meta object code from reading C++ file 'drawonpic.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "drawonpic.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drawonpic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DrawOnPic_t {
    QByteArrayData data[17];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DrawOnPic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DrawOnPic_t qt_meta_stringdata_DrawOnPic = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DrawOnPic"
QT_MOC_LITERAL(1, 10, 12), // "labelChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "QVector<box_t>"
QT_MOC_LITERAL(4, 39, 14), // "setCurrentFile"
QT_MOC_LITERAL(5, 54, 4), // "file"
QT_MOC_LITERAL(6, 59, 9), // "loadImage"
QT_MOC_LITERAL(7, 69, 9), // "saveLabel"
QT_MOC_LITERAL(8, 79, 13), // "setAddingMode"
QT_MOC_LITERAL(9, 93, 13), // "setNormalMode"
QT_MOC_LITERAL(10, 107, 11), // "setFocusBox"
QT_MOC_LITERAL(11, 119, 5), // "index"
QT_MOC_LITERAL(12, 125, 9), // "removeBox"
QT_MOC_LITERAL(13, 135, 6), // "box_t*"
QT_MOC_LITERAL(14, 142, 3), // "box"
QT_MOC_LITERAL(15, 146, 5), // "smart"
QT_MOC_LITERAL(16, 152, 9) // "updateBox"

    },
    "DrawOnPic\0labelChanged\0\0QVector<box_t>\0"
    "setCurrentFile\0file\0loadImage\0saveLabel\0"
    "setAddingMode\0setNormalMode\0setFocusBox\0"
    "index\0removeBox\0box_t*\0box\0smart\0"
    "updateBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DrawOnPic[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   67,    2, 0x0a /* Public */,
       6,    0,   70,    2, 0x0a /* Public */,
       7,    0,   71,    2, 0x0a /* Public */,
       8,    0,   72,    2, 0x0a /* Public */,
       9,    0,   73,    2, 0x0a /* Public */,
      10,    1,   74,    2, 0x0a /* Public */,
      12,    1,   77,    2, 0x0a /* Public */,
      15,    0,   80,    2, 0x0a /* Public */,
      16,    0,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DrawOnPic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DrawOnPic *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->labelChanged((*reinterpret_cast< const QVector<box_t>(*)>(_a[1]))); break;
        case 1: _t->setCurrentFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->loadImage(); break;
        case 3: _t->saveLabel(); break;
        case 4: _t->setAddingMode(); break;
        case 5: _t->setNormalMode(); break;
        case 6: _t->setFocusBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->removeBox((*reinterpret_cast< box_t*(*)>(_a[1]))); break;
        case 8: _t->smart(); break;
        case 9: _t->updateBox(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DrawOnPic::*)(const QVector<box_t> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrawOnPic::labelChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DrawOnPic::staticMetaObject = { {
    &QLabel::staticMetaObject,
    qt_meta_stringdata_DrawOnPic.data,
    qt_meta_data_DrawOnPic,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DrawOnPic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DrawOnPic::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DrawOnPic.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int DrawOnPic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void DrawOnPic::labelChanged(const QVector<box_t> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
