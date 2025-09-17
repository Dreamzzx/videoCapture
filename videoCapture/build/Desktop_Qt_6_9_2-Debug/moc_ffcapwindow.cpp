/****************************************************************************
** Meta object code from reading C++ file 'ffcapwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ui/ffcapwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ffcapwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN11FFCapWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto FFCapWindow::qt_create_metaobjectdata<qt_meta_tag_ZN11FFCapWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FFCapWindow",
        "sendScreenFrame",
        "",
        "AVFrame*",
        "frame",
        "sendCameraFrame",
        "sendVideoFrame",
        "peekVideoReady",
        "getOverlayPos",
        "int*",
        "x",
        "y",
        "w",
        "h",
        "type",
        "getOverlayNumbers",
        "setCaptureProcessTime",
        "int64_t",
        "seconds",
        "on_closeBtn_clicked",
        "on_maximizeBtn_clicked",
        "on_minimizeBtn_clicked",
        "on_startBtn_clicked",
        "on_cameraCheckBox_toggled",
        "checked",
        "on_cameraComboBox_currentIndexChanged",
        "index",
        "on_screenCheckBox_toggled",
        "on_videoCheckBox_toggled",
        "on_microphoneCheckBox_toggled",
        "on_audioCheckBox_toggled",
        "on_stopBtn_clicked",
        "on_beautyCheckBox_toggled",
        "on_microphoneVlomeSlider_valueChanged",
        "value",
        "on_smoothSlider_valueChanged",
        "on_whiteSlider_valueChanged",
        "on_audioVolumeSlider_valueChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'sendScreenFrame'
        QtMocHelpers::SlotData<void(AVFrame *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'sendCameraFrame'
        QtMocHelpers::SlotData<void(AVFrame *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'sendVideoFrame'
        QtMocHelpers::SlotData<void(AVFrame *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'peekVideoReady'
        QtMocHelpers::SlotData<bool()>(7, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'getOverlayPos'
        QtMocHelpers::SlotData<void(int *, int *, int *, int *, int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 }, { 0x80000000 | 9, 11 }, { 0x80000000 | 9, 12 }, { 0x80000000 | 9, 13 },
            { QMetaType::Int, 14 },
        }}),
        // Slot 'getOverlayNumbers'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setCaptureProcessTime'
        QtMocHelpers::SlotData<void(int64_t)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Slot 'on_closeBtn_clicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_maximizeBtn_clicked'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_minimizeBtn_clicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_startBtn_clicked'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cameraCheckBox_toggled'
        QtMocHelpers::SlotData<void(bool)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 24 },
        }}),
        // Slot 'on_cameraComboBox_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 26 },
        }}),
        // Slot 'on_screenCheckBox_toggled'
        QtMocHelpers::SlotData<void(bool)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 24 },
        }}),
        // Slot 'on_videoCheckBox_toggled'
        QtMocHelpers::SlotData<void(bool)>(28, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 24 },
        }}),
        // Slot 'on_microphoneCheckBox_toggled'
        QtMocHelpers::SlotData<void(bool)>(29, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 24 },
        }}),
        // Slot 'on_audioCheckBox_toggled'
        QtMocHelpers::SlotData<void(bool)>(30, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 24 },
        }}),
        // Slot 'on_stopBtn_clicked'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_beautyCheckBox_toggled'
        QtMocHelpers::SlotData<void(bool)>(32, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 24 },
        }}),
        // Slot 'on_microphoneVlomeSlider_valueChanged'
        QtMocHelpers::SlotData<void(int)>(33, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 34 },
        }}),
        // Slot 'on_smoothSlider_valueChanged'
        QtMocHelpers::SlotData<void(int)>(35, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 34 },
        }}),
        // Slot 'on_whiteSlider_valueChanged'
        QtMocHelpers::SlotData<void(int)>(36, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 34 },
        }}),
        // Slot 'on_audioVolumeSlider_valueChanged'
        QtMocHelpers::SlotData<void(int)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 34 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FFCapWindow, qt_meta_tag_ZN11FFCapWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FFCapWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11FFCapWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11FFCapWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11FFCapWindowE_t>.metaTypes,
    nullptr
} };

void FFCapWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FFCapWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sendScreenFrame((*reinterpret_cast< std::add_pointer_t<AVFrame*>>(_a[1]))); break;
        case 1: _t->sendCameraFrame((*reinterpret_cast< std::add_pointer_t<AVFrame*>>(_a[1]))); break;
        case 2: _t->sendVideoFrame((*reinterpret_cast< std::add_pointer_t<AVFrame*>>(_a[1]))); break;
        case 3: { bool _r = _t->peekVideoReady();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->getOverlayPos((*reinterpret_cast< std::add_pointer_t<int*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int*>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5]))); break;
        case 5: _t->getOverlayNumbers(); break;
        case 6: _t->setCaptureProcessTime((*reinterpret_cast< std::add_pointer_t<int64_t>>(_a[1]))); break;
        case 7: _t->on_closeBtn_clicked(); break;
        case 8: _t->on_maximizeBtn_clicked(); break;
        case 9: _t->on_minimizeBtn_clicked(); break;
        case 10: _t->on_startBtn_clicked(); break;
        case 11: _t->on_cameraCheckBox_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->on_cameraComboBox_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_screenCheckBox_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->on_videoCheckBox_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->on_microphoneCheckBox_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->on_audioCheckBox_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->on_stopBtn_clicked(); break;
        case 18: _t->on_beautyCheckBox_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->on_microphoneVlomeSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->on_smoothSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->on_whiteSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->on_audioVolumeSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *FFCapWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FFCapWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11FFCapWindowE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FFCapWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
    return _id;
}
QT_WARNING_POP
