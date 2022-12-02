#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QDialog>

namespace Ui {
class Dashboard;
}

class Dashboard : public QDialog
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = nullptr);
    ~Dashboard();
private slots:
    void on_pushButtonLogout_clicked();


private:
    Ui::Dashboard *ui;
};

#endif // DASHBOARD_H
