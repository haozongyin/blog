/****************************************************************************
** Meta object code from reading C++ file 'space.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../air_plane/space.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'space.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Space_t {
    QByteArrayData data[10];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Space_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Space_t qt_meta_stringdata_Space = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Space"
QT_MOC_LITERAL(1, 6, 8), // "sig_menu"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 11), // "slt_newGame"
QT_MOC_LITERAL(4, 28, 14), // "slt_playerDead"
QT_MOC_LITERAL(5, 43, 13), // "slt_startGame"
QT_MOC_LITERAL(6, 57, 13), // "slt_pauseGame"
QT_MOC_LITERAL(7, 71, 10), // "slt_updata"
QT_MOC_LITERAL(8, 82, 12), // "slt_addscore"
QT_MOC_LITERAL(9, 95, 8) // "slt_menu"

    },
    "Space\0sig_menu\0\0slt_newGame\0slt_playerDead\0"
    "slt_startGame\0slt_pauseGame\0slt_updata\0"
    "slt_addscore\0slt_menu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Space[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x09 /* Protected */,
       4,    0,   56,    2, 0x09 /* Protected */,
       5,    0,   57,    2, 0x09 /* Protected */,
       6,    0,   58,    2, 0x09 /* Protected */,
       7,    0,   59,    2, 0x09 /* Protected */,
       8,    1,   60,    2, 0x09 /* Protected */,
       9,    0,   63,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void Space::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Space *_t = static_cast<Space *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_menu(); break;
        case 1: _t->slt_newGame(); break;
        case 2: _t->slt_playerDead(); break;
        case 3: _t->slt_startGame(); break;
        case 4: _t->slt_pauseGame(); break;
        case 5: _t->slt_updata(); break;
        case 6: _t->slt_addscore((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->slt_menu(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Space::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Space::sig_menu)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Space::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_Space.data,
      qt_meta_data_Space,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Space::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Space::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Space.stringdata0))
        return static_cast<void*>(const_cast< Space*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int Space::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Space::sig_menu()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
