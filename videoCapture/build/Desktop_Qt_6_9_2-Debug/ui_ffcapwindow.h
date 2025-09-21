/********************************************************************************
** Form generated from reading UI file 'ffcapwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FFCAPWINDOW_H
#define UI_FFCAPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "opengl/ffglrenderwidget.h"
#include "ui/ffcapheaderwidget.h"

QT_BEGIN_NAMESPACE

class Ui_FFCapWindow
{
public:
    QVBoxLayout *verticalLayout;
    FFCapHeaderWidget *headerWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *iconLabel;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *minimizeBtn;
    QPushButton *maximizeBtn;
    QPushButton *closeBtn;
    QWidget *centerWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    FFGLRenderWidget *GLRenderWidget;
    QSpacerItem *horizontalSpacer_4;
    QWidget *confgWidget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *modeLogoLabel;
    QLabel *modeLabel;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *captureRadioButton;
    QRadioButton *liveRadioButton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *captureLabel;
    QLineEdit *captureLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *liveLabel;
    QLineEdit *liveLineEdit;
    QWidget *sourceWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *sourceLogoLabel;
    QLabel *sourceLabel;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *screenCheckBox;
    QCheckBox *videoCheckBox;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *cameraCheckBox;
    QComboBox *cameraComboBox;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *microphoneCheckBox;
    QCheckBox *audioCheckBox;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *captureConfigLogoLabel;
    QLabel *captureConfigLabel;
    QHBoxLayout *horizontalLayout_15;
    QLabel *microphoneVolumeLabel;
    QSlider *microphoneVlomeSlider;
    QLabel *audioVolumeLabel;
    QSlider *audioVolumeSlider;
    QHBoxLayout *horizontalLayout_13;
    QCheckBox *beautyCheckBox;
    QLabel *smoothLabel;
    QSlider *smoothSlider;
    QLabel *whiteLabel;
    QSlider *whiteSlider;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *startBtn;
    QPushButton *stopBtn;
    QLabel *captureProcessLabel;
    QLabel *captureProcessTimeLabel;

    void setupUi(QWidget *FFCapWindow)
    {
        if (FFCapWindow->objectName().isEmpty())
            FFCapWindow->setObjectName("FFCapWindow");
        FFCapWindow->resize(999, 694);
        FFCapWindow->setMouseTracking(true);
        FFCapWindow->setStyleSheet(QString::fromUtf8(" QSlider::groove:horizontal {\n"
"                background: rgb(51, 51, 51);\n"
"                height:4px;\n"
"                border-radius: 4px;\n"
"            }\n"
"            \n"
"            QSlider::handle:horizontal {\n"
"                background: rgb(207, 207, 207);\n"
"                border: 1px solid #5c5c5c;\n"
"                width: 14px;\n"
"                margin: -4px 0;\n"
"                border-radius: 8px;\n"
"            }\n"
"\n"
"            QSlider::handle:horizontal:hover {\n"
"                background: rgb(207, 207, 207);\n"
"                border: 2px solid #5c5c5c;\n"
"                width: 12px;\n"
"                margin: -4px 0;\n"
"                border-radius: 8px;\n"
"            }"));
        verticalLayout = new QVBoxLayout(FFCapWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        headerWidget = new FFCapHeaderWidget(FFCapWindow);
        headerWidget->setObjectName("headerWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(headerWidget->sizePolicy().hasHeightForWidth());
        headerWidget->setSizePolicy(sizePolicy);
        headerWidget->setMaximumSize(QSize(16777215, 100));
        headerWidget->setMouseTracking(true);
        headerWidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(headerWidget);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 10, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        iconLabel = new QLabel(headerWidget);
        iconLabel->setObjectName("iconLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(iconLabel->sizePolicy().hasHeightForWidth());
        iconLabel->setSizePolicy(sizePolicy1);
        iconLabel->setMinimumSize(QSize(60, 60));
        iconLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-image:url(:/image/icon.svg);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center;\n"
"	background-color:transparent;\n"
"	border:none;\n"
"}"));

        horizontalLayout_2->addWidget(iconLabel);

        titleLabel = new QLabel(headerWidget);
        titleLabel->setObjectName("titleLabel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy2);
        titleLabel->setMinimumSize(QSize(180, 0));
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: none;\n"
"    font: bold 30px \"Microsoft YaHei UI\";\n"
"	color:#A0A0A0;\n"
"    background-color: transparent;\n"
"}    "));

        horizontalLayout_2->addWidget(titleLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        minimizeBtn = new QPushButton(headerWidget);
        minimizeBtn->setObjectName("minimizeBtn");
        sizePolicy1.setHeightForWidth(minimizeBtn->sizePolicy().hasHeightForWidth());
        minimizeBtn->setSizePolicy(sizePolicy1);
        minimizeBtn->setMinimumSize(QSize(40, 40));
        minimizeBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image:url(:/image/minimize.svg);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center;\n"
"	background-color:transparent;\n"
"	border:none;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#2B2B2B;\n"
"}"));

        horizontalLayout_2->addWidget(minimizeBtn);

        maximizeBtn = new QPushButton(headerWidget);
        maximizeBtn->setObjectName("maximizeBtn");
        sizePolicy1.setHeightForWidth(maximizeBtn->sizePolicy().hasHeightForWidth());
        maximizeBtn->setSizePolicy(sizePolicy1);
        maximizeBtn->setMinimumSize(QSize(40, 40));
        maximizeBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image:url(:/image/maximize_1.svg);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center;\n"
"	background-color:transparent;\n"
"	border:none;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#2B2B2B;\n"
"}"));

        horizontalLayout_2->addWidget(maximizeBtn);

        closeBtn = new QPushButton(headerWidget);
        closeBtn->setObjectName("closeBtn");
        sizePolicy1.setHeightForWidth(closeBtn->sizePolicy().hasHeightForWidth());
        closeBtn->setSizePolicy(sizePolicy1);
        closeBtn->setMinimumSize(QSize(40, 40));
        closeBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image:url(:/image/close.svg);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center;\n"
"	background-color:transparent;\n"
"	border:none;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#2B2B2B;\n"
"}"));

        horizontalLayout_2->addWidget(closeBtn);


        verticalLayout->addWidget(headerWidget);

        centerWidget = new QWidget(FFCapWindow);
        centerWidget->setObjectName("centerWidget");
        centerWidget->setMouseTracking(true);
        centerWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:#13141A;\n"
"}"));
        horizontalLayout = new QHBoxLayout(centerWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 10, 0, 10);
        horizontalSpacer_3 = new QSpacerItem(74, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(5);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(5, 5, 5, 5);
        GLRenderWidget = new FFGLRenderWidget(centerWidget);
        GLRenderWidget->setObjectName("GLRenderWidget");
        GLRenderWidget->setMouseTracking(true);

        verticalLayout_5->addWidget(GLRenderWidget);


        horizontalLayout->addLayout(verticalLayout_5);

        horizontalSpacer_4 = new QSpacerItem(74, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 8);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addWidget(centerWidget);

        confgWidget = new QWidget(FFCapWindow);
        confgWidget->setObjectName("confgWidget");
        confgWidget->setMouseTracking(true);
        confgWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:#333333;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(confgWidget);
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(5, 5, 5, 5);
        widget = new QWidget(confgWidget);
        widget->setObjectName("widget");
        widget->setMouseTracking(true);
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:#272A33;\n"
"	border:0px;\n"
"	border-radius:5px;\n"
"	\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(5);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(5, 5, 5, 5);
        modeLogoLabel = new QLabel(widget);
        modeLogoLabel->setObjectName("modeLogoLabel");
        sizePolicy1.setHeightForWidth(modeLogoLabel->sizePolicy().hasHeightForWidth());
        modeLogoLabel->setSizePolicy(sizePolicy1);
        modeLogoLabel->setMinimumSize(QSize(18, 18));
        modeLogoLabel->setMaximumSize(QSize(18, 18));
        modeLogoLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-image:url(:/image/mode.svg);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center;\n"
"	background-color:transparent;\n"
"	border:none;\n"
"}"));

        horizontalLayout_7->addWidget(modeLogoLabel);

        modeLabel = new QLabel(widget);
        modeLabel->setObjectName("modeLabel");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(modeLabel->sizePolicy().hasHeightForWidth());
        modeLabel->setSizePolicy(sizePolicy3);
        modeLabel->setMinimumSize(QSize(0, 20));
        modeLabel->setMaximumSize(QSize(16777215, 20));
        modeLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: none;\n"
"    font: bold 18px \"Microsoft YaHei UI\";\n"
"	color:#A0A0A0;\n"
"    background-color: transparent;\n"
"}    "));

        horizontalLayout_7->addWidget(modeLabel);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(5, 5, 5, 5);
        captureRadioButton = new QRadioButton(widget);
        captureRadioButton->setObjectName("captureRadioButton");
        captureRadioButton->setStyleSheet(QString::fromUtf8("/* QCheckBox \345\237\272\347\241\200\346\240\267\345\274\217 */\n"
