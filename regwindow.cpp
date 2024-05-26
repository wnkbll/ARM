#include "regwindow.h"
#include "ui_regwindow.h"
#include "programmstyle.h"

RegWindow::RegWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegWindow)
{
    ui->setupUi(this);
    ui->RegBut->setStyleSheet(ProgrammStyle::GetButtonsStyle());
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./datab.db");
    if (db.open()){
        model = new QSqlTableModel(this, db);
        model->setTable("USERS");
        model->select();
    }
}

RegWindow::~RegWindow()
{
    delete ui;
}

void RegWindow::on_RegBut_clicked()
{
    QString login = ui->GetLogin->text();
    QString password = ui->GetPass->text();

    if (login != "" and password != "" ){
        model->insertRow(model->rowCount());
        QSqlQuery query;
        query.prepare("INSERT INTO USERS (Login, Password, AccessRights) "
                           "VALUES (:Login, :Password, 0)");
        query.bindValue(":Login", login);
        query.bindValue(":Password", password);
        //AccessRights:
        //(3)Admin
        //(2)Teamlead
        //(1)Employee
        //(0)None
        query.exec();
        close();
    }
}

