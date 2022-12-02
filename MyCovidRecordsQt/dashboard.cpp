#include "dashboard.h"
#include "ui_dashboard.h"
#include "userlogin.h"
#include <QMessageBox>


Dashboard::Dashboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dashboard)
{
    ui->setupUi(this);
 //   connect(SIGNAL(clicked()),pushButtonLogout,SLOT(Ui::UserLogin));
}

Dashboard::~Dashboard()
{
    delete ui;
}

void on_pushButtonLogout_clicked(){

    QMessageBox box;
    box.open();
    box.setInformativeText("Loggin out");
    UserLogin ul;
    ul.setModal(true);
    ul.exec();
}