"QRadioButton {\n"
"    border: 1px solid;\n"
"    font: bold 15px \"Microsoft YaHei UI\";\n"
"	border-radius:3px;\n"
"    color: #A0A0A0;\n"
"    background-color: transparent;\n"
"    padding: 4px;\n"
"    margin: 2px;\n"
"}\n"
"\n"
"/* \345\244\215\351\200\211\346\241\206\346\214\207\347\244\272\345\231\250\357\274\210\346\234\252\351\200\211\344\270\255\347\212\266\346\200\201\357\274\211 */\n"
"QRadioButton::indicator {\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    border: 2px solid #50AFFF;       /* \346\234\252\351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\350\223\235\350\211\262 */\n"
"    background-color: #50AFFF;       /* \346\234\252\351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"    border-radius: 2px;              /* \350\275\273\345\276\256\345\234\206\350\247\222 */\n"
"}\n"
"\n"
"/* \351\200\211\344\270\255\347\212\266\346\200\201 */\n"
"QRa"
                        "dioButton::indicator:checked {\n"
"    border: 2px solid #FFFFFF;       /* \351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\347\231\275\350\211\262 */\n"
"    background-color: #50AFFF;       /* \351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"/* \346\202\254\345\201\234\347\212\266\346\200\201\357\274\210\346\234\252\351\200\211\344\270\255\346\227\266\357\274\211 */\n"
"QRadioButton::indicator:hover {\n"
"    border: 2px solid #FFFFFF;       /* \351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\347\231\275\350\211\262 */\n"
"    background-color: #50AFFF;       /* \351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"\n"
"\n"
"/* \347\246\201\347\224\250\347\212\266\346\200\201 */\n"
"QRadioButton:disabled {\n"
"    color: #606060;\n"
"}\n"
"\n"
"QRadioButton:disabled::indicator {\n"
"    border-color: #444;              /* \347\246\201\347"
                        "\224\250\346\227\266\350\276\271\346\241\206\344\270\272\346\267\261\347\201\260 */\n"
"    background-color: #202020;       /* \347\246\201\347\224\250\346\227\266\350\203\214\346\231\257\344\270\272\346\267\261\347\201\260 */\n"
"}\n"
"\n"
"QRadioButton:disabled::indicator:checked {\n"
"    border-color: #606060;           /* \347\246\201\347\224\250\351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\344\270\255\347\201\260 */\n"
"    background-color: #303030;\n"
"}\n"
"\n"
"/* \346\226\207\345\255\227\346\202\254\345\201\234\347\212\266\346\200\201 */\n"
"QRadioButton:hover {\n"
"    color: #B0B0B0;\n"
"}\n"
"\n"
"QRadioButton:checked {\n"
"    color: #FFFFFF;                  /* \351\200\211\344\270\255\346\227\266\346\226\207\345\255\227\344\270\272\347\231\275\350\211\262 */\n"
"}"));
        captureRadioButton->setChecked(false);

        horizontalLayout_4->addWidget(captureRadioButton);

        liveRadioButton = new QRadioButton(widget);
        liveRadioButton->setObjectName("liveRadioButton");
        liveRadioButton->setStyleSheet(QString::fromUtf8("/* QCheckBox \345\237\272\347\241\200\346\240\267\345\274\217 */\n"
"QRadioButton {\n"
"    border: 1px solid;\n"
"    font: bold 15px \"Microsoft YaHei UI\";\n"
"	border-radius:3px;\n"
"    color: #A0A0A0;\n"
"    background-color: transparent;\n"
"    padding: 4px;\n"
"    margin: 2px;\n"
"}\n"
"\n"
"/* \345\244\215\351\200\211\346\241\206\346\214\207\347\244\272\345\231\250\357\274\210\346\234\252\351\200\211\344\270\255\347\212\266\346\200\201\357\274\211 */\n"
"QRadioButton::indicator {\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    border: 2px solid #50AFFF;       /* \346\234\252\351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\350\223\235\350\211\262 */\n"
"    background-color: #50AFFF;       /* \346\234\252\351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"    border-radius: 2px;              /* \350\275\273\345\276\256\345\234\206\350\247\222 */\n"
"}\n"
"\n"
"/* \351\200\211\344\270\255\347\212\266\346\200\201 */\n"
"QRa"
                        "dioButton::indicator:checked {\n"
"    border: 2px solid #FFFFFF;       /* \351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\347\231\275\350\211\262 */\n"
"    background-color: #50AFFF;       /* \351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"/* \346\202\254\345\201\234\347\212\266\346\200\201\357\274\210\346\234\252\351\200\211\344\270\255\346\227\266\357\274\211 */\n"
"QRadioButton::indicator:hover {\n"
"    border: 2px solid #FFFFFF;       /* \351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\347\231\275\350\211\262 */\n"
"    background-color: #50AFFF;       /* \351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"\n"
"\n"
"/* \347\246\201\347\224\250\347\212\266\346\200\201 */\n"
"QRadioButton:disabled {\n"
"    color: #606060;\n"
"}\n"
"\n"
"QRadioButton:disabled::indicator {\n"
"    border-color: #444;              /* \347\246\201\347"
                        "\224\250\346\227\266\350\276\271\346\241\206\344\270\272\346\267\261\347\201\260 */\n"
"    background-color: #202020;       /* \347\246\201\347\224\250\346\227\266\350\203\214\346\231\257\344\270\272\346\267\261\347\201\260 */\n"
"}\n"
"\n"
"QRadioButton:disabled::indicator:checked {\n"
"    border-color: #606060;           /* \347\246\201\347\224\250\351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\344\270\255\347\201\260 */\n"
"    background-color: #303030;\n"
"}\n"
"\n"
"/* \346\226\207\345\255\227\346\202\254\345\201\234\347\212\266\346\200\201 */\n"
"QRadioButton:hover {\n"
"    color: #B0B0B0;\n"
"}\n"
"\n"
"QRadioButton:checked {\n"
"    color: #FFFFFF;                  /* \351\200\211\344\270\255\346\227\266\346\226\207\345\255\227\344\270\272\347\231\275\350\211\262 */\n"
"}"));
        liveRadioButton->setChecked(true);

        horizontalLayout_4->addWidget(liveRadioButton);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(5, 5, 5, 5);
        captureLabel = new QLabel(widget);
        captureLabel->setObjectName("captureLabel");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(captureLabel->sizePolicy().hasHeightForWidth());
        captureLabel->setSizePolicy(sizePolicy4);
        captureLabel->setMinimumSize(QSize(100, 0));
        captureLabel->setMaximumSize(QSize(100, 16777215));
        captureLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: none;\n"
