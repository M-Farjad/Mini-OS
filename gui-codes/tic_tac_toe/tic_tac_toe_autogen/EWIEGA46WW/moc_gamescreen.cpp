/****************************************************************************
** Meta object code from reading C++ file 'gamescreen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../code/tic_tac_toe/gamescreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamescreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameScreen_t {
    QByteArrayData data[15];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameScreen_t qt_meta_stringdata_GameScreen = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GameScreen"
QT_MOC_LITERAL(1, 11, 23), // "on_l_player_linkHovered"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "link"
QT_MOC_LITERAL(4, 41, 13), // "on_b1_clicked"
QT_MOC_LITERAL(5, 55, 13), // "on_b2_clicked"
QT_MOC_LITERAL(6, 69, 13), // "on_b3_clicked"
QT_MOC_LITERAL(7, 83, 13), // "on_b4_clicked"
QT_MOC_LITERAL(8, 97, 13), // "on_b5_clicked"
QT_MOC_LITERAL(9, 111, 13), // "on_b6_clicked"
QT_MOC_LITERAL(10, 125, 13), // "on_b7_clicked"
QT_MOC_LITERAL(11, 139, 13), // "on_b8_clicked"
QT_MOC_LITERAL(12, 153, 13), // "on_b9_clicked"
QT_MOC_LITERAL(13, 167, 23), // "on_actionBack_triggered"
QT_MOC_LITERAL(14, 191, 24) // "on_actionClose_triggered"

    },
    "GameScreen\0on_l_player_linkHovered\0\0"
    "link\0on_b1_clicked\0on_b2_clicked\0"
    "on_b3_clicked\0on_b4_clicked\0on_b5_clicked\0"
    "on_b6_clicked\0on_b7_clicked\0on_b8_clicked\0"
    "on_b9_clicked\0on_actionBack_triggered\0"
    "on_actionClose_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameScreen[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    0,   77,    2, 0x08 /* Private */,
       5,    0,   78,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    0,   81,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GameScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_l_player_linkHovered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_b1_clicked(); break;
        case 2: _t->on_b2_clicked(); break;
        case 3: _t->on_b3_clicked(); break;
        case 4: _t->on_b4_clicked(); break;
        case 5: _t->on_b5_clicked(); break;
        case 6: _t->on_b6_clicked(); break;
        case 7: _t->on_b7_clicked(); break;
        case 8: _t->on_b8_clicked(); break;
        case 9: _t->on_b9_clicked(); break;
        case 10: _t->on_actionBack_triggered(); break;
        case 11: _t->on_actionClose_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GameScreen::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_GameScreen.data,
    qt_meta_data_GameScreen,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GameScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameScreen.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int GameScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
