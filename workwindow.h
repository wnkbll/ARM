#ifndef WORKWINDOW_H
#define WORKWINDOW_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>
namespace Ui {
class WorkWindow;
}

class WorkWindow : public QWidget
{
    Q_OBJECT

public:
    explicit WorkWindow(QWidget *parent = nullptr);
    ~WorkWindow();

private slots:
    void on_tableView_clicked(const QModelIndex &index);

    void on_AddButton_clicked();

    void on_DeleteButton_clicked();

private:
    Ui::WorkWindow *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
    int currentrow;
};

#endif // WORKWINDOW_H