"    font: bold 15px \"Microsoft YaHei UI\";\n"
"	color:#A0A0A0;\n"
"    background-color: transparent;\n"
"}    "));

        horizontalLayout_5->addWidget(captureLabel);

        captureLineEdit = new QLineEdit(widget);
        captureLineEdit->setObjectName("captureLineEdit");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(captureLineEdit->sizePolicy().hasHeightForWidth());
        captureLineEdit->setSizePolicy(sizePolicy5);
        captureLineEdit->setMinimumSize(QSize(150, 30));
        captureLineEdit->setMaximumSize(QSize(500, 16777215));
        captureLineEdit->setStyleSheet(QString::fromUtf8("/* \345\237\272\347\241\200\346\240\267\345\274\217 */\n"
"QLineEdit {\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 3px;\n"
"    padding: 5px 8px;\n"
"    font: bold 15px \"Microsoft YaHei\"; /* \345\212\240\347\262\227\345\255\227\344\275\223 */\n"
"    color: white;\n"
"}\n"
"\n"
"/* \350\216\267\345\276\227\347\204\246\347\202\271\346\227\266\347\232\204\346\240\267\345\274\217 */\n"
"QLineEdit:focus {\n"
"    border-color: #4a86e8;\n"
"}\n"
"\n"
"/* \347\246\201\347\224\250\347\212\266\346\200\201 */\n"
"QLineEdit:disabled {\n"
"    background: #f5f5f5;\n"
"    color: #888;\n"
"}"));

        horizontalLayout_5->addWidget(captureLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(5, 5, 5, 5);
        liveLabel = new QLabel(widget);
        liveLabel->setObjectName("liveLabel");
        sizePolicy4.setHeightForWidth(liveLabel->sizePolicy().hasHeightForWidth());
        liveLabel->setSizePolicy(sizePolicy4);
        liveLabel->setMinimumSize(QSize(100, 0));
        liveLabel->setMaximumSize(QSize(100, 16777215));
        liveLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: none;\n"
"    font: bold 15px \"Microsoft YaHei UI\";\n"
"	color:#A0A0A0;\n"
"    background-color: transparent;\n"
"}    "));

        horizontalLayout_6->addWidget(liveLabel);

        liveLineEdit = new QLineEdit(widget);
        liveLineEdit->setObjectName("liveLineEdit");
        sizePolicy5.setHeightForWidth(liveLineEdit->sizePolicy().hasHeightForWidth());
        liveLineEdit->setSizePolicy(sizePolicy5);
        liveLineEdit->setMinimumSize(QSize(150, 30));
        liveLineEdit->setMaximumSize(QSize(500, 16777215));
        liveLineEdit->setStyleSheet(QString::fromUtf8("/* \345\237\272\347\241\200\346\240\267\345\274\217 */\n"
"QLineEdit {\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 3px;\n"
"    padding: 5px 8px;\n"
"    font: bold 15px \"Microsoft YaHei\"; /* \345\212\240\347\262\227\345\255\227\344\275\223 */\n"
"    color: white;\n"
"}\n"
"\n"
"/* \350\216\267\345\276\227\347\204\246\347\202\271\346\227\266\347\232\204\346\240\267\345\274\217 */\n"
"QLineEdit:focus {\n"
"    border-color: #4a86e8;\n"
"}\n"
"\n"
"/* \347\246\201\347\224\250\347\212\266\346\200\201 */\n"
"QLineEdit:disabled {\n"
"    background: #f5f5f5;\n"
"    color: #888;\n"
"}"));

        horizontalLayout_6->addWidget(liveLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_6);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 2);
        verticalLayout_2->setStretch(2, 2);
        verticalLayout_2->setStretch(3, 2);

        horizontalLayout_3->addWidget(widget);

        sourceWidget = new QWidget(confgWidget);
        sourceWidget->setObjectName("sourceWidget");
        sourceWidget->setMouseTracking(true);
        sourceWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:#272A33;\n"
"	border:0px;\n"
"	border-radius:5px;\n"
"	\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(sourceWidget);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(5);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(5, 5, 5, 5);
        sourceLogoLabel = new QLabel(sourceWidget);
        sourceLogoLabel->setObjectName("sourceLogoLabel");
        sizePolicy1.setHeightForWidth(sourceLogoLabel->sizePolicy().hasHeightForWidth());
        sourceLogoLabel->setSizePolicy(sizePolicy1);
        sourceLogoLabel->setMinimumSize(QSize(18, 18));
        sourceLogoLabel->setMaximumSize(QSize(18, 18));
        sourceLogoLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-image:url(:/image/inputSource.svg);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center;\n"
"	background-color:transparent;\n"
"	border:none;\n"
"}"));

        horizontalLayout_8->addWidget(sourceLogoLabel);

        sourceLabel = new QLabel(sourceWidget);
        sourceLabel->setObjectName("sourceLabel");
        sizePolicy3.setHeightForWidth(sourceLabel->sizePolicy().hasHeightForWidth());
        sourceLabel->setSizePolicy(sizePolicy3);
        sourceLabel->setMinimumSize(QSize(0, 20));
        sourceLabel->setMaximumSize(QSize(16777215, 20));
        sourceLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: none;\n"
