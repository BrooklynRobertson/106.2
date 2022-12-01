#ifndef USERLOGIN_H
#define USERLOGIN_H

#include "filemanager.h"
#include <QDialog>

namespace Ui {
class UserLogin;
}

class UserLogin : public QDialog
{
    Q_OBJECT

public:
    explicit UserLogin(QWidget *parent = nullptr);
    ~UserLogin();

private slots:
    void on_loginButton_clicked();



private:
    Ui::UserLogin *ui;
    FileManager fManager;
    bool signedIn = false;
};

#endif // USERLOGIN_H
