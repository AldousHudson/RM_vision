/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[440];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 34), // "on_openDirectoryPushButton_cl..."
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 36), // "on_fileListWidget_currentItem..."
QT_MOC_LITERAL(4, 84, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(5, 101, 7), // "current"
QT_MOC_LITERAL(6, 109, 8), // "previous"
QT_MOC_LITERAL(7, 118, 21), // "on_label_labelChanged"
QT_MOC_LITERAL(8, 140, 14), // "QVector<box_t>"
QT_MOC_LITERAL(9, 155, 36), // "on_labelListWidget_itemDouble..."
QT_MOC_LITERAL(10, 192, 4), // "item"
QT_MOC_LITERAL(11, 197, 37), // "on_labelListWidget_currentIte..."
QT_MOC_LITERAL(12, 235, 26), // "on_smartPushButton_clicked"
QT_MOC_LITERAL(13, 262, 29), // "on_smartAllPushButton_clicked"
QT_MOC_LITERAL(14, 292, 25), // "on_nextPushButton_clicked"
QT_MOC_LITERAL(15, 318, 25), // "on_prevPushButton_clicked"
QT_MOC_LITERAL(16, 344, 40), // "on_fileListHorizontalSlider_v..."
QT_MOC_LITERAL(17, 385, 5), // "value"
QT_MOC_LITERAL(18, 391, 40), // "on_fileListHorizontalSlider_r..."
QT_MOC_LITERAL(19, 432, 3), // "min"
QT_MOC_LITERAL(20, 436, 3) // "max"

    },
    "MainWindow\0on_openDirectoryPushButton_clicked\0"
    "\0on_fileListWidget_currentItemChanged\0"
    "QListWidgetItem*\0current\0previous\0"
    "on_label_labelChanged\0QVector<box_t>\0"
    "on_labelListWidget_itemDoubleClicked\0"
    "item\0on_labelListWidget_currentItemChanged\0"
    "on_smartPushButton_clicked\0"
    "on_smartAllPushButton_clicked\0"
    "on_nextPushButton_clicked\0"
    "on_prevPushButton_clicked\0"
    "on_fileListHorizontalSlider_valueChanged\0"
    "value\0on_fileListHorizontalSlider_rangeChanged\0"
    "min\0max"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    2,   70,    2, 0x08 /* Private */,
       7,    1,   75,    2, 0x08 /* Private */,
       9,    1,   78,    2, 0x08 /* Private */,
      11,    2,   81,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,
      14,    0,   88,    2, 0x08 /* Private */,
      15,    0,   89,    2, 0x08 /* Private */,
      16,    1,   90,    2, 0x08 /* Private */,
      18,    2,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    6,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 4,   10,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   19,   20,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_openDirectoryPushButton_clicked(); break;
        case 1: _t->on_fileListWidget_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 2: _t->on_label_labelChanged((*reinterpret_cast< const QVector<box_t>(*)>(_a[1]))); break;
        case 3: _t->on_labelListWidget_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->on_labelListWidget_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 5: _t->on_smartPushButton_clicked(); break;
        case 6: _t->on_smartAllPushButton_clicked(); break;
        case 7: _t->on_nextPushButton_clicked(); break;
        case 8: _t->on_prevPushButton_clicked(); break;
        case 9: _t->on_fileListHorizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_fileListHorizontalSlider_rangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