"    font: bold 18px \"Microsoft YaHei UI\";\n"
"	color:#A0A0A0;\n"
"    background-color: transparent;\n"
"}    "));

        horizontalLayout_8->addWidget(sourceLabel);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(5);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(5, 5, 5, 5);
        screenCheckBox = new QCheckBox(sourceWidget);
        screenCheckBox->setObjectName("screenCheckBox");
        screenCheckBox->setStyleSheet(QString::fromUtf8("/* QCheckBox \345\237\272\347\241\200\346\240\267\345\274\217 */\n"
"QCheckBox {\n"
"    border: 1px solid;\n"
"    font: bold 15px \"Microsoft YaHei UI\";\n"
"	border-radius:3px;\n"
"    color: #A0A0A0;\n"
"    background-color: transparent;\n"
"    padding: 4px;\n"
"    margin: 2px;\n"
"}\n"
"\n"
"/* \345\244\215\351\200\211\346\241\206\346\214\207\347\244\272\345\231\250\357\274\210\346\234\252\351\200\211\344\270\255\347\212\266\346\200\201\357\274\211 */\n"
"QCheckBox::indicator {\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    border: 2px solid #50AFFF;       /* \346\234\252\351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\350\223\235\350\211\262 */\n"
"    background-color: #50AFFF;       /* \346\234\252\351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"    border-radius: 2px;              /* \350\275\273\345\276\256\345\234\206\350\247\222 */\n"
"}\n"
"\n"
"/* \351\200\211\344\270\255\347\212\266\346\200\201 */\n"
"QCheckBox"
                        "::indicator:checked {\n"
"    border: 2px solid #FFFFFF;       /* \351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\347\231\275\350\211\262 */\n"
"    background-color: #50AFFF;       /* \351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"/* \346\202\254\345\201\234\347\212\266\346\200\201\357\274\210\346\234\252\351\200\211\344\270\255\346\227\266\357\274\211 */\n"
"QCheckBox::indicator:hover {\n"
"    border: 2px solid #FFFFFF;       /* \351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\347\231\275\350\211\262 */\n"
"    background-color: #50AFFF;       /* \351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"\n"
"\n"
"/* \347\246\201\347\224\250\347\212\266\346\200\201 */\n"
"QCheckBox:disabled {\n"
"    color: #606060;\n"
"}\n"
"\n"
"QCheckBox:disabled::indicator {\n"
"    border-color: #444;              /* \347\246\201\347\224\250\346\227"
                        "\266\350\276\271\346\241\206\344\270\272\346\267\261\347\201\260 */\n"
"    background-color: #202020;       /* \347\246\201\347\224\250\346\227\266\350\203\214\346\231\257\344\270\272\346\267\261\347\201\260 */\n"
"}\n"
"\n"
"QCheckBox:disabled::indicator:checked {\n"
"    border-color: #606060;           /* \347\246\201\347\224\250\351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\344\270\255\347\201\260 */\n"
"    background-color: #303030;\n"
"}\n"
"\n"
"/* \346\226\207\345\255\227\346\202\254\345\201\234\347\212\266\346\200\201 */\n"
"QCheckBox:hover {\n"
"    color: #B0B0B0;\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"    color: #FFFFFF;                  /* \351\200\211\344\270\255\346\227\266\346\226\207\345\255\227\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        horizontalLayout_9->addWidget(screenCheckBox);

        videoCheckBox = new QCheckBox(sourceWidget);
        videoCheckBox->setObjectName("videoCheckBox");
        videoCheckBox->setStyleSheet(QString::fromUtf8("/* QCheckBox \345\237\272\347\241\200\346\240\267\345\274\217 */\n"
"QCheckBox {\n"
"    border: 1px solid;\n"
"    font: bold 15px \"Microsoft YaHei UI\";\n"
"	border-radius:3px;\n"
"    color: #A0A0A0;\n"
"    background-color: transparent;\n"
"    padding: 4px;\n"
"    margin: 2px;\n"
"}\n"
"\n"
"/* \345\244\215\351\200\211\346\241\206\346\214\207\347\244\272\345\231\250\357\274\210\346\234\252\351\200\211\344\270\255\347\212\266\346\200\201\357\274\211 */\n"
"QCheckBox::indicator {\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    border: 2px solid #50AFFF;       /* \346\234\252\351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\350\223\235\350\211\262 */\n"
"    background-color: #50AFFF;       /* \346\234\252\351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"    border-radius: 2px;              /* \350\275\273\345\276\256\345\234\206\350\247\222 */\n"
"}\n"
"\n"
"/* \351\200\211\344\270\255\347\212\266\346\200\201 */\n"
"QCheckBox"
                        "::indicator:checked {\n"
"    border: 2px solid #FFFFFF;       /* \351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\347\231\275\350\211\262 */\n"
"    background-color: #50AFFF;       /* \351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"/* \346\202\254\345\201\234\347\212\266\346\200\201\357\274\210\346\234\252\351\200\211\344\270\255\346\227\266\357\274\211 */\n"
"QCheckBox::indicator:hover {\n"
"    border: 2px solid #FFFFFF;       /* \351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\347\231\275\350\211\262 */\n"
"    background-color: #50AFFF;       /* \351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"\n"
"\n"
"/* \347\246\201\347\224\250\347\212\266\346\200\201 */\n"
"QCheckBox:disabled {\n"
"    color: #606060;\n"
"}\n"
"\n"
"QCheckBox:disabled::indicator {\n"
"    border-color: #444;              /* \347\246\201\347\224\250\346\227"
                        "\266\350\276\271\346\241\206\344\270\272\346\267\261\347\201\260 */\n"
"    background-color: #202020;       /* \347\246\201\347\224\250\346\227\266\350\203\214\346\231\257\344\270\272\346\267\261\347\201\260 */\n"
"}\n"
"\n"
"QCheckBox:disabled::indicator:checked {\n"
"    border-color: #606060;           /* \347\246\201\347\224\250\351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\344\270\255\347\201\260 */\n"
"    background-color: #303030;\n"
"}\n"
"\n"
"/* \346\226\207\345\255\227\346\202\254\345\201\234\347\212\266\346\200\201 */\n"
"QCheckBox:hover {\n"
"    color: #B0B0B0;\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"    color: #FFFFFF;                  /* \351\200\211\344\270\255\346\227\266\346\226\207\345\255\227\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        horizontalLayout_9->addWidget(videoCheckBox);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(5);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(5, 5, 5, 5);
        cameraCheckBox = new QCheckBox(sourceWidget);
        cameraCheckBox->setObjectName("cameraCheckBox");
        cameraCheckBox->setStyleSheet(QString::fromUtf8("/* QCheckBox \345\237\272\347\241\200\346\240\267\345\274\217 */\n"
"QCheckBox {\n"
"    border: 1px solid;\n"
"    font: bold 15px \"Microsoft YaHei UI\";\n"
"	border-radius:3px;\n"
"    color: #A0A0A0;\n"
"    background-color: transparent;\n"
"    padding: 4px;\n"
"    margin: 2px;\n"
"}\n"
"\n"
"/* \345\244\215\351\200\211\346\241\206\346\214\207\347\244\272\345\231\250\357\274\210\346\234\252\351\200\211\344\270\255\347\212\266\346\200\201\357\274\211 */\n"
"QCheckBox::indicator {\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    border: 2px solid #50AFFF;       /* \346\234\252\351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\350\223\235\350\211\262 */\n"
"    background-color: #50AFFF;       /* \346\234\252\351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"    border-radius: 2px;              /* \350\275\273\345\276\256\345\234\206\350\247\222 */\n"
"}\n"
"\n"
"/* \351\200\211\344\270\255\347\212\266\346\200\201 */\n"
"QCheckBox"
                        "::indicator:checked {\n"
"    border: 2px solid #FFFFFF;       /* \351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\347\231\275\350\211\262 */\n"
"    background-color: #50AFFF;       /* \351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"/* \346\202\254\345\201\234\347\212\266\346\200\201\357\274\210\346\234\252\351\200\211\344\270\255\346\227\266\357\274\211 */\n"
"QCheckBox::indicator:hover {\n"
"    border: 2px solid #FFFFFF;       /* \351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\347\231\275\350\211\262 */\n"
"    background-color: #50AFFF;       /* \351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"\n"
"\n"
"/* \347\246\201\347\224\250\347\212\266\346\200\201 */\n"
"QCheckBox:disabled {\n"
"    color: #606060;\n"
"}\n"
"\n"
"QCheckBox:disabled::indicator {\n"
"    border-color: #444;              /* \347\246\201\347\224\250\346\227"
                        "\266\350\276\271\346\241\206\344\270\272\346\267\261\347\201\260 */\n"
"    background-color: #202020;       /* \347\246\201\347\224\250\346\227\266\350\203\214\346\231\257\344\270\272\346\267\261\347\201\260 */\n"
"}\n"
"\n"
"QCheckBox:disabled::indicator:checked {\n"
"    border-color: #606060;           /* \347\246\201\347\224\250\351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\344\270\255\347\201\260 */\n"
"    background-color: #303030;\n"
"}\n"
"\n"
"/* \346\226\207\345\255\227\346\202\254\345\201\234\347\212\266\346\200\201 */\n"
"QCheckBox:hover {\n"
"    color: #B0B0B0;\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"    color: #FFFFFF;                  /* \351\200\211\344\270\255\346\227\266\346\226\207\345\255\227\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        horizontalLayout_10->addWidget(cameraCheckBox);

        cameraComboBox = new QComboBox(sourceWidget);
        cameraComboBox->addItem(QString());
        cameraComboBox->addItem(QString());
        cameraComboBox->addItem(QString());
        cameraComboBox->setObjectName("cameraComboBox");
        cameraComboBox->setEnabled(true);
        cameraComboBox->setMinimumSize(QSize(0, 30));
        cameraComboBox->setMaximumSize(QSize(16777215, 16777215));
        cameraComboBox->setMouseTracking(true);
        cameraComboBox->setStyleSheet(QString::fromUtf8("/* \345\237\272\347\241\200\346\240\267\345\274\217 */\n"
"QComboBox {\n"
"    border: 1px solid #666;\n"
"    border-radius: 4px;\n"
"    padding: 0px 0px;\n"
"    padding-right: 25px;\n"
"    font: bold 15px \"Microsoft YaHei UI\";\n"
"    color: #fff;\n"
"    background-color: #707070;\n"
"    selection-background-color: #409EFF;\n"
"    selection-color: white;\n"
"}\n"
"\n"
"/* \344\270\213\346\213\211\346\214\211\351\222\256 */\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"    border-left-width: 1px;\n"
"    border-left-color: #666;\n"
"    border-left-style: solid;\n"
"    border-top-right-radius: 3px;\n"
"    border-bottom-right-radius: 3px;\n"
"    background-color: #686868;\n"
"}\n"
"\n"
"/* \344\270\213\346\213\211\347\256\255\345\244\264 */\n"
"QComboBox::down-arrow {\n"
"    image: url(\":/image/comboArrow\");\n"
"    width: 10px;\n"
"    height: 6px;\n"
"}\n"
"\n"
"/* \344\270\213\346\213\211\345\210\227\350\241\250\350"
                        "\247\206\345\233\276 */\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid #666;\n"
"    border-radius: 4px;\n"
"    background-color: #707070;\n"
"    selection-background-color: #409EFF;\n"
"    selection-color: white;\n"
"    padding: 4px;\n"
"    outline: none;\n"
"}\n"
"\n"
"/* \346\202\254\345\201\234\347\212\266\346\200\201 */\n"
"QComboBox:hover {\n"
"    color: #fff;\n"
"    border-color: #999;\n"
"}\n"
"\n"
"QComboBox:hover::drop-down {\n"
"    background-color: #606060;\n"
"}\n"
"\n"
"/* \344\270\213\346\213\211\347\212\266\346\200\201 */\n"
"QComboBox:on {\n"
"    border-color: #409EFF;\n"
"    color: #fff;\n"
"}\n"
"\n"
"QComboBox:on::drop-down {\n"
"    border-left-color: #409EFF;\n"
"    background-color: #606060;\n"
"}\n"
"\n"
"\n"
"/* \347\246\201\347\224\250\347\212\266\346\200\201 */\n"
"QComboBox:disabled {\n"
"    color: #ccc;\n"
"    background-color: #888;\n"
"    border-color: #777;\n"
"}\n"
"\n"
"QComboBox:disabled::drop-down {\n"
"    border-left-color: #777;\n"
"    backgrou"
                        "nd-color: #808080;\n"
"}\n"
"\n"
"/* \346\273\232\345\212\250\346\235\241\346\240\267\345\274\217 */\n"
"QComboBox QScrollBar:vertical {\n"
"    border: none;\n"
"    background: #606060;\n"
"    width: 8px;\n"
"    margin: 0;\n"
"}\n"
"\n"
"QComboBox QScrollBar::handle:vertical {\n"
"    background: #999;\n"
"    min-height: 20px;\n"
"    border-radius: 4px;\n"
"}\n"
"  "));

        horizontalLayout_10->addWidget(cameraComboBox);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(5);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(5, 5, 5, 5);
        microphoneCheckBox = new QCheckBox(sourceWidget);
        microphoneCheckBox->setObjectName("microphoneCheckBox");
        microphoneCheckBox->setMinimumSize(QSize(0, 30));
        microphoneCheckBox->setStyleSheet(QString::fromUtf8("/* QCheckBox \345\237\272\347\241\200\346\240\267\345\274\217 */\n"
"QCheckBox {\n"
"    border: 1px solid;\n"
"    font: bold 15px \"Microsoft YaHei UI\";\n"
"	border-radius:3px;\n"
"    color: #A0A0A0;\n"
"    background-color: transparent;\n"
"    padding: 4px;\n"
"    margin: 2px;\n"
"}\n"
"\n"
"/* \345\244\215\351\200\211\346\241\206\346\214\207\347\244\272\345\231\250\357\274\210\346\234\252\351\200\211\344\270\255\347\212\266\346\200\201\357\274\211 */\n"
"QCheckBox::indicator {\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    border: 2px solid #50AFFF;       /* \346\234\252\351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\350\223\235\350\211\262 */\n"
"    background-color: #50AFFF;       /* \346\234\252\351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"    border-radius: 2px;              /* \350\275\273\345\276\256\345\234\206\350\247\222 */\n"
"}\n"
"\n"
"/* \351\200\211\344\270\255\347\212\266\346\200\201 */\n"
"QCheckBox"
                        "::indicator:checked {\n"
"    border: 2px solid #FFFFFF;       /* \351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\347\231\275\350\211\262 */\n"
"    background-color: #50AFFF;       /* \351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"/* \346\202\254\345\201\234\347\212\266\346\200\201\357\274\210\346\234\252\351\200\211\344\270\255\346\227\266\357\274\211 */\n"
"QCheckBox::indicator:hover {\n"
"    border: 2px solid #FFFFFF;       /* \351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\347\231\275\350\211\262 */\n"
"    background-color: #50AFFF;       /* \351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"\n"
"\n"
"/* \347\246\201\347\224\250\347\212\266\346\200\201 */\n"
"QCheckBox:disabled {\n"
"    color: #606060;\n"
"}\n"
"\n"
"QCheckBox:disabled::indicator {\n"
"    border-color: #444;              /* \347\246\201\347\224\250\346\227"
                        "\266\350\276\271\346\241\206\344\270\272\346\267\261\347\201\260 */\n"
"    background-color: #202020;       /* \347\246\201\347\224\250\346\227\266\350\203\214\346\231\257\344\270\272\346\267\261\347\201\260 */\n"
"}\n"
"\n"
"QCheckBox:disabled::indicator:checked {\n"
"    border-color: #606060;           /* \347\246\201\347\224\250\351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\344\270\255\347\201\260 */\n"
"    background-color: #303030;\n"
"}\n"
"\n"
"/* \346\226\207\345\255\227\346\202\254\345\201\234\347\212\266\346\200\201 */\n"
"QCheckBox:hover {\n"
"    color: #B0B0B0;\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"    color: #FFFFFF;                  /* \351\200\211\344\270\255\346\227\266\346\226\207\345\255\227\344\270\272\347\231\275\350\211\262 */\n"
"}"));
        microphoneCheckBox->setChecked(false);

        horizontalLayout_11->addWidget(microphoneCheckBox);

        audioCheckBox = new QCheckBox(sourceWidget);
        audioCheckBox->setObjectName("audioCheckBox");
        audioCheckBox->setMinimumSize(QSize(0, 30));
        audioCheckBox->setStyleSheet(QString::fromUtf8("/* QCheckBox \345\237\272\347\241\200\346\240\267\345\274\217 */\n"
"QCheckBox {\n"
"    border: 1px solid;\n"
"    font: bold 15px \"Microsoft YaHei UI\";\n"
"	border-radius:3px;\n"
"    color: #A0A0A0;\n"
"    background-color: transparent;\n"
"    padding: 4px;\n"
"    margin: 2px;\n"
"}\n"
"\n"
"/* \345\244\215\351\200\211\346\241\206\346\214\207\347\244\272\345\231\250\357\274\210\346\234\252\351\200\211\344\270\255\347\212\266\346\200\201\357\274\211 */\n"
"QCheckBox::indicator {\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    border: 2px solid #50AFFF;       /* \346\234\252\351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\350\223\235\350\211\262 */\n"
"    background-color: #50AFFF;       /* \346\234\252\351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"    border-radius: 2px;              /* \350\275\273\345\276\256\345\234\206\350\247\222 */\n"
"}\n"
"\n"
"/* \351\200\211\344\270\255\347\212\266\346\200\201 */\n"
"QCheckBox"
                        "::indicator:checked {\n"
"    border: 2px solid #FFFFFF;       /* \351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\347\231\275\350\211\262 */\n"
"    background-color: #50AFFF;       /* \351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"/* \346\202\254\345\201\234\347\212\266\346\200\201\357\274\210\346\234\252\351\200\211\344\270\255\346\227\266\357\274\211 */\n"
"QCheckBox::indicator:hover {\n"
"    border: 2px solid #FFFFFF;       /* \351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\347\231\275\350\211\262 */\n"
"    background-color: #50AFFF;       /* \351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"\n"
"\n"
"/* \347\246\201\347\224\250\347\212\266\346\200\201 */\n"
"QCheckBox:disabled {\n"
"    color: #606060;\n"
"}\n"
"\n"
"QCheckBox:disabled::indicator {\n"
"    border-color: #444;              /* \347\246\201\347\224\250\346\227"
                        "\266\350\276\271\346\241\206\344\270\272\346\267\261\347\201\260 */\n"
"    background-color: #202020;       /* \347\246\201\347\224\250\346\227\266\350\203\214\346\231\257\344\270\272\346\267\261\347\201\260 */\n"
"}\n"
"\n"
"QCheckBox:disabled::indicator:checked {\n"
"    border-color: #606060;           /* \347\246\201\347\224\250\351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\344\270\255\347\201\260 */\n"
"    background-color: #303030;\n"
"}\n"
"\n"
"/* \346\226\207\345\255\227\346\202\254\345\201\234\347\212\266\346\200\201 */\n"
"QCheckBox:hover {\n"
"    color: #B0B0B0;\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"    color: #FFFFFF;                  /* \351\200\211\344\270\255\346\227\266\346\226\207\345\255\227\344\270\272\347\231\275\350\211\262 */\n"
"}"));
        audioCheckBox->setChecked(false);

        horizontalLayout_11->addWidget(audioCheckBox);


        verticalLayout_3->addLayout(horizontalLayout_11);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 2);
        verticalLayout_3->setStretch(2, 2);
        verticalLayout_3->setStretch(3, 2);

        horizontalLayout_3->addWidget(sourceWidget);

        widget_3 = new QWidget(confgWidget);
        widget_3->setObjectName("widget_3");
        widget_3->setMouseTracking(true);
        widget_3->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:#272A33;\n"
"	border:0px;\n"
"	border-radius:5px;\n"
"	\n"
"}"));
        verticalLayout_4 = new QVBoxLayout(widget_3);
        verticalLayout_4->setSpacing(5);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(5);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(5, 5, 5, 5);
        captureConfigLogoLabel = new QLabel(widget_3);
        captureConfigLogoLabel->setObjectName("captureConfigLogoLabel");
        sizePolicy1.setHeightForWidth(captureConfigLogoLabel->sizePolicy().hasHeightForWidth());
        captureConfigLogoLabel->setSizePolicy(sizePolicy1);
        captureConfigLogoLabel->setMinimumSize(QSize(18, 18));
        captureConfigLogoLabel->setMaximumSize(QSize(18, 18));
        captureConfigLogoLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-image:url(:/image/configuration.svg);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center;\n"
"	background-color:transparent;\n"
"	border:none;\n"
"}"));

        horizontalLayout_12->addWidget(captureConfigLogoLabel);

        captureConfigLabel = new QLabel(widget_3);
        captureConfigLabel->setObjectName("captureConfigLabel");
        sizePolicy3.setHeightForWidth(captureConfigLabel->sizePolicy().hasHeightForWidth());
        captureConfigLabel->setSizePolicy(sizePolicy3);
        captureConfigLabel->setMinimumSize(QSize(0, 20));
        captureConfigLabel->setMaximumSize(QSize(16777215, 20));
        captureConfigLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: none;\n"
"    font: bold 18px \"Microsoft YaHei UI\";\n"
"	color:#A0A0A0;\n"
"    background-color: transparent;\n"
"}    "));

        horizontalLayout_12->addWidget(captureConfigLabel);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(5);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(5, 5, 5, 5);
        microphoneVolumeLabel = new QLabel(widget_3);
        microphoneVolumeLabel->setObjectName("microphoneVolumeLabel");
        microphoneVolumeLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: none;\n"
