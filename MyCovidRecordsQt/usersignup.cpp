#include "usersignup.h"
#include "ui_usersignup.h"
#include <QPixmap>


#include <QMessageBox>

UserSignup::UserSignup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserSignup)
{
    ui->setupUi(this);

}

UserSignup::~UserSignup()
{
    delete ui;
}

void UserSignup::on_pushButton_Signup_clicked()
{

        QVector<QString> content;
    content.append(ui->lineEdit->text());
    content.append(ui->lineEdit_2->text());
    content.append(ui->lineEdit_3->text());
    content.append(ui->lineEdit_4->text());
    content.append(ui->lineEdit_5->text());
    content.append(ui->lineEdit_6->text());

    content.append("1");
    if (fManager->CheckValidUser(ui->lineEdit->text(),"LoginInformation")){
        fManager->WriteFile("UserRecords", content);

        QMessageBox box (this);
        box.setIcon(QMessageBox::Information);
        box.setText("you have been signed up");
        box.setWindowTitle("sign up");
        box.setStandardButtons(QMessageBox::Ok);
        box.exec();


        //QMessageBox::Information(this, tr("register "), tr("successfully register"));

    }
}

