#include "mainwindow.h"
#include "./ui_mainwindow.h"



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
int text=0;

void MainWindow::on_pushButton_clicked()
{
    text++;
    ui->textEdit->setFixedWidth(text);
}








void MainWindow::on_dial_valueChanged(int value)
{
    ui->textEdit->setFixedWidth((value)*3);
}

