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
    QLabel *label;
    QWidget *logo;
    QPushButton *pushButtonview;
    QPushButton *pushButtontest;
    QPushButton *pushButtonbook;
    QPushButton *pushButtoncertificate;
    QPushButton *pushButtonrat;
    QPushButton *pushButtonQR;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *viewrecords;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QWidget *testresult;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QWidget *book;
    QVBoxLayout *verticalLayout_3;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_5;
    QWidget *vaccine;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_6;
    QWidget *rat;
    QSplitter *splitter;
    QWidget *qrcode;

    void setupUi(QDialog *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(668, 601);
        QFont font;
        font.setBold(true);
        Dashboard->setFont(font);
        label = new QLabel(Dashboard);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 100, 251, 41));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        label->setFont(font1);
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
        pushButtontest->setGeometry(QRect(260, 290, 111, 24));
        pushButtontest->setFont(font);
        pushButtonbook = new QPushButton(Dashboard);
        pushButtonbook->setObjectName("pushButtonbook");
        pushButtonbook->setGeometry(QRect(460, 290, 121, 24));
        pushButtonbook->setFont(font);
        pushButtoncertificate = new QPushButton(Dashboard);
        pushButtoncertificate->setObjectName("pushButtoncertificate");
        pushButtoncertificate->setGeometry(QRect(70, 450, 111, 24));
        pushButtonrat = new QPushButton(Dashboard);
        pushButtonrat->setObjectName("pushButtonrat");
        pushButtonrat->setGeometry(QRect(260, 450, 121, 24));
        pushButtonQR = new QPushButton(Dashboard);
        pushButtonQR->setObjectName("pushButtonQR");
        pushButtonQR->setGeometry(QRect(460, 440, 111, 24));
        layoutWidget = new QWidget(Dashboard);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 180, 111, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        viewrecords = new QWidget(layoutWidget);
        viewrecords->setObjectName("viewrecords");
        viewrecords->setStyleSheet(QString::fromUtf8("#viewrecords {\n"
"border-image: url(:/images/viewrecords.png)\n"
"\n"
"}\n"
"\n"
""));

        verticalLayout->addWidget(viewrecords);

        layoutWidget1 = new QWidget(Dashboard);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(260, 180, 111, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        testresult = new QWidget(layoutWidget1);
        testresult->setObjectName("testresult");
        testresult->setStyleSheet(QString::fromUtf8("#testresult {\n"
"border-image: url(:/images/testresult.png)\n"
"\n"
"}\n"
""));

        verticalLayout_2->addWidget(testresult);

        layoutWidget2 = new QWidget(Dashboard);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(460, 180, 121, 111));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        book = new QWidget(layoutWidget2);
        book->setObjectName("book");
        book->setStyleSheet(QString::fromUtf8("#book {\n"
"border-image: url(:/images/book appiontment.png)\n"
"\n"
"}\n"
""));
        verticalLayout_3 = new QVBoxLayout(book);
        verticalLayout_3->setObjectName("verticalLayout_3");

        verticalLayout_4->addWidget(book);

        layoutWidget3 = new QWidget(Dashboard);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(70, 340, 111, 111));
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

        layoutWidget4 = new QWidget(Dashboard);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(260, 340, 121, 111));
        verticalLayout_6 = new QVBoxLayout(layoutWidget4);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        rat = new QWidget(layoutWidget4);
        rat->setObjectName("rat");
        rat->setStyleSheet(QString::fromUtf8("#rat {\n"
"border-image: url(:/images/testresult.png)\n"
"\n"
"}\n"
""));

        verticalLayout_6->addWidget(rat);

        splitter = new QSplitter(Dashboard);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(460, 340, 111, 101));
        splitter->setOrientation(Qt::Vertical);
        qrcode = new QWidget(splitter);
        qrcode->setObjectName("qrcode");
        qrcode->setStyleSheet(QString::fromUtf8("#qrcode {\n"
"border-image: url(:/images/QRcode.png)\n"
"\n"
"}\n"
""));
        splitter->addWidget(qrcode);

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QDialog *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "DASHBOARD MENU", nullptr));
        label->setText(QCoreApplication::translate("Dashboard", "MY COVID RECORDS", nullptr));
        pushButtonview->setText(QCoreApplication::translate("Dashboard", "VIEW RECORDS", nullptr));
        pushButtontest->setText(QCoreApplication::translate("Dashboard", "TEST RESULT", nullptr));
        pushButtonbook->setText(QCoreApplication::translate("Dashboard", "Book Appiontment", nullptr));
        pushButtoncertificate->setText(QCoreApplication::translate("Dashboard", "Certificate", nullptr));
        pushButtonrat->setText(QCoreApplication::translate("Dashboard", "Rat Test", nullptr));
        pushButtonQR->setText(QCoreApplication::translate("Dashboard", "QR Code", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
