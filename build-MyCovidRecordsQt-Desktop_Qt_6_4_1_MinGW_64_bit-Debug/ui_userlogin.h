/********************************************************************************
** Form generated from reading UI file 'userlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLOGIN_H
#define UI_USERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserLogin
{
public:
    QLabel *label;
    QLabel *label_image1;
    QGroupBox *groupBox;
    QPushButton *loginButton;
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *emailField;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *passField;
    QGroupBox *groupBox_2;
    QLabel *label_4;
    QPushButton *pushButton_SignUp;
    QWidget *logo;

    void setupUi(QDialog *UserLogin)
    {
        if (UserLogin->objectName().isEmpty())
            UserLogin->setObjectName("UserLogin");
        UserLogin->resize(515, 464);
        label = new QLabel(UserLogin);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 170, 161, 41));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 127);\n"
"font: 87 11pt \"Arial Black\";"));
        label_image1 = new QLabel(UserLogin);
        label_image1->setObjectName("label_image1");
        label_image1->setGeometry(QRect(100, 70, 151, 61));
        groupBox = new QGroupBox(UserLogin);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(110, 220, 301, 225));
        loginButton = new QPushButton(groupBox);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(20, 180, 261, 25));
        loginButton->setStyleSheet(QString::fromUtf8("font: 87 9pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 20, 81, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 87 9pt \"Arial Black\";"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 70, 261, 74));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        emailField = new QLineEdit(layoutWidget);
        emailField->setObjectName("emailField");

        verticalLayout_2->addWidget(emailField);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        passField = new QLineEdit(layoutWidget);
        passField->setObjectName("passField");

        verticalLayout_2->addWidget(passField);


        horizontalLayout->addLayout(verticalLayout_2);

        groupBox_2 = new QGroupBox(UserLogin);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(240, 80, 271, 41));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 10, 141, 20));
        pushButton_SignUp = new QPushButton(groupBox_2);
        pushButton_SignUp->setObjectName("pushButton_SignUp");
        pushButton_SignUp->setGeometry(QRect(190, 10, 75, 23));
        pushButton_SignUp->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 85, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        logo = new QWidget(UserLogin);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(0, 0, 511, 80));
        logo->setStyleSheet(QString::fromUtf8("#logo {\n"
"\n"
"border-image:url(:/images/logo.png)\n"
"}"));

        retranslateUi(UserLogin);

        QMetaObject::connectSlotsByName(UserLogin);
    } // setupUi

    void retranslateUi(QDialog *UserLogin)
    {
        UserLogin->setWindowTitle(QCoreApplication::translate("UserLogin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("UserLogin", "My Covid Record", nullptr));
        label_image1->setText(QString());
        groupBox->setTitle(QString());
        loginButton->setText(QCoreApplication::translate("UserLogin", "Log in", nullptr));
        label_2->setText(QCoreApplication::translate("UserLogin", "Log in ", nullptr));
        label_3->setText(QCoreApplication::translate("UserLogin", "Email Address", nullptr));
        label_5->setText(QCoreApplication::translate("UserLogin", "Password", nullptr));
        groupBox_2->setTitle(QString());
        label_4->setText(QCoreApplication::translate("UserLogin", "Don't have an account?", nullptr));
        pushButton_SignUp->setText(QCoreApplication::translate("UserLogin", "Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserLogin: public Ui_UserLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOGIN_H