"    font: bold 14px \"Microsoft YaHei UI\";\n"
"	color:#A0A0A0;\n"
"    background-color: transparent;\n"
"}    "));

        horizontalLayout_15->addWidget(microphoneVolumeLabel);

        microphoneVlomeSlider = new QSlider(widget_3);
        microphoneVlomeSlider->setObjectName("microphoneVlomeSlider");
        microphoneVlomeSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    background: #E0E0E0; /* \350\275\250\351\201\223\350\203\214\346\231\257\346\224\271\344\270\272\346\265\205\347\201\260\350\211\262 */\n"
"    height: 4px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: #50AFFF; /* \345\267\262\345\210\222\350\277\207\345\214\272\345\237\237\344\270\272\350\223\235\350\211\262 */\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: rgb(207, 207, 207);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 14px;\n"
"    border-radius: 7px; /* \344\277\256\346\255\243\344\270\272\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212\357\274\214\347\241\256\344\277\235\345\234\206\345\275\242 */\n"
"    margin: -5px 0;    /* \350\260\203\346\225\264\345\236\202\347\233\264\345\261\205\344\270\255 */\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    border: 2px solid #5c5c5c;\n"
"    width: 12px;\n"
"    margin: -4px 0;\n"
"    border-radius: 6px; /*"
                        " \344\277\235\346\214\201\345\234\206\345\275\242 */\n"
