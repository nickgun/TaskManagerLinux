/****************************************************************************
** Meta object code from reading C++ file 'taskmanager.h'
**
** Created: Thu Oct 17 18:13:57 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TaskManager/taskmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'taskmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TaskManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      49,   37,   12,   12, 0x08,
     103,   12,   12,   12, 0x08,
     126,   12,   12,   12, 0x08,
     154,   12,   12,   12, 0x08,
     181,  176,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TaskManager[] = {
    "TaskManager\0\0on_refreshBtn_clicked()\0"
    "item,column\0"
    "on_dislayInfomation_itemClicked(QTreeWidgetItem*,int)\0"
    "on_changeBtn_clicked()\0"
    "on_killProcessBtn_clicked()\0"
    "on_loginBtn_clicked()\0arg1\0"
    "on_lineEdit_textChanged(QString)\0"
};

void TaskManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskManager *_t = static_cast<TaskManager *>(_o);
        switch (_id) {
        case 0: _t->on_refreshBtn_clicked(); break;
        case 1: _t->on_dislayInfomation_itemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_changeBtn_clicked(); break;
        case 3: _t->on_killProcessBtn_clicked(); break;
        case 4: _t->on_loginBtn_clicked(); break;
        case 5: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TaskManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TaskManager::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TaskManager,
      qt_meta_data_TaskManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TaskManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TaskManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TaskManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TaskManager))
        return static_cast<void*>(const_cast< TaskManager*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TaskManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
