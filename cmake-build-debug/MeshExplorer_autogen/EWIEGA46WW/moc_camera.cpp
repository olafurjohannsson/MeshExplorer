/****************************************************************************
** Meta object code from reading C++ file 'camera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../camera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_camera_t {
    QByteArrayData data[38];
    char stringdata0[418];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_camera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_camera_t qt_meta_stringdata_camera = {
    {
QT_MOC_LITERAL(0, 0, 6), // "camera"
QT_MOC_LITERAL(1, 7, 11), // "setPosition"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 8), // "position"
QT_MOC_LITERAL(4, 29, 11), // "setUpVector"
QT_MOC_LITERAL(5, 41, 8), // "upVector"
QT_MOC_LITERAL(6, 50, 13), // "setViewCenter"
QT_MOC_LITERAL(7, 64, 10), // "viewCenter"
QT_MOC_LITERAL(8, 75, 19), // "resetViewToIdentity"
QT_MOC_LITERAL(9, 95, 9), // "translate"
QT_MOC_LITERAL(10, 105, 6), // "vLocal"
QT_MOC_LITERAL(11, 112, 23), // "CameraTranslationOption"
QT_MOC_LITERAL(12, 136, 6), // "option"
QT_MOC_LITERAL(13, 143, 14), // "translateWorld"
QT_MOC_LITERAL(14, 158, 6), // "vWorld"
QT_MOC_LITERAL(15, 165, 4), // "tilt"
QT_MOC_LITERAL(16, 170, 5), // "angle"
QT_MOC_LITERAL(17, 176, 3), // "pan"
QT_MOC_LITERAL(18, 180, 4), // "axis"
QT_MOC_LITERAL(19, 185, 4), // "roll"
QT_MOC_LITERAL(20, 190, 19), // "tiltAboutViewCenter"
QT_MOC_LITERAL(21, 210, 18), // "panAboutViewCenter"
QT_MOC_LITERAL(22, 229, 19), // "rollAboutViewCenter"
QT_MOC_LITERAL(23, 249, 6), // "rotate"
QT_MOC_LITERAL(24, 256, 1), // "q"
QT_MOC_LITERAL(25, 258, 21), // "rotateAboutViewCenter"
QT_MOC_LITERAL(26, 280, 14), // "projectionType"
QT_MOC_LITERAL(27, 295, 14), // "ProjectionType"
QT_MOC_LITERAL(28, 310, 9), // "nearPlane"
QT_MOC_LITERAL(29, 320, 8), // "farPlane"
QT_MOC_LITERAL(30, 329, 11), // "fieldOfView"
QT_MOC_LITERAL(31, 341, 11), // "aspectRatio"
QT_MOC_LITERAL(32, 353, 4), // "left"
QT_MOC_LITERAL(33, 358, 5), // "right"
QT_MOC_LITERAL(34, 364, 6), // "bottom"
QT_MOC_LITERAL(35, 371, 3), // "top"
QT_MOC_LITERAL(36, 375, 20), // "OrthogonalProjection"
QT_MOC_LITERAL(37, 396, 21) // "PerspectiveProjection"

    },
    "camera\0setPosition\0\0position\0setUpVector\0"
    "upVector\0setViewCenter\0viewCenter\0"
    "resetViewToIdentity\0translate\0vLocal\0"
    "CameraTranslationOption\0option\0"
    "translateWorld\0vWorld\0tilt\0angle\0pan\0"
    "axis\0roll\0tiltAboutViewCenter\0"
    "panAboutViewCenter\0rollAboutViewCenter\0"
    "rotate\0q\0rotateAboutViewCenter\0"
    "projectionType\0ProjectionType\0nearPlane\0"
    "farPlane\0fieldOfView\0aspectRatio\0left\0"
    "right\0bottom\0top\0OrthogonalProjection\0"
    "PerspectiveProjection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_camera[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
      12,  164, // properties
       1,  200, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x0a /* Public */,
       4,    1,  107,    2, 0x0a /* Public */,
       6,    1,  110,    2, 0x0a /* Public */,
       8,    0,  113,    2, 0x0a /* Public */,
       9,    2,  114,    2, 0x0a /* Public */,
       9,    1,  119,    2, 0x2a /* Public | MethodCloned */,
      13,    2,  122,    2, 0x0a /* Public */,
      13,    1,  127,    2, 0x2a /* Public | MethodCloned */,
      15,    1,  130,    2, 0x0a /* Public */,
      17,    1,  133,    2, 0x0a /* Public */,
      17,    2,  136,    2, 0x0a /* Public */,
      19,    1,  141,    2, 0x0a /* Public */,
      20,    1,  144,    2, 0x0a /* Public */,
      21,    1,  147,    2, 0x0a /* Public */,
      21,    2,  150,    2, 0x0a /* Public */,
      22,    1,  155,    2, 0x0a /* Public */,
      23,    1,  158,    2, 0x0a /* Public */,
      25,    1,  161,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QVector3D,    3,
    QMetaType::Void, QMetaType::QVector3D,    5,
    QMetaType::Void, QMetaType::QVector3D,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVector3D, 0x80000000 | 11,   10,   12,
    QMetaType::Void, QMetaType::QVector3D,   10,
    QMetaType::Void, QMetaType::QVector3D, 0x80000000 | 11,   14,   12,
    QMetaType::Void, QMetaType::QVector3D,   14,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, QMetaType::Float, QMetaType::QVector3D,   16,   18,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, QMetaType::Float, QMetaType::QVector3D,   16,   18,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, QMetaType::QQuaternion,   24,
    QMetaType::Void, QMetaType::QQuaternion,   24,

 // properties: name, type, flags
       3, QMetaType::QVector3D, 0x00095103,
       5, QMetaType::QVector3D, 0x00095103,
       7, QMetaType::QVector3D, 0x00095103,
      26, 0x80000000 | 27, 0x00095009,
      28, QMetaType::Float, 0x00095103,
      29, QMetaType::Float, 0x00095103,
      30, QMetaType::Float, 0x00095103,
      31, QMetaType::Float, 0x00095103,
      32, QMetaType::Float, 0x00095103,
      33, QMetaType::Float, 0x00095103,
      34, QMetaType::Float, 0x00095103,
      35, QMetaType::Float, 0x00095103,

 // enums: name, alias, flags, count, data
      27,   27, 0x0,    2,  205,

 // enum data: key, value
      36, uint(camera::OrthogonalProjection),
      37, uint(camera::PerspectiveProjection),

       0        // eod
};

