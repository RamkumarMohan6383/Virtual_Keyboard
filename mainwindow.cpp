#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_119_clicked()
{
    keyboard *key=new keyboard(this);
    key->setModal(true);
    key->setPage(0);
    key->setData("Experiment Name",ui->lineEdit_5->text());
    key->exec();
    QString data = key->getData();
    ui->lineEdit_5->setText(data);
}

