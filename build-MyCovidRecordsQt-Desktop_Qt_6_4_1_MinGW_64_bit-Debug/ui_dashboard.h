/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QWidget *logo;
    QPushButton *pushButtonview;
    QPushButton *pushButtontest;
    QPushButton *pushButtoncertificate;
    QPushButton *pushButtonQR;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QWidget *viewrecords;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QWidget *testresult;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_5;
    QWidget *vaccine;
    QSplitter *splitter;
    QWidget *qrcode;
    QPushButton *pushButtonLogout;
    QLabel *label;

    void setupUi(QDialog *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(668, 601);
        QFont font;
        font.setBold(true);
        Dashboard->setFont(font);
        logo = new QWidget(Dashboard);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(0, 0, 661, 80));
        logo->setStyleSheet(QString::fromUtf8("#logo {\n"
"\n"
"border-image:url(:/images/logo.png)\n"
"}"));
        pushButtonview = new QPushButton(Dashboard);
        pushButtonview->setObjectName("pushButtonview");
        pushButtonview->setGeometry(QRect(70, 290, 111, 24));
        pushButtonview->setFont(font);
        pushButtontest = new QPushButton(Dashboard);
        pushButtontest->setObjectName("pushButtontest");
        pushButtontest->setGeometry(QRect(200, 290, 111, 24));
        pushButtontest->setFont(font);
        pushButtoncertificate = new QPushButton(Dashboard);
        pushButtoncertificate->setObjectName("pushButtoncertificate");
        pushButtoncertificate->setGeometry(QRect(330, 290, 111, 24));
        pushButtonQR = new QPushButton(Dashboard);
        pushButtonQR->setObjectName("pushButtonQR");
        pushButtonQR->setGeometry(QRect(460, 280, 111, 24));
        layoutWidget1 = new QWidget(Dashboard);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(70, 180, 111, 111));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        viewrecords = new QWidget(layoutWidget1);
        viewrecords->setObjectName("viewrecords");
        viewrecords->setStyleSheet(QString::fromUtf8("#viewrecords {\n"
"border-image: url(:/images/viewrecords.png)\n"
"\n"
"}\n"
"\n"
""));

        verticalLayout->addWidget(viewrecords);

        layoutWidget2 = new QWidget(Dashboard);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(200, 180, 111, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        testresult = new QWidget(layoutWidget2);
        testresult->setObjectName("testresult");
        testresult->setStyleSheet(QString::fromUtf8("#testresult {\n"
"border-image: url(:/images/testresult.png)\n"
"\n"
"}\n"
""));

        verticalLayout_2->addWidget(testresult);

        layoutWidget3 = new QWidget(Dashboard);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(330, 180, 111, 111));
        verticalLayout_5 = new QVBoxLayout(layoutWidget3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        vaccine = new QWidget(layoutWidget3);
        vaccine->setObjectName("vaccine");
        vaccine->setStyleSheet(QString::fromUtf8("#vaccine {\n"
"border-image: url(:/images/vaccine certifiacte.png)\n"
"\n"
"}\n"
""));

        verticalLayout_5->addWidget(vaccine);

        splitter = new QSplitter(Dashboard);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(460, 180, 111, 101));
        splitter->setOrientation(Qt::Vertical);
        qrcode = new QWidget(splitter);
        qrcode->setObjectName("qrcode");
        qrcode->setStyleSheet(QString::fromUtf8("#qrcode {\n"
"border-image: url(:/images/QRcode.png)\n"
"\n"
"}\n"
""));
        splitter->addWidget(qrcode);
        pushButtonLogout = new QPushButton(Dashboard);
        pushButtonLogout->setObjectName("pushButtonLogout");
        pushButtonLogout->setGeometry(QRect(280, 370, 83, 29));
        label = new QLabel(Dashboard);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 90, 311, 41));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        label->setFont(font1);

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QDialog *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "DASHBOARD MENU", nullptr));
        pushButtonview->setText(QCoreApplication::translate("Dashboard", "View Profile", nullptr));
        pushButtontest->setText(QCoreApplication::translate("Dashboard", "View Results", nullptr));
        pushButtoncertificate->setText(QCoreApplication::translate("Dashboard", "View Certificate", nullptr));
        pushButtonQR->setText(QCoreApplication::translate("Dashboard", "QR Code", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("Dashboard", "Log Out", nullptr));
        label->setText(QCoreApplication::translate("Dashboard", "My Covid Records", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