"}"));
        microphoneVlomeSlider->setMaximum(200);
        microphoneVlomeSlider->setValue(99);
        microphoneVlomeSlider->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_15->addWidget(microphoneVlomeSlider);

        audioVolumeLabel = new QLabel(widget_3);
        audioVolumeLabel->setObjectName("audioVolumeLabel");
        audioVolumeLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: none;\n"
"    font: bold 14px \"Microsoft YaHei UI\";\n"
"	color:#A0A0A0;\n"
"    background-color: transparent;\n"
"}    "));

        horizontalLayout_15->addWidget(audioVolumeLabel);

        audioVolumeSlider = new QSlider(widget_3);
        audioVolumeSlider->setObjectName("audioVolumeSlider");
        audioVolumeSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    background: #E0E0E0; /* \350\275\250\351\201\223\350\203\214\346\231\257\346\224\271\344\270\272\346\265\205\347\201\260\350\211\262 */\n"
"    height: 4px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: #50AFFF; /* \345\267\262\345\210\222\350\277\207\345\214\272\345\237\237\344\270\272\350\223\235\350\211\262 */\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: rgb(207, 207, 207);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 14px;\n"
"    border-radius: 7px; /* \344\277\256\346\255\243\344\270\272\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212\357\274\214\347\241\256\344\277\235\345\234\206\345\275\242 */\n"
"    margin: -5px 0;    /* \350\260\203\346\225\264\345\236\202\347\233\264\345\261\205\344\270\255 */\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    border: 2px solid #5c5c5c;\n"
"    width: 12px;\n"
"    margin: -4px 0;\n"
"    border-radius: 6px; /*"
                        " \344\277\235\346\214\201\345\234\206\345\275\242 */\n"
