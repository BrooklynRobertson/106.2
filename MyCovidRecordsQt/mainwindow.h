#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "filemanager.h"
#include <QMainWindow>
#include "userlogin.h"
#include "dashboard.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Login_clicked();



private:
    Ui::MainWindow *ui;
    UserLogin *ul;
     Dashboard *db;
     FileManager fManager;

};
#endif // MAINWINDOW_H