void camera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        camera *_t = static_cast<camera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setPosition((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 1: _t->setUpVector((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 2: _t->setViewCenter((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 3: _t->resetViewToIdentity(); break;
        case 4: _t->translate((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< CameraTranslationOption(*)>(_a[2]))); break;
        case 5: _t->translate((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 6: _t->translateWorld((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< CameraTranslationOption(*)>(_a[2]))); break;
        case 7: _t->translateWorld((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 8: _t->tilt((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->pan((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 10: _t->pan((*reinterpret_cast< const float(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2]))); break;
        case 11: _t->roll((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 12: _t->tiltAboutViewCenter((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->panAboutViewCenter((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 14: _t->panAboutViewCenter((*reinterpret_cast< const float(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2]))); break;
        case 15: _t->rollAboutViewCenter((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 16: _t->rotate((*reinterpret_cast< const QQuaternion(*)>(_a[1]))); break;
        case 17: _t->rotateAboutViewCenter((*reinterpret_cast< const QQuaternion(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        camera *_t = static_cast<camera *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector3D*>(_v) = _t->position(); break;
        case 1: *reinterpret_cast< QVector3D*>(_v) = _t->upVector(); break;
        case 2: *reinterpret_cast< QVector3D*>(_v) = _t->viewCenter(); break;
        case 3: *reinterpret_cast< ProjectionType*>(_v) = _t->projectionType(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->nearPlane(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->farPlane(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->fieldOfView(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->aspectRatio(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->left(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->right(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->bottom(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->top(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        camera *_t = static_cast<camera *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPosition(*reinterpret_cast< QVector3D*>(_v)); break;
        case 1: _t->setUpVector(*reinterpret_cast< QVector3D*>(_v)); break;
        case 2: _t->setViewCenter(*reinterpret_cast< QVector3D*>(_v)); break;
        case 4: _t->setNearPlane(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setFarPlane(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setFieldOfView(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setAspectRatio(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setLeft(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setRight(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setBottom(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setTop(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject camera::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_camera.data,
    qt_meta_data_camera,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *camera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *camera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_camera.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int camera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