"}"));
        audioVolumeSlider->setMaximum(200);
        audioVolumeSlider->setValue(99);
        audioVolumeSlider->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_15->addWidget(audioVolumeSlider);

        horizontalLayout_15->setStretch(0, 1);
        horizontalLayout_15->setStretch(1, 3);
        horizontalLayout_15->setStretch(2, 1);
        horizontalLayout_15->setStretch(3, 3);

        verticalLayout_4->addLayout(horizontalLayout_15);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(5);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(5, 5, 5, 5);
        beautyCheckBox = new QCheckBox(widget_3);
        beautyCheckBox->setObjectName("beautyCheckBox");
        beautyCheckBox->setStyleSheet(QString::fromUtf8("/* QCheckBox \345\237\272\347\241\200\346\240\267\345\274\217 */\n"
"QCheckBox {\n"
"    border: 1px solid;\n"
"    font: bold 15px \"Microsoft YaHei UI\";\n"
"	border-radius:3px;\n"
"    color: #A0A0A0;\n"
"    background-color: transparent;\n"
"    padding: 4px;\n"
"    margin: 2px;\n"
"}\n"
"\n"
"/* \345\244\215\351\200\211\346\241\206\346\214\207\347\244\272\345\231\250\357\274\210\346\234\252\351\200\211\344\270\255\347\212\266\346\200\201\357\274\211 */\n"
"QCheckBox::indicator {\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    border: 2px solid #50AFFF;       /* \346\234\252\351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\350\223\235\350\211\262 */\n"
"    background-color: #50AFFF;       /* \346\234\252\351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"    border-radius: 2px;              /* \350\275\273\345\276\256\345\234\206\350\247\222 */\n"
"}\n"
"\n"
"/* \351\200\211\344\270\255\347\212\266\346\200\201 */\n"
"QCheckBox"
                        "::indicator:checked {\n"
"    border: 2px solid #FFFFFF;       /* \351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\347\231\275\350\211\262 */\n"
"    background-color: #50AFFF;       /* \351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"/* \346\202\254\345\201\234\347\212\266\346\200\201\357\274\210\346\234\252\351\200\211\344\270\255\346\227\266\357\274\211 */\n"
"QCheckBox::indicator:hover {\n"
"    border: 2px solid #FFFFFF;       /* \351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\347\231\275\350\211\262 */\n"
"    background-color: #50AFFF;       /* \351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\344\270\272\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"\n"
"\n"
"/* \347\246\201\347\224\250\347\212\266\346\200\201 */\n"
"QCheckBox:disabled {\n"
"    color: #606060;\n"
"}\n"
"\n"
"QCheckBox:disabled::indicator {\n"
"    border-color: #444;              /* \347\246\201\347\224\250\346\227"
                        "\266\350\276\271\346\241\206\344\270\272\346\267\261\347\201\260 */\n"
"    background-color: #202020;       /* \347\246\201\347\224\250\346\227\266\350\203\214\346\231\257\344\270\272\346\267\261\347\201\260 */\n"
"}\n"
"\n"
"QCheckBox:disabled::indicator:checked {\n"
"    border-color: #606060;           /* \347\246\201\347\224\250\351\200\211\344\270\255\346\227\266\350\276\271\346\241\206\344\270\272\344\270\255\347\201\260 */\n"
"    background-color: #303030;\n"
"}\n"
"\n"
"/* \346\226\207\345\255\227\346\202\254\345\201\234\347\212\266\346\200\201 */\n"
"QCheckBox:hover {\n"
"    color: #B0B0B0;\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"    color: #FFFFFF;                  /* \351\200\211\344\270\255\346\227\266\346\226\207\345\255\227\344\270\272\347\231\275\350\211\262 */\n"
"}"));

        horizontalLayout_13->addWidget(beautyCheckBox);

        smoothLabel = new QLabel(widget_3);
        smoothLabel->setObjectName("smoothLabel");
        smoothLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: none;\n"
"    font: bold 14px \"Microsoft YaHei UI\";\n"
"	color:#A0A0A0;\n"
"    background-color: transparent;\n"
"}    "));

        horizontalLayout_13->addWidget(smoothLabel);

        smoothSlider = new QSlider(widget_3);
        smoothSlider->setObjectName("smoothSlider");
        smoothSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    background: #E0E0E0; /* \350\275\250\351\201\223\350\203\214\346\231\257\346\224\271\344\270\272\346\265\205\347\201\260\350\211\262 */\n"
"    height: 4px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: #50AFFF; /* \345\267\262\345\210\222\350\277\207\345\214\272\345\237\237\344\270\272\350\223\235\350\211\262 */\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: rgb(207, 207, 207);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 14px;\n"
"    border-radius: 7px; /* \344\277\256\346\255\243\344\270\272\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212\357\274\214\347\241\256\344\277\235\345\234\206\345\275\242 */\n"
"    margin: -5px 0;    /* \350\260\203\346\225\264\345\236\202\347\233\264\345\261\205\344\270\255 */\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    border: 2px solid #5c5c5c;\n"
"    width: 12px;\n"
"    margin: -4px 0;\n"
"    border-radius: 6px; /*"
                        " \344\277\235\346\214\201\345\234\206\345\275\242 */\n"
"}"));
        smoothSlider->setMaximum(5);
        smoothSlider->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_13->addWidget(smoothSlider);

        whiteLabel = new QLabel(widget_3);
        whiteLabel->setObjectName("whiteLabel");
        whiteLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: none;\n"
"    font: bold 14px \"Microsoft YaHei UI\";\n"
"	color:#A0A0A0;\n"
"    background-color: transparent;\n"
"}    "));

        horizontalLayout_13->addWidget(whiteLabel);

        whiteSlider = new QSlider(widget_3);
        whiteSlider->setObjectName("whiteSlider");
        whiteSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    background: #E0E0E0; /* \350\275\250\351\201\223\350\203\214\346\231\257\346\224\271\344\270\272\346\265\205\347\201\260\350\211\262 */\n"
