#include "userlogin.h"
#include <QPixmap>
#include <QMessageBox>
#include "ui_userlogin.h"
#include <QLineEdit>


UserLogin::UserLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserLogin)
{
    ui->setupUi(this);

    //setting up line edits for email and password
    QLineEdit* userEmail = ui->emailField;
        userEmail->setPlaceholderText("Insert Email here...");
    QLineEdit* userPassword = ui->passField;
        userPassword->setPlaceholderText("Insert Password Here...");
        userPassword->setEchoMode(QLineEdit::EchoMode::Password);
}

UserLogin::~UserLogin()
{
    delete ui;
}

void UserLogin::on_loginButton_clicked()
{
    QLineEdit* userEmail = ui->emailField;
    QLineEdit* userPassword = ui->passField;

    QVector<QVector<QString>> fileContent = fManager.ReadFile("LoginInformation", 70);
if(fileContent.empty()) {
    qDebug("something is wrong, file emty");
}

    for(int i = 0; i < fileContent.size(); i++) {
//
        if(userEmail->text() == fileContent.at(i).at(0)) {
            if(userPassword->text() == fileContent.at(i).at(1)) {
                signedIn = true;
                QMessageBox::information(this, "Login", "Successfully loged in!!");
            }

            else{
                QMessageBox::warning(this, "Login", "Incorrect Password");
            }
        }

        else{
            continue;
            }
        }
        if(!signedIn) {
            QMessageBox::warning(this, "Login", "No user was found");
        }
    }

