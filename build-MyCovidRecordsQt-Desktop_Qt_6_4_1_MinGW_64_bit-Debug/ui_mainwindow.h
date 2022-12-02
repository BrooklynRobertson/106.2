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
        label->setGeometry(QRect(200, 170, 581, 71));
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
        pushButton_SignUp->setGeometry(QRect(190, 300, 191, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setItalic(false);
        pushButton_SignUp->setFont(font2);
        pushButton_SignUp->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial\";\n"
"color: rgb(0, 0, 0);\n"
""));
        pushButton_Login = new QPushButton(centralwidget);
        pushButton_Login->setObjectName("pushButton_Login");
        pushButton_Login->setGeometry(QRect(480, 300, 191, 51));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(246, 184, 25, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        pushButton_Login->setPalette(palette);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial Black")});
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setItalic(false);
        pushButton_Login->setFont(font3);
        pushButton_Login->setAutoFillBackground(false);
        pushButton_Login->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 184, 25);;\n"
"font: 9pt \"Farsi Simple Outline\";\n"
"font: 87 9pt \"Arial Black\";\n"
"color: rgb(0, 0, 0);"));
        pushButton_Login->setAutoDefault(true);
        pushButton_Login->setFlat(false);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Homepage", nullptr));
        actionAdmin_Login->setText(QCoreApplication::translate("MainWindow", "Admin Login", nullptr));
        label_image1->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "My Covid Records", nullptr));
        pushButton_SignUp->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        pushButton_Login->setText(QCoreApplication::translate("MainWindow", "Log in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
