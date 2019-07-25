/********************************************************************************
** Form generated from reading UI file 'QRPAController.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QRPACONTROLLER_H
#define UI_QRPACONTROLLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QRPAControllerClass
{
public:
    QSlider *Rise;
    QLabel *label;
    QWidget *JoystickWidget;
    QLabel *label_2;
    QPushButton *Joystick;
    QWidget *widget;
    QLabel *label_4;
    QLabel *MASPeed;
    QLabel *MBSPeed;
    QLabel *MCSPeed;
    QLabel *MDSPeed;
    QLabel *SelfState;
    QProgressBar *Power;
    QPushButton *CloseBtn;
    QPushButton *Connection;

    void setupUi(QWidget *QRPAControllerClass)
    {
        if (QRPAControllerClass->objectName().isEmpty())
            QRPAControllerClass->setObjectName(QStringLiteral("QRPAControllerClass"));
        QRPAControllerClass->resize(1920, 1080);
        QRPAControllerClass->setMinimumSize(QSize(1920, 1080));
        QRPAControllerClass->setMaximumSize(QSize(1920, 1080));
        Rise = new QSlider(QRPAControllerClass);
        Rise->setObjectName(QStringLiteral("Rise"));
        Rise->setGeometry(QRect(40, 640, 150, 400));
        Rise->setStyleSheet(QLatin1String("\n"
"QSlider {\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"	padding-top: 0px;\n"
"	padding-bottom: 0px;\n"
"	border-radius: 0px;\n"
"}\n"
" \n"
"QSlider::add-page:vertical {\n"
"	background-color: rgba(255, 150, 150);\n"
"	width:6px;\n"
"	border-radius: 10px;\n"
"}\n"
" \n"
"QSlider::sub-page:vertical {\n"
"	background-color: rgba(255, 255, 225,50);\n"
"	width:5px;\n"
"	border-radius: 10px;\n"
"}\n"
" \n"
"QSlider::groove:vertical {\n"
"	background:transparent;\n"
"	width:100px;\n"
"}\n"
" \n"
"QSlider::handle:vertical {\n"
"	height: 100px;\n"
"	margin: 0px -4px 0px -4px;\n"
"	border-radius: 10px;\n"
"	border:3 solid rgb(255, 150, 150);\n"
"	background: rgba(150, 220, 220, 255);\n"
"}"));
        Rise->setMaximum(300);
        Rise->setSingleStep(1);
        Rise->setPageStep(1);
        Rise->setValue(0);
        Rise->setSliderPosition(0);
        Rise->setTracking(true);
        Rise->setOrientation(Qt::Vertical);
        Rise->setTickPosition(QSlider::NoTicks);
        Rise->setTickInterval(0);
        label = new QLabel(QRPAControllerClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1920, 1080));
        label->setStyleSheet(QStringLiteral("background-color: rgba(50, 172, 255, 200);"));
        JoystickWidget = new QWidget(QRPAControllerClass);
        JoystickWidget->setObjectName(QStringLiteral("JoystickWidget"));
        JoystickWidget->setGeometry(QRect(1480, 640, 400, 400));
        label_2 = new QLabel(JoystickWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 400, 400));
        label_2->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 225,50);\n"
"border-radius:5;"));
        Joystick = new QPushButton(JoystickWidget);
        Joystick->setObjectName(QStringLiteral("Joystick"));
        Joystick->setGeometry(QRect(120, 120, 160, 160));
        Joystick->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: rgba(150, 220, 220, 255);\n"
"border:3 solid rgb(255, 150, 150);\n"
"border-radius:80;\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"background: rgba(150, 220, 220, 150);\n"
"}"));
        widget = new QWidget(QRPAControllerClass);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 600, 1920, 480));
        widget->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"	\n"
"	color: rgb(255, 255, 225);\n"
"}"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 0, 1920, 480));
        label_4->setStyleSheet(QLatin1String("background-color: rgba(80, 80, 80, 120);\n"
"border-top:4 solid rgb(255, 255, 255)"));
        MASPeed = new QLabel(widget);
        MASPeed->setObjectName(QStringLiteral("MASPeed"));
        MASPeed->setGeometry(QRect(600, 110, 300, 60));
        QFont font;
        font.setPointSize(18);
        MASPeed->setFont(font);
        MASPeed->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        MBSPeed = new QLabel(widget);
        MBSPeed->setObjectName(QStringLiteral("MBSPeed"));
        MBSPeed->setGeometry(QRect(1100, 100, 300, 60));
        MBSPeed->setFont(font);
        MBSPeed->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        MCSPeed = new QLabel(widget);
        MCSPeed->setObjectName(QStringLiteral("MCSPeed"));
        MCSPeed->setGeometry(QRect(600, 160, 300, 60));
        MCSPeed->setFont(font);
        MCSPeed->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        MDSPeed = new QLabel(widget);
        MDSPeed->setObjectName(QStringLiteral("MDSPeed"));
        MDSPeed->setGeometry(QRect(1100, 150, 300, 60));
        MDSPeed->setFont(font);
        MDSPeed->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        SelfState = new QLabel(widget);
        SelfState->setObjectName(QStringLiteral("SelfState"));
        SelfState->setGeometry(QRect(600, 210, 300, 60));
        SelfState->setFont(font);
        SelfState->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Power = new QProgressBar(widget);
        Power->setObjectName(QStringLiteral("Power"));
        Power->setGeometry(QRect(0, 460, 1920, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(6);
        Power->setFont(font1);
        Power->setStyleSheet(QLatin1String("QProgressBar {\n"
"   border: 1px solid grey;\n"
"   background-color:rgba(255, 50, 50, 100);\n"
"}\n"
" \n"
"QProgressBar::chunk {\n"
"   background-color:rgba(50, 255, 150, 200);\n"
"}"));
        Power->setMaximum(1000);
        Power->setValue(500);
        Power->setAlignment(Qt::AlignCenter);
        CloseBtn = new QPushButton(widget);
        CloseBtn->setObjectName(QStringLiteral("CloseBtn"));
        CloseBtn->setGeometry(QRect(910, 80, 100, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        CloseBtn->setFont(font2);
        CloseBtn->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: rgb(255, 245, 255);\n"
"background-color: rgba(200, 200, 200, 70);\n"
"border:0;\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"background-color: rgba(200, 200, 200, 120);\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"background-color: rgba(150, 150, 150, 90);\n"
"}"));
        CloseBtn->setIconSize(QSize(30, 30));
        Connection = new QPushButton(widget);
        Connection->setObjectName(QStringLiteral("Connection"));
        Connection->setGeometry(QRect(760, 10, 400, 60));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(20);
        Connection->setFont(font3);
        Connection->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: rgb(255, 245, 255);\n"
"background-color: rgba(200, 200, 200, 70);\n"
"border:0;\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"background-color: rgba(200, 200, 200, 120);\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"background-color: rgba(150, 150, 150, 90);\n"
"}"));
        Connection->setIconSize(QSize(30, 30));
        label->raise();
        widget->raise();
        Rise->raise();
        JoystickWidget->raise();

        retranslateUi(QRPAControllerClass);

        QMetaObject::connectSlotsByName(QRPAControllerClass);
    } // setupUi

    void retranslateUi(QWidget *QRPAControllerClass)
    {
        QRPAControllerClass->setWindowTitle(QApplication::translate("QRPAControllerClass", "\351\243\236\350\241\214\345\231\250\346\216\247\345\210\266\347\253\257", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        Joystick->setText(QString());
        label_4->setText(QString());
        MASPeed->setText(QApplication::translate("QRPAControllerClass", "\347\224\265\346\234\272A\350\275\254\351\200\237: Null/Min", nullptr));
        MBSPeed->setText(QApplication::translate("QRPAControllerClass", "\347\224\265\346\234\272B\350\275\254\351\200\237: Null/Min", nullptr));
        MCSPeed->setText(QApplication::translate("QRPAControllerClass", "\347\224\265\346\234\272C\350\275\254\351\200\237: Null/Min", nullptr));
        MDSPeed->setText(QApplication::translate("QRPAControllerClass", "\347\224\265\346\234\272D\350\275\254\351\200\237: Null/Min", nullptr));
        SelfState->setText(QApplication::translate("QRPAControllerClass", " \346\234\272\350\272\253\347\212\266\346\200\201: Null", nullptr));
        CloseBtn->setText(QApplication::translate("QRPAControllerClass", "\351\200\200\345\207\272\346\216\247\345\210\266\345\217\260", nullptr));
        Connection->setText(QApplication::translate("QRPAControllerClass", "\351\243\236\350\241\214\345\231\250: \346\234\252\350\277\236\346\216\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QRPAControllerClass: public Ui_QRPAControllerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QRPACONTROLLER_H