"    height: 4px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: #50AFFF; /* \345\267\262\345\210\222\350\277\207\345\214\272\345\237\237\344\270\272\350\223\235\350\211\262 */\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: rgb(207, 207, 207);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 14px;\n"
"    border-radius: 7px; /* \344\277\256\346\255\243\344\270\272\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212\357\274\214\347\241\256\344\277\235\345\234\206\345\275\242 */\n"
"    margin: -5px 0;    /* \350\260\203\346\225\264\345\236\202\347\233\264\345\261\205\344\270\255 */\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    border: 2px solid #5c5c5c;\n"
"    width: 12px;\n"
"    margin: -4px 0;\n"
"    border-radius: 6px; /*"
                        " \344\277\235\346\214\201\345\234\206\345\275\242 */\n"
"}"));
        whiteSlider->setMaximum(5);
        whiteSlider->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_13->addWidget(whiteSlider);


        verticalLayout_4->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(5);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setContentsMargins(5, 5, 5, 5);
        startBtn = new QPushButton(widget_3);
        startBtn->setObjectName("startBtn");
        sizePolicy1.setHeightForWidth(startBtn->sizePolicy().hasHeightForWidth());
        startBtn->setSizePolicy(sizePolicy1);
        startBtn->setMinimumSize(QSize(50, 50));
        startBtn->setMaximumSize(QSize(50, 50));
        startBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        startBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image:url(:/image/pause.svg);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center;\n"
"	background-color:transparent;\n"
"	border:none;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#2B2B2B;\n"
"}"));

        horizontalLayout_14->addWidget(startBtn);

        stopBtn = new QPushButton(widget_3);
        stopBtn->setObjectName("stopBtn");
        sizePolicy1.setHeightForWidth(stopBtn->sizePolicy().hasHeightForWidth());
        stopBtn->setSizePolicy(sizePolicy1);
        stopBtn->setMinimumSize(QSize(50, 50));
        stopBtn->setMaximumSize(QSize(50, 50));
        stopBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        stopBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image:url(:/image/stop.svg);\n"
"	background-repeat:no-repeat;\n"
"	background-position:center;\n"
"	background-color:transparent;\n"
"	border:none;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#2B2B2B;\n"
"}"));

        horizontalLayout_14->addWidget(stopBtn);

        captureProcessLabel = new QLabel(widget_3);
        captureProcessLabel->setObjectName("captureProcessLabel");
        captureProcessLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: none;\n"
"    font: bold 18px \"Microsoft YaHei UI\";\n"
"	color:#A0A0A0;\n"
"    background-color: transparent;\n"
"}    "));
        captureProcessLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_14->addWidget(captureProcessLabel);

        captureProcessTimeLabel = new QLabel(widget_3);
        captureProcessTimeLabel->setObjectName("captureProcessTimeLabel");
        captureProcessTimeLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: none;\n"
"    font: bold 18px \"Microsoft YaHei UI\";\n"
"	color:#A0A0A0;\n"
"    background-color: transparent;\n"
"}    "));

        horizontalLayout_14->addWidget(captureProcessTimeLabel);


        verticalLayout_4->addLayout(horizontalLayout_14);


        horizontalLayout_3->addWidget(widget_3);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout->addWidget(confgWidget);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 8);
        verticalLayout->setStretch(2, 2);

        retranslateUi(FFCapWindow);

        QMetaObject::connectSlotsByName(FFCapWindow);
    } // setupUi

    void retranslateUi(QWidget *FFCapWindow)
    {
        FFCapWindow->setWindowTitle(QCoreApplication::translate("FFCapWindow", "Form", nullptr));
        iconLabel->setText(QString());
        titleLabel->setText(QCoreApplication::translate("FFCapWindow", "\345\275\225\345\261\217\346\216\250\346\265\201\345\271\263\345\217\260", nullptr));
        minimizeBtn->setText(QString());
        maximizeBtn->setText(QString());
        closeBtn->setText(QString());
        modeLogoLabel->setText(QString());
        modeLabel->setText(QCoreApplication::translate("FFCapWindow", "\346\250\241\345\274\217\351\200\211\346\213\251", nullptr));
        captureRadioButton->setText(QCoreApplication::translate("FFCapWindow", "\345\275\225\345\210\266", nullptr));
        liveRadioButton->setText(QCoreApplication::translate("FFCapWindow", "\347\233\264\346\222\255", nullptr));
        captureLabel->setText(QCoreApplication::translate("FFCapWindow", "\345\275\225\345\210\266\350\267\257\345\276\204:", nullptr));
        captureLineEdit->setText(QCoreApplication::translate("FFCapWindow", "capture.mp4", nullptr));
        liveLabel->setText(QCoreApplication::translate("FFCapWindow", "\347\233\264\346\222\255\350\267\257\345\276\204\357\274\232", nullptr));
        liveLineEdit->setText(QCoreApplication::translate("FFCapWindow", "rtmp://192.168.149.132/live/livestream", nullptr));
        sourceLogoLabel->setText(QString());
        sourceLabel->setText(QCoreApplication::translate("FFCapWindow", "\350\276\223\345\205\245\346\272\220", nullptr));
        screenCheckBox->setText(QCoreApplication::translate("FFCapWindow", "\346\230\276\347\244\272\345\231\250\351\207\207\351\233\206", nullptr));
        videoCheckBox->setText(QCoreApplication::translate("FFCapWindow", "\350\247\206\351\242\221\346\226\207\344\273\266", nullptr));
        cameraCheckBox->setText(QCoreApplication::translate("FFCapWindow", "\346\221\204\345\203\217\345\244\264", nullptr));
        cameraComboBox->setItemText(0, QCoreApplication::translate("FFCapWindow", "\350\257\267\351\200\211\346\213\251\346\221\204\345\203\217\345\244\264", nullptr));
        cameraComboBox->setItemText(1, QCoreApplication::translate("FFCapWindow", "\345\265\214\345\205\245\346\221\204\345\203\217\345\244\264", nullptr));
        cameraComboBox->setItemText(2, QCoreApplication::translate("FFCapWindow", "USB\346\221\204\345\203\217\345\244\264", nullptr));

        microphoneCheckBox->setText(QCoreApplication::translate("FFCapWindow", "\351\272\246\345\205\213\351\243\216", nullptr));
        audioCheckBox->setText(QCoreApplication::translate("FFCapWindow", "\346\241\214\351\235\242\351\237\263\351\242\221", nullptr));
        captureConfigLogoLabel->setText(QString());
        captureConfigLabel->setText(QCoreApplication::translate("FFCapWindow", "\345\275\225\345\210\266\350\256\276\347\275\256", nullptr));
        microphoneVolumeLabel->setText(QCoreApplication::translate("FFCapWindow", "\351\272\246\345\205\213\351\243\216", nullptr));
        audioVolumeLabel->setText(QCoreApplication::translate("FFCapWindow", "\346\241\214\351\235\242\351\237\263\351\242\221", nullptr));
        beautyCheckBox->setText(QCoreApplication::translate("FFCapWindow", "\347\276\216\351\242\234", nullptr));
        smoothLabel->setText(QCoreApplication::translate("FFCapWindow", "\347\243\250\347\232\256", nullptr));
        whiteLabel->setText(QCoreApplication::translate("FFCapWindow", "\347\276\216\347\231\275", nullptr));
        startBtn->setText(QString());
        stopBtn->setText(QString());
        captureProcessLabel->setText(QCoreApplication::translate("FFCapWindow", "\347\264\257\350\256\241\346\227\266\351\225\277\357\274\232", nullptr));
        captureProcessTimeLabel->setText(QCoreApplication::translate("FFCapWindow", "00:00:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FFCapWindow: public Ui_FFCapWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FFCAPWINDOW_H
