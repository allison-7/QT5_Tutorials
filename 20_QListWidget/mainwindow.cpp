#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *item = new QListWidgetItem(QIcon(":/res/img/close.jpeg"), "Mark");
    QListWidgetItem *item2 = new QListWidgetItem(QIcon(":/res/img/new.png"), "Mark");
    QListWidgetItem *item3 = new QListWidgetItem(QIcon(":/res/img/open-file.jpeg"), "Mark");

    ui->listWidget->addItem(item);
    ui->listWidget->addItem(item2);
    ui->listWidget->addItem(item3);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //QMessageBox::information(this, "Title", ui->listWidget->currentItem()->text());
    ui->listWidget->currentItem()->setBackground(Qt::red);
    ui->listWidget->currentItem()->setForeground(Qt::white);
}

