#ifndef USERSIGNUP_H
#define USERSIGNUP_H

#include <QDialog>
#include "filemanager.h"
namespace Ui {
class UserSignup;
}

class UserSignup : public QDialog
{
    Q_OBJECT

public:
    explicit UserSignup(QWidget *parent = nullptr);
    ~UserSignup();

private slots:


    void on_pushButton_Signup_clicked();

private:
    Ui::UserSignup *ui;
    FileManager *fManager;
};

#endif // USERSIGNUP_H
