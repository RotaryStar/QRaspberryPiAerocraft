/********************************************************************************
** Form generated from reading UI file 'QRPARecipient.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QRPARECIPIENT_H
#define UI_QRPARECIPIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QRPARecipientClass
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *aa;

    void setupUi(QWidget *QRPARecipientClass)
    {
        if (QRPARecipientClass->objectName().isEmpty())
            QRPARecipientClass->setObjectName(QStringLiteral("QRPARecipientClass"));
        QRPARecipientClass->resize(600, 400);
        pushButton = new QPushButton(QRPARecipientClass);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 110, 176, 119));
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	background-color: rgb(85, 255, 0);\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"	\n"
"	background-color: rgb(0, 170, 0);\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"background-color: rgb(0, 0, 255);\n"
"}"));
        label = new QLabel(QRPARecipientClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 601, 401));
        QFont font;
        font.setPointSize(19);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background-color: rgba(170, 170, 255, 200);\n"
"border:0;"));
        aa = new QLabel(QRPARecipientClass);
        aa->setObjectName(QStringLiteral("aa"));
        aa->setGeometry(QRect(63, 301, 111, 61));
        label->raise();
        pushButton->raise();
        aa->raise();

        retranslateUi(QRPARecipientClass);

        QMetaObject::connectSlotsByName(QRPARecipientClass);
    } // setupUi

    void retranslateUi(QWidget *QRPARecipientClass)
    {
        QRPARecipientClass->setWindowTitle(QApplication::translate("QRPARecipientClass", "QRPARecipient", nullptr));
        pushButton->setText(QApplication::translate("QRPARecipientClass", "265256252525", nullptr));
        label->setText(QString());
        aa->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QRPARecipientClass: public Ui_QRPARecipientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QRPARECIPIENT_H
