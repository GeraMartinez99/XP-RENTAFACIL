#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include<QSqlError>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db=QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("DRIVER={MYSQL ODBC 8.0 UNICODE DRIVER}; SERVER=127.0.0.1; uid=gera; pwd=gera;  Database=prueba;");
    if(db.open()){
qDebug()<<"fef";
    }

    else {
        qDebug()<<db.lastError().text();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
