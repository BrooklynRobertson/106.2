/********************************************************************************
** Form generated from reading UI file 'adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

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

class Ui_AdminLogin
{
public:
    QLabel *label;
    QLabel *label_image1;
    QGroupBox *groupBox;
    QLabel *label_2;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *lineEdit_2;
    QWidget *logo;

    void setupUi(QDialog *AdminLogin)
    {
        if (AdminLogin->objectName().isEmpty())
            AdminLogin->setObjectName("AdminLogin");
        AdminLogin->resize(514, 469);
        label = new QLabel(AdminLogin);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 130, 121, 31));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 127);\n"
"font: 87 11pt \"Arial Black\";"));
        label_image1 = new QLabel(AdminLogin);
        label_image1->setObjectName("label_image1");
        label_image1->setGeometry(QRect(250, 120, 151, 61));
        groupBox = new QGroupBox(AdminLogin);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(100, 190, 321, 251));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 20, 171, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 87 9pt \"Arial Black\";"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(18, 200, 281, 25));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);\n"
"font: 87 9pt \"Arial Black\";"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 80, 281, 81));
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

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_2->addWidget(lineEdit);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        verticalLayout_2->addWidget(lineEdit_2);


        horizontalLayout->addLayout(verticalLayout_2);

        logo = new QWidget(AdminLogin);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(10, 0, 501, 61));
        logo->setStyleSheet(QString::fromUtf8("#logo {\n"
"\n"
"border-image:url(:/images/logo.png)\n"
"}"));

        retranslateUi(AdminLogin);

        QMetaObject::connectSlotsByName(AdminLogin);
    } // setupUi

    void retranslateUi(QDialog *AdminLogin)
    {
        AdminLogin->setWindowTitle(QCoreApplication::translate("AdminLogin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AdminLogin", "Admin Log in", nullptr));
        label_image1->setText(QString());
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("AdminLogin", "Log in to Admin Account", nullptr));
        pushButton->setText(QCoreApplication::translate("AdminLogin", "Log in", nullptr));
        label_3->setText(QCoreApplication::translate("AdminLogin", "Admin ID", nullptr));
        label_4->setText(QCoreApplication::translate("AdminLogin", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminLogin: public Ui_AdminLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H
