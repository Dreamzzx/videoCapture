/****************************************************************************
** Meta object code from reading C++ file 'ffglrenderwidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../opengl/ffglrenderwidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ffglrenderwidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16FFGLRenderWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto FFGLRenderWidget::qt_create_metaobjectdata<qt_meta_tag_ZN16FFGLRenderWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FFGLRenderWidget",
        "mouseDoubleClick",
        "",
        "mouseClick",
        "setYUVData",
        "uint8_t*",
        "yData",
        "uData",
        "vData",
        "width",
        "height",
        "AVFrame*",
        "frame"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'mouseDoubleClick'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'mouseClick'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setYUVData'
        QtMocHelpers::SlotData<void(uint8_t *, uint8_t *, uint8_t *, int, int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { 0x80000000 | 5, 7 }, { 0x80000000 | 5, 8 }, { QMetaType::Int, 9 },
            { QMetaType::Int, 10 },
        }}),
        // Slot 'setYUVData'
        QtMocHelpers::SlotData<void(AVFrame *)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FFGLRenderWidget, qt_meta_tag_ZN16FFGLRenderWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FFGLRenderWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16FFGLRenderWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16FFGLRenderWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16FFGLRenderWidgetE_t>.metaTypes,
    nullptr
} };

void FFGLRenderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FFGLRenderWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->mouseDoubleClick(); break;
        case 1: _t->mouseClick(); break;
        case 2: _t->setYUVData((*reinterpret_cast< std::add_pointer_t<uint8_t*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint8_t*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint8_t*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5]))); break;
        case 3: _t->setYUVData((*reinterpret_cast< std::add_pointer_t<AVFrame*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FFGLRenderWidget::*)()>(_a, &FFGLRenderWidget::mouseDoubleClick, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (FFGLRenderWidget::*)()>(_a, &FFGLRenderWidget::mouseClick, 1))
            return;
    }
}

const QMetaObject *FFGLRenderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FFGLRenderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16FFGLRenderWidgetE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QOpenGLFunctions_4_5_Core"))
        return static_cast< QOpenGLFunctions_4_5_Core*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int FFGLRenderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FFGLRenderWidget::mouseDoubleClick()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FFGLRenderWidget::mouseClick()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
