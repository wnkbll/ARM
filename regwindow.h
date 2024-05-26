#ifndef REGWINDOW_H
#define REGWINDOW_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlQuery>

namespace Ui {
class RegWindow;
}

class RegWindow : public QWidget
{
    Q_OBJECT

public:
    explicit RegWindow(QWidget *parent = nullptr);
    ~RegWindow();

private slots:
    void on_RegBut_clicked();

private:
    Ui::RegWindow *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
};

#endif // REGWINDOW_H
