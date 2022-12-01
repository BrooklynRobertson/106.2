#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QDialog>

namespace Ui {
class AdminLogin;
}

class AdminLogin : public QDialog
{
    Q_OBJECT

public:
    explicit AdminLogin(QWidget *parent = nullptr);
    ~AdminLogin();





private slots:
    void on_adminlogin_clicked();
    void on_adminregister_clicked();

private:
    Ui::AdminLogin *ui;
};

#endif // ADMINLOGIN_H
