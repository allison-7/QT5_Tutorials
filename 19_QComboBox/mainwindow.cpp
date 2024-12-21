#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem(QIcon(":/res/img/close.jpeg"),"Mark");
    ui->comboBox->addItem(QIcon(":/res/img/new.png"),"John");
    ui->comboBox->addItem(QIcon(":/res/img/open-file.jpeg"), "July");

    for (int i = 0; i < 10; i++) {
        ui->comboBox->addItem(QString::number(i) + "name");
    }

    ui->comboBox->insertItem(3, "new text");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "Title", ui->comboBox->currentText());
}

