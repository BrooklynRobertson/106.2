#include "adminlogin.h"
#include "ui_adminlogin.h"
#include <QMessageBox>
#include <QPixmap>

AdminLogin::AdminLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminLogin)
{
    ui->setupUi(this);

}

AdminLogin::~AdminLogin()
{
    delete ui;
}


void AdminLogin::on_adminlogin_clicked()
{
    QMessageBox::information(this, tr("Admin Log in  "), tr("successfully log in"));
}
void AdminLogin::on_adminregister_clicked()
{
    QMessageBox::information(this, tr("Admin Log in  "), tr("successfully registered"));
}
