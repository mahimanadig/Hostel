/****************************************************************************
** Meta object code from reading C++ file 'form.h'
**
** Created: Thu Jul 31 13:07:50 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../form.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Form[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x08,
      43,   35,    5,    5, 0x08,
      75,   35,    5,    5, 0x08,
     107,    5,    5,    5, 0x08,
     138,    5,    5,    5, 0x08,
     169,    5,    5,    5, 0x08,
     193,    5,    5,    5, 0x08,
     223,    5,    5,    5, 0x08,
     251,    5,    5,    5, 0x08,
     278,    5,    5,    5, 0x08,
     303,    5,    5,    5, 0x08,
     331,    5,    5,    5, 0x08,
     359,    5,    5,    5, 0x08,
     387,   35,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Form[] = {
    "Form\0\0on_spinBox_editingFinished()\0"
    "checked\0on_radioButton_13_clicked(bool)\0"
    "on_radioButton_15_clicked(bool)\0"
    "on_spinBox_3_editingFinished()\0"
    "on_spinBox_2_editingFinished()\0"
    "on_pushButton_clicked()\0"
    "on_lineEdit_editingFinished()\0"
    "on_lineEdit_returnPressed()\0"
    "on_radioButton_2_clicked()\0"
    "on_radioButton_clicked()\0"
    "on_radioButton_13_clicked()\0"
    "on_radioButton_14_clicked()\0"
    "on_radioButton_16_clicked()\0"
    "on_radioButton_16_clicked(bool)\0"
};

const QMetaObject Form::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Form,
      qt_meta_data_Form, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Form::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Form::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Form))
        return static_cast<void*>(const_cast< Form*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_spinBox_editingFinished(); break;
        case 1: on_radioButton_13_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        //case 2: on_radioButton_15_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: on_spinBox_3_editingFinished(); break;
        case 4: on_spinBox_2_editingFinished(); break;
        case 5: on_pushButton_clicked(); break;
        //case 6: on_lineEdit_editingFinished(); break;
        //case 7: on_lineEdit_returnPressed(); break;
        case 8: on_radioButton_2_clicked(); break;
        case 9: on_radioButton_clicked(); break;
        case 10: on_radioButton_13_clicked(); break;
        case 11: on_radioButton_14_clicked(); break;
        //case 12: on_radioButton_16_clicked(); break;
        case 13: on_radioButton_16_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
