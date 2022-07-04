/****************************************************************************
** Meta object code from reading C++ file 'qt_mainwindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qt_mainwindow.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_mainwindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[83];
    char stringdata0[2023];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 5), // "paint"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 5), // "image"
QT_MOC_LITERAL(4, 24, 14), // "resizeContents"
QT_MOC_LITERAL(5, 39, 1), // "w"
QT_MOC_LITERAL(6, 41, 1), // "h"
QT_MOC_LITERAL(7, 43, 9), // "pollMouse"
QT_MOC_LITERAL(8, 53, 16), // "statusBarMessage"
QT_MOC_LITERAL(9, 70, 3), // "msg"
QT_MOC_LITERAL(10, 74, 20), // "updateStatusBarPanes"
QT_MOC_LITERAL(11, 95, 23), // "updateStatusBarActivity"
QT_MOC_LITERAL(12, 119, 3), // "tag"
QT_MOC_LITERAL(13, 123, 6), // "active"
QT_MOC_LITERAL(14, 130, 20), // "updateStatusBarEmpty"
QT_MOC_LITERAL(15, 151, 5), // "empty"
QT_MOC_LITERAL(16, 157, 18), // "updateStatusBarTip"
QT_MOC_LITERAL(17, 176, 23), // "updateMenuResizeOptions"
QT_MOC_LITERAL(18, 200, 26), // "updateWindowRememberOption"
QT_MOC_LITERAL(19, 227, 8), // "setTitle"
QT_MOC_LITERAL(20, 236, 5), // "title"
QT_MOC_LITERAL(21, 242, 13), // "setFullscreen"
QT_MOC_LITERAL(22, 256, 5), // "state"
QT_MOC_LITERAL(23, 262, 15), // "setMouseCapture"
QT_MOC_LITERAL(24, 278, 25), // "showMessageForNonQtThread"
QT_MOC_LITERAL(25, 304, 6), // "header"
QT_MOC_LITERAL(26, 311, 7), // "message"
QT_MOC_LITERAL(27, 319, 22), // "getTitleForNonQtThread"
QT_MOC_LITERAL(28, 342, 8), // "wchar_t*"
QT_MOC_LITERAL(29, 351, 12), // "showSettings"
QT_MOC_LITERAL(30, 364, 9), // "hardReset"
QT_MOC_LITERAL(31, 374, 11), // "togglePause"
QT_MOC_LITERAL(32, 386, 29), // "on_actionFullscreen_triggered"
QT_MOC_LITERAL(33, 416, 27), // "on_actionSettings_triggered"
QT_MOC_LITERAL(34, 444, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(35, 468, 24), // "on_actionPause_triggered"
QT_MOC_LITERAL(36, 493, 31), // "on_actionCtrl_Alt_Del_triggered"
QT_MOC_LITERAL(37, 525, 31), // "on_actionCtrl_Alt_Esc_triggered"
QT_MOC_LITERAL(38, 557, 29), // "on_actionHard_Reset_triggered"
QT_MOC_LITERAL(39, 587, 41), // "on_actionRight_CTRL_is_left_A..."
QT_MOC_LITERAL(40, 629, 44), // "on_actionKeyboard_requires_ca..."
QT_MOC_LITERAL(41, 674, 35), // "on_actionResizable_window_tri..."
QT_MOC_LITERAL(42, 710, 7), // "checked"
QT_MOC_LITERAL(43, 718, 39), // "on_actionInverted_VGA_monitor..."
QT_MOC_LITERAL(44, 758, 23), // "on_action0_5x_triggered"
QT_MOC_LITERAL(45, 782, 21), // "on_action1x_triggered"
QT_MOC_LITERAL(46, 804, 23), // "on_action1_5x_triggered"
QT_MOC_LITERAL(47, 828, 21), // "on_action2x_triggered"
QT_MOC_LITERAL(48, 850, 25), // "on_actionLinear_triggered"
QT_MOC_LITERAL(49, 876, 26), // "on_actionNearest_triggered"
QT_MOC_LITERAL(50, 903, 33), // "on_actionFullScreen_int_trigg..."
QT_MOC_LITERAL(51, 937, 39), // "on_actionFullScreen_keepRatio..."
QT_MOC_LITERAL(52, 977, 32), // "on_actionFullScreen_43_triggered"
QT_MOC_LITERAL(53, 1010, 37), // "on_actionFullScreen_stretch_t..."
QT_MOC_LITERAL(54, 1048, 32), // "on_actionWhite_monitor_triggered"
QT_MOC_LITERAL(55, 1081, 32), // "on_actionGreen_monitor_triggered"
QT_MOC_LITERAL(56, 1114, 32), // "on_actionAmber_monitor_triggered"
QT_MOC_LITERAL(57, 1147, 32), // "on_actionRGB_Grayscale_triggered"
QT_MOC_LITERAL(58, 1180, 28), // "on_actionRGB_Color_triggered"
QT_MOC_LITERAL(59, 1209, 26), // "on_actionAverage_triggered"
QT_MOC_LITERAL(60, 1236, 29), // "on_actionBT709_HDTV_triggered"
QT_MOC_LITERAL(61, 1266, 33), // "on_actionBT601_NTSC_PAL_trigg..."
QT_MOC_LITERAL(62, 1300, 32), // "on_actionDocumentation_triggered"
QT_MOC_LITERAL(63, 1333, 30), // "on_actionAbout_86Box_triggered"
QT_MOC_LITERAL(64, 1364, 27), // "on_actionAbout_Qt_triggered"
QT_MOC_LITERAL(65, 1392, 42), // "on_actionForce_4_3_display_ra..."
QT_MOC_LITERAL(66, 1435, 57), // "on_actionChange_contrast_for_..."
QT_MOC_LITERAL(67, 1493, 52), // "on_actionCGA_PCjr_Tandy_EGA_S..."
QT_MOC_LITERAL(68, 1546, 45), // "on_actionRemember_size_and_po..."
QT_MOC_LITERAL(69, 1592, 37), // "on_actionSpecify_dimensions_t..."
QT_MOC_LITERAL(70, 1630, 32), // "on_actionHiDPI_scaling_triggered"
QT_MOC_LITERAL(71, 1663, 34), // "on_actionHide_status_bar_trig..."
QT_MOC_LITERAL(72, 1698, 32), // "on_actionHide_tool_bar_triggered"
QT_MOC_LITERAL(73, 1731, 42), // "on_actionUpdate_status_bar_ic..."
QT_MOC_LITERAL(74, 1774, 34), // "on_actionTake_screenshot_trig..."
QT_MOC_LITERAL(75, 1809, 29), // "on_actionSound_gain_triggered"
QT_MOC_LITERAL(76, 1839, 30), // "on_actionPreferences_triggered"
QT_MOC_LITERAL(77, 1870, 45), // "on_actionEnable_Discord_integ..."
QT_MOC_LITERAL(78, 1916, 35), // "on_actionRenderer_options_tri..."
QT_MOC_LITERAL(79, 1952, 16), // "refreshMediaMenu"
QT_MOC_LITERAL(80, 1969, 12), // "showMessage_"
QT_MOC_LITERAL(81, 1982, 9), // "getTitle_"
QT_MOC_LITERAL(82, 1992, 30) // "on_actionMCA_devices_triggered"

    },
    "MainWindow\0paint\0\0image\0resizeContents\0"
    "w\0h\0pollMouse\0statusBarMessage\0msg\0"
    "updateStatusBarPanes\0updateStatusBarActivity\0"
    "tag\0active\0updateStatusBarEmpty\0empty\0"
    "updateStatusBarTip\0updateMenuResizeOptions\0"
    "updateWindowRememberOption\0setTitle\0"
    "title\0setFullscreen\0state\0setMouseCapture\0"
    "showMessageForNonQtThread\0header\0"
    "message\0getTitleForNonQtThread\0wchar_t*\0"
    "showSettings\0hardReset\0togglePause\0"
    "on_actionFullscreen_triggered\0"
    "on_actionSettings_triggered\0"
    "on_actionExit_triggered\0"
    "on_actionPause_triggered\0"
    "on_actionCtrl_Alt_Del_triggered\0"
    "on_actionCtrl_Alt_Esc_triggered\0"
    "on_actionHard_Reset_triggered\0"
    "on_actionRight_CTRL_is_left_ALT_triggered\0"
    "on_actionKeyboard_requires_capture_triggered\0"
    "on_actionResizable_window_triggered\0"
    "checked\0on_actionInverted_VGA_monitor_triggered\0"
    "on_action0_5x_triggered\0on_action1x_triggered\0"
    "on_action1_5x_triggered\0on_action2x_triggered\0"
    "on_actionLinear_triggered\0"
    "on_actionNearest_triggered\0"
    "on_actionFullScreen_int_triggered\0"
    "on_actionFullScreen_keepRatio_triggered\0"
    "on_actionFullScreen_43_triggered\0"
    "on_actionFullScreen_stretch_triggered\0"
    "on_actionWhite_monitor_triggered\0"
    "on_actionGreen_monitor_triggered\0"
    "on_actionAmber_monitor_triggered\0"
    "on_actionRGB_Grayscale_triggered\0"
    "on_actionRGB_Color_triggered\0"
    "on_actionAverage_triggered\0"
    "on_actionBT709_HDTV_triggered\0"
    "on_actionBT601_NTSC_PAL_triggered\0"
    "on_actionDocumentation_triggered\0"
    "on_actionAbout_86Box_triggered\0"
    "on_actionAbout_Qt_triggered\0"
    "on_actionForce_4_3_display_ratio_triggered\0"
    "on_actionChange_contrast_for_monochrome_display_triggered\0"
    "on_actionCGA_PCjr_Tandy_EGA_S_VGA_overscan_triggered\0"
    "on_actionRemember_size_and_position_triggered\0"
    "on_actionSpecify_dimensions_triggered\0"
    "on_actionHiDPI_scaling_triggered\0"
    "on_actionHide_status_bar_triggered\0"
    "on_actionHide_tool_bar_triggered\0"
    "on_actionUpdate_status_bar_icons_triggered\0"
    "on_actionTake_screenshot_triggered\0"
    "on_actionSound_gain_triggered\0"
    "on_actionPreferences_triggered\0"
    "on_actionEnable_Discord_integration_triggered\0"
    "on_actionRenderer_options_triggered\0"
    "refreshMediaMenu\0showMessage_\0getTitle_\0"
    "on_actionMCA_devices_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      68,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  354,    2, 0x06 /* Public */,
       4,    2,  357,    2, 0x06 /* Public */,
       7,    0,  362,    2, 0x06 /* Public */,
       8,    1,  363,    2, 0x06 /* Public */,
      10,    0,  366,    2, 0x06 /* Public */,
      11,    2,  367,    2, 0x06 /* Public */,
      14,    2,  372,    2, 0x06 /* Public */,
      16,    1,  377,    2, 0x06 /* Public */,
      17,    0,  380,    2, 0x06 /* Public */,
      18,    0,  381,    2, 0x06 /* Public */,
      19,    1,  382,    2, 0x06 /* Public */,
      21,    1,  385,    2, 0x06 /* Public */,
      23,    1,  388,    2, 0x06 /* Public */,
      24,    2,  391,    2, 0x06 /* Public */,
      27,    1,  396,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      29,    0,  399,    2, 0x0a /* Public */,
      30,    0,  400,    2, 0x0a /* Public */,
      31,    0,  401,    2, 0x0a /* Public */,
      32,    0,  402,    2, 0x08 /* Private */,
      33,    0,  403,    2, 0x08 /* Private */,
      34,    0,  404,    2, 0x08 /* Private */,
      35,    0,  405,    2, 0x08 /* Private */,
      36,    0,  406,    2, 0x08 /* Private */,
      37,    0,  407,    2, 0x08 /* Private */,
      38,    0,  408,    2, 0x08 /* Private */,
      39,    0,  409,    2, 0x08 /* Private */,
      40,    0,  410,    2, 0x08 /* Private */,
      41,    1,  411,    2, 0x08 /* Private */,
      43,    0,  414,    2, 0x08 /* Private */,
      44,    0,  415,    2, 0x08 /* Private */,
      45,    0,  416,    2, 0x08 /* Private */,
      46,    0,  417,    2, 0x08 /* Private */,
      47,    0,  418,    2, 0x08 /* Private */,
      48,    0,  419,    2, 0x08 /* Private */,
      49,    0,  420,    2, 0x08 /* Private */,
      50,    0,  421,    2, 0x08 /* Private */,
      51,    0,  422,    2, 0x08 /* Private */,
      52,    0,  423,    2, 0x08 /* Private */,
      53,    0,  424,    2, 0x08 /* Private */,
      54,    0,  425,    2, 0x08 /* Private */,
      55,    0,  426,    2, 0x08 /* Private */,
      56,    0,  427,    2, 0x08 /* Private */,
      57,    0,  428,    2, 0x08 /* Private */,
      58,    0,  429,    2, 0x08 /* Private */,
      59,    0,  430,    2, 0x08 /* Private */,
      60,    0,  431,    2, 0x08 /* Private */,
      61,    0,  432,    2, 0x08 /* Private */,
      62,    0,  433,    2, 0x08 /* Private */,
      63,    0,  434,    2, 0x08 /* Private */,
      64,    0,  435,    2, 0x08 /* Private */,
      65,    0,  436,    2, 0x08 /* Private */,
      66,    0,  437,    2, 0x08 /* Private */,
      67,    0,  438,    2, 0x08 /* Private */,
      68,    0,  439,    2, 0x08 /* Private */,
      69,    0,  440,    2, 0x08 /* Private */,
      70,    0,  441,    2, 0x08 /* Private */,
      71,    0,  442,    2, 0x08 /* Private */,
      72,    0,  443,    2, 0x08 /* Private */,
      73,    0,  444,    2, 0x08 /* Private */,
      74,    0,  445,    2, 0x08 /* Private */,
      75,    0,  446,    2, 0x08 /* Private */,
      76,    0,  447,    2, 0x08 /* Private */,
      77,    1,  448,    2, 0x08 /* Private */,
      78,    0,  451,    2, 0x08 /* Private */,
      79,    0,  452,    2, 0x08 /* Private */,
      80,    2,  453,    2, 0x08 /* Private */,
      81,    1,  458,    2, 0x08 /* Private */,
      82,    0,  461,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   12,   15,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   25,   26,
    QMetaType::Void, 0x80000000 | 28,   20,

 // slots: parameters
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
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   42,
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
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   25,   26,
    QMetaType::Void, 0x80000000 | 28,   20,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->paint((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->resizeContents((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->pollMouse(); break;
        case 3: _t->statusBarMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->updateStatusBarPanes(); break;
        case 5: _t->updateStatusBarActivity((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->updateStatusBarEmpty((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->updateStatusBarTip((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateMenuResizeOptions(); break;
        case 9: _t->updateWindowRememberOption(); break;
        case 10: _t->setTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->setFullscreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setMouseCapture((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->showMessageForNonQtThread((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->getTitleForNonQtThread((*reinterpret_cast< wchar_t*(*)>(_a[1]))); break;
        case 15: _t->showSettings(); break;
        case 16: _t->hardReset(); break;
        case 17: _t->togglePause(); break;
        case 18: _t->on_actionFullscreen_triggered(); break;
        case 19: _t->on_actionSettings_triggered(); break;
        case 20: _t->on_actionExit_triggered(); break;
        case 21: _t->on_actionPause_triggered(); break;
        case 22: _t->on_actionCtrl_Alt_Del_triggered(); break;
        case 23: _t->on_actionCtrl_Alt_Esc_triggered(); break;
        case 24: _t->on_actionHard_Reset_triggered(); break;
        case 25: _t->on_actionRight_CTRL_is_left_ALT_triggered(); break;
        case 26: _t->on_actionKeyboard_requires_capture_triggered(); break;
        case 27: _t->on_actionResizable_window_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->on_actionInverted_VGA_monitor_triggered(); break;
        case 29: _t->on_action0_5x_triggered(); break;
        case 30: _t->on_action1x_triggered(); break;
        case 31: _t->on_action1_5x_triggered(); break;
        case 32: _t->on_action2x_triggered(); break;
        case 33: _t->on_actionLinear_triggered(); break;
        case 34: _t->on_actionNearest_triggered(); break;
        case 35: _t->on_actionFullScreen_int_triggered(); break;
        case 36: _t->on_actionFullScreen_keepRatio_triggered(); break;
        case 37: _t->on_actionFullScreen_43_triggered(); break;
        case 38: _t->on_actionFullScreen_stretch_triggered(); break;
        case 39: _t->on_actionWhite_monitor_triggered(); break;
        case 40: _t->on_actionGreen_monitor_triggered(); break;
        case 41: _t->on_actionAmber_monitor_triggered(); break;
        case 42: _t->on_actionRGB_Grayscale_triggered(); break;
        case 43: _t->on_actionRGB_Color_triggered(); break;
        case 44: _t->on_actionAverage_triggered(); break;
        case 45: _t->on_actionBT709_HDTV_triggered(); break;
        case 46: _t->on_actionBT601_NTSC_PAL_triggered(); break;
        case 47: _t->on_actionDocumentation_triggered(); break;
        case 48: _t->on_actionAbout_86Box_triggered(); break;
        case 49: _t->on_actionAbout_Qt_triggered(); break;
        case 50: _t->on_actionForce_4_3_display_ratio_triggered(); break;
        case 51: _t->on_actionChange_contrast_for_monochrome_display_triggered(); break;
        case 52: _t->on_actionCGA_PCjr_Tandy_EGA_S_VGA_overscan_triggered(); break;
        case 53: _t->on_actionRemember_size_and_position_triggered(); break;
        case 54: _t->on_actionSpecify_dimensions_triggered(); break;
        case 55: _t->on_actionHiDPI_scaling_triggered(); break;
        case 56: _t->on_actionHide_status_bar_triggered(); break;
        case 57: _t->on_actionHide_tool_bar_triggered(); break;
        case 58: _t->on_actionUpdate_status_bar_icons_triggered(); break;
        case 59: _t->on_actionTake_screenshot_triggered(); break;
        case 60: _t->on_actionSound_gain_triggered(); break;
        case 61: _t->on_actionPreferences_triggered(); break;
        case 62: _t->on_actionEnable_Discord_integration_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 63: _t->on_actionRenderer_options_triggered(); break;
        case 64: _t->refreshMediaMenu(); break;
        case 65: _t->showMessage_((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 66: _t->getTitle_((*reinterpret_cast< wchar_t*(*)>(_a[1]))); break;
        case 67: _t->on_actionMCA_devices_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::paint)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::resizeContents)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::pollMouse)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::statusBarMessage)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::updateStatusBarPanes)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::updateStatusBarActivity)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::updateStatusBarEmpty)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::updateStatusBarTip)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::updateMenuResizeOptions)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::updateWindowRememberOption)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::setTitle)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::setFullscreen)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::setMouseCapture)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::showMessageForNonQtThread)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(wchar_t * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::getTitleForNonQtThread)) {
                *result = 14;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
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
        if (_id < 68)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 68;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 68)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 68;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::paint(const QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::resizeContents(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::pollMouse()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainWindow::statusBarMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::updateStatusBarPanes()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MainWindow::updateStatusBarActivity(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::updateStatusBarEmpty(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::updateStatusBarTip(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainWindow::updateMenuResizeOptions()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MainWindow::updateWindowRememberOption()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MainWindow::setTitle(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MainWindow::setFullscreen(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MainWindow::setMouseCapture(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MainWindow::showMessageForNonQtThread(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MainWindow::getTitleForNonQtThread(wchar_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
