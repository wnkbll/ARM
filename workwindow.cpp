#include "workwindow.h"
#include "ui_workwindow.h"
#include "programmstyle.h"
WorkWindow::WorkWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WorkWindow)
{
    ui->setupUi(this);
    ui->AddButton->setStyleSheet(ProgrammStyle::GetButtonsStyle());
    ui->DeleteButton->setStyleSheet(ProgrammStyle::GetButtonsStyle());
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./datab.db");
    if (db.open()){
        model = new QSqlTableModel(this, db);
        model->setTable("CARS");
        model->select();
        ui->tableView->setModel(model);
    }
}

WorkWindow::~WorkWindow()
{
    delete ui;
}

void WorkWindow::on_AddButton_clicked()
{
     model->insertRow(model->rowCount());
}


void WorkWindow::on_DeleteButton_clicked()
{
    model->removeRow(currentrow);
    model->select();
}


void WorkWindow::on_tableView_clicked(const QModelIndex &index)
{
    currentrow = index.row();
}
