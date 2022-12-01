#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Login_clicked()
{
    this->hide();
    ul = new UserLogin(this);
    ul->show();
}


void MainWindow::on_pushButton_SignUp_clicked()
{
    this->hide();
    us = new UserSignup(this);
    us->show();
}





void MainWindow::on_adminlogin_clicked()
{

  this->hide();
al = new AdminLogin(this);
al->show();
}





void MainWindow::on_adminregister_clicked()
{

  this->hide();
us = new UserSignup(this);
us->show();
}




