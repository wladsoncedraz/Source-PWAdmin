/****************************************************************************
** Meta object code from reading C++ file 'dlgcooldowneditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pwAdmin-Feito/dlgcooldowneditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgcooldowneditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DlgCooldownEditor_t {
    QByteArrayData data[15];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DlgCooldownEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DlgCooldownEditor_t qt_meta_stringdata_DlgCooldownEditor = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DlgCooldownEditor"
QT_MOC_LITERAL(1, 18, 10), // "changeList"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 26), // "on_tableWidget_cellClicked"
QT_MOC_LITERAL(4, 57, 3), // "row"
QT_MOC_LITERAL(5, 61, 6), // "column"
QT_MOC_LITERAL(6, 68, 23), // "on_btn_slot_add_clicked"
QT_MOC_LITERAL(7, 92, 26), // "on_btn_slot_delete_clicked"
QT_MOC_LITERAL(8, 119, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 141, 19), // "on_btnClose_clicked"
QT_MOC_LITERAL(10, 161, 22), // "on_txt_id_valueChanged"
QT_MOC_LITERAL(11, 184, 4), // "arg1"
QT_MOC_LITERAL(12, 189, 29), // "on_txt_timestamp_valueChanged"
QT_MOC_LITERAL(13, 219, 28), // "on_txt_interval_valueChanged"
QT_MOC_LITERAL(14, 248, 24) // "on_txt_time_valueChanged"

    },
    "DlgCooldownEditor\0changeList\0\0"
    "on_tableWidget_cellClicked\0row\0column\0"
    "on_btn_slot_add_clicked\0"
    "on_btn_slot_delete_clicked\0"
    "on_pushButton_clicked\0on_btnClose_clicked\0"
    "on_txt_id_valueChanged\0arg1\0"
    "on_txt_timestamp_valueChanged\0"
    "on_txt_interval_valueChanged\0"
    "on_txt_time_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DlgCooldownEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    2,   65,    2, 0x08 /* Private */,
       6,    0,   70,    2, 0x08 /* Private */,
       7,    0,   71,    2, 0x08 /* Private */,
       8,    0,   72,    2, 0x08 /* Private */,
       9,    0,   73,    2, 0x08 /* Private */,
      10,    1,   74,    2, 0x08 /* Private */,
      12,    1,   77,    2, 0x08 /* Private */,
      13,    1,   80,    2, 0x08 /* Private */,
      14,    1,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void DlgCooldownEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgCooldownEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeList(); break;
        case 1: _t->on_tableWidget_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_btn_slot_add_clicked(); break;
        case 3: _t->on_btn_slot_delete_clicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_btnClose_clicked(); break;
        case 6: _t->on_txt_id_valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_txt_timestamp_valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_txt_interval_valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_txt_time_valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DlgCooldownEditor::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_DlgCooldownEditor.data,
    qt_meta_data_DlgCooldownEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DlgCooldownEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DlgCooldownEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DlgCooldownEditor.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DlgCooldownEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
