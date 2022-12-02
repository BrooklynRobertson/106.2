#include "userlogin.h"
#include <QPixmap>
#include <QMessageBox>
#include "dashboard.h"
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
                if(userEmail && "admin") {
                    isAdmin = true;
                }


               if (isAdmin){
                   QMessageBox::information(this, " Admin Login", "Successfully logged in as ADMIN");
               }
               else{
                   QMessageBox::information(this, "User Login", "Successfully logged in as USER");
               }
               this->hide();
               Dashboard dashBoard;
              dashBoard.setModal(true);
               dashBoard.exec();


            }

            else{
                QMessageBox::warning(this, "Login", "Incorrect Password");
            }
        }


        }
        if(!signedIn) {
            QMessageBox::warning(this, "Login", "No user was found");
        }
    }

void UserLogin::on_signupButton_clicked(){

    QLineEdit* userEmail = ui->emailField;
    QLineEdit* userPassword = ui->passField;

    QVector<QString> content;
    QVector<QVector<QString>> fileToCheck;

    content.append(userEmail->text());
    std::string hashedPassword = userPassword->text().toStdString() + userPassword->text().toStdString();


    if(fManager.CheckValidUser(userEmail->text(), "LoginInformation")){
        fManager.WriteFile("LoginInformation", content);

        //Define message box content
        QMessageBox box(this);
        box.setIcon(QMessageBox::Information);
        box.setText("You have successfully signed up");
        box.setWindowTitle("Sign Up");
        box.setStandardButtons(QMessageBox::Ok);
        int returnVal = box.exec();

        //Determine messagebox button pressed
        switch(returnVal){
        case QMessageBox::Ok: ;

        };

    }
    else{
        QMessageBox::warning(this, "Sign Up", "User with this name already exists");
    }
}
