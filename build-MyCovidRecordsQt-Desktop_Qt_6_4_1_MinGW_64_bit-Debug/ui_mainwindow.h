/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdmin_Login;
    QWidget *centralwidget;
    QLabel *label_image1;
    QLabel *label;
    QWidget *logo;
    QPushButton *pushButton_SignUp;
    QPushButton *pushButton_Login;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButtonadminregister;
    QPushButton *pushButtonadminlogin;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(878, 584);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        MainWindow->setFont(font);
        actionAdmin_Login = new QAction(MainWindow);
        actionAdmin_Login->setObjectName("actionAdmin_Login");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_image1 = new QLabel(centralwidget);
        label_image1->setObjectName("label_image1");
        label_image1->setGeometry(QRect(200, 20, 171, 61));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 160, 581, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Black")});
        font1.setPointSize(28);
        font1.setBold(true);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8(""));
        logo = new QWidget(centralwidget);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(-20, 0, 691, 121));
        logo->setStyleSheet(QString::fromUtf8("#logo {\n"
"\n"
"border-image:url(:/images/logo.png)\n"
"}"));
        pushButton_SignUp = new QPushButton(centralwidget);
        pushButton_SignUp->setObjectName("pushButton_SignUp");
        pushButton_SignUp->setGeometry(QRect(70, 380, 191, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Black")});
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setItalic(false);
        pushButton_SignUp->setFont(font2);
        pushButton_SignUp->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";\n"
"color: rgb(0, 85, 255);\n"
""));
        pushButton_Login = new QPushButton(centralwidget);
        pushButton_Login->setObjectName("pushButton_Login");
        pushButton_Login->setGeometry(QRect(70, 450, 191, 51));
        pushButton_Login->setFont(font2);
        pushButton_Login->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";\n"
"color: rgb(0, 85, 255);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 310, 181, 41));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(400, 310, 181, 51));
        pushButtonadminregister = new QPushButton(centralwidget);
        pushButtonadminregister->setObjectName("pushButtonadminregister");
        pushButtonadminregister->setGeometry(QRect(400, 380, 181, 51));
        pushButtonadminregister->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";\n"
"color: rgb(0, 85, 255);"));
        pushButtonadminlogin = new QPushButton(centralwidget);
        pushButtonadminlogin->setObjectName("pushButtonadminlogin");
        pushButtonadminlogin->setGeometry(QRect(400, 450, 181, 51));
        pushButtonadminlogin->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";\n"
"color: rgb(0, 85, 255);"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Homepage", nullptr));
        actionAdmin_Login->setText(QCoreApplication::translate("MainWindow", "Admin Login", nullptr));
        label_image1->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "MY COVID RECORD", nullptr));
        pushButton_SignUp->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        pushButton_Login->setText(QCoreApplication::translate("MainWindow", "Log in", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "USER PAGE", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "ADMIN PAGE", nullptr));
        pushButtonadminregister->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        pushButtonadminlogin->setText(QCoreApplication::translate("MainWindow", "Log in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
