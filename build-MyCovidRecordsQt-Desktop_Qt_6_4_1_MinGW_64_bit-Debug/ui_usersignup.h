/********************************************************************************
** Form generated from reading UI file 'usersignup.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERSIGNUP_H
#define UI_USERSIGNUP_H

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

class Ui_UserSignup
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *pushButton_Login;
    QGroupBox *groupBox;
    QLabel *label_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_6;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer_7;
    QLineEdit *lineEdit_3;
    QSpacerItem *verticalSpacer_8;
    QLineEdit *lineEdit_4;
    QSpacerItem *verticalSpacer_9;
    QLineEdit *lineEdit_5;
    QSpacerItem *verticalSpacer_10;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_Signup;
    QWidget *logo;

    void setupUi(QDialog *UserSignup)
    {
        if (UserSignup->objectName().isEmpty())
            UserSignup->setObjectName("UserSignup");
        UserSignup->resize(533, 525);
        label = new QLabel(UserSignup);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 150, 231, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(UserSignup);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(280, 90, 279, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial Rounded MT Bold\";"));

        horizontalLayout->addWidget(label_2);

        pushButton_Login = new QPushButton(layoutWidget);
        pushButton_Login->setObjectName("pushButton_Login");
        pushButton_Login->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";\n"
"color: rgb(0, 85, 255);"));

        horizontalLayout->addWidget(pushButton_Login);

        groupBox = new QGroupBox(UserSignup);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, 190, 451, 311));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 10, 121, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Black")});
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("font: 87 9pt \"Arial Black\";"));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 50, 311, 242));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName("label_8");

        verticalLayout->addWidget(label_8);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName("label_9");

        verticalLayout->addWidget(label_9);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_2->addWidget(lineEdit);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        lineEdit_2 = new QLineEdit(layoutWidget1);
        lineEdit_2->setObjectName("lineEdit_2");

        verticalLayout_2->addWidget(lineEdit_2);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

        lineEdit_3 = new QLineEdit(layoutWidget1);
        lineEdit_3->setObjectName("lineEdit_3");

        verticalLayout_2->addWidget(lineEdit_3);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8);

        lineEdit_4 = new QLineEdit(layoutWidget1);
        lineEdit_4->setObjectName("lineEdit_4");

        verticalLayout_2->addWidget(lineEdit_4);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_9);

        lineEdit_5 = new QLineEdit(layoutWidget1);
        lineEdit_5->setObjectName("lineEdit_5");

        verticalLayout_2->addWidget(lineEdit_5);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_10);

        lineEdit_6 = new QLineEdit(layoutWidget1);
        lineEdit_6->setObjectName("lineEdit_6");

        verticalLayout_2->addWidget(lineEdit_6);


        horizontalLayout_2->addLayout(verticalLayout_2);

        pushButton_Signup = new QPushButton(groupBox);
        pushButton_Signup->setObjectName("pushButton_Signup");
        pushButton_Signup->setGeometry(QRect(20, 270, 311, 25));
        pushButton_Signup->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        logo = new QWidget(UserSignup);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(0, 0, 531, 80));
        logo->setStyleSheet(QString::fromUtf8("#logo {\n"
"\n"
"border-image:url(:/images/logo.png)\n"
"}"));

        retranslateUi(UserSignup);

        QMetaObject::connectSlotsByName(UserSignup);
    } // setupUi

    void retranslateUi(QDialog *UserSignup)
    {
        UserSignup->setWindowTitle(QCoreApplication::translate("UserSignup", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("UserSignup", "My Covid Record", nullptr));
        label_2->setText(QCoreApplication::translate("UserSignup", "Already have an account?", nullptr));
        pushButton_Login->setText(QCoreApplication::translate("UserSignup", "Log in", nullptr));
        groupBox->setTitle(QString());
        label_3->setText(QCoreApplication::translate("UserSignup", "Register ", nullptr));
        label_4->setText(QCoreApplication::translate("UserSignup", "Email Address", nullptr));
        label_5->setText(QCoreApplication::translate("UserSignup", "Name", nullptr));
        label_6->setText(QCoreApplication::translate("UserSignup", "Date of Birth", nullptr));
        label_7->setText(QCoreApplication::translate("UserSignup", "Mobile", nullptr));
        label_8->setText(QCoreApplication::translate("UserSignup", "Password", nullptr));
        label_9->setText(QCoreApplication::translate("UserSignup", "Confirm password", nullptr));
        pushButton_Signup->setText(QCoreApplication::translate("UserSignup", "Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserSignup: public Ui_UserSignup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSIGNUP_H
