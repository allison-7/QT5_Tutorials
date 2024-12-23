#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDir>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QDir dir("/home/allison/Qt5_Tutorials/21_QDir");
    /*if(dir.exists()) {
        QMessageBox::information(this,"Title", "true");
    } else {
        QMessageBox::information(this,"Title", "false");
    }*/

    QDir dir;
    foreach (QFileInfo var, dir.drives()) {
        ui->comboBox->addItem(var.absoluteFilePath());
    }

    QDir dir1("/home/allison/Qt5_Tutorials/21_QDir");
    foreach (QFileInfo var, dir1.entryInfoList()) {
        if (var.isDir()){
            ui->listWidget->addItem("Dir: " + var.absoluteFilePath());
        }
        if (var.isFile()){
            ui->listWidget->addItem("File: " + var.absoluteFilePath());
        }

    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QDir dir("/home/allison/Qt5_Tutorials/21_QDir/YYY");
    if (dir.exists()) {
        QMessageBox::information(this, "Title", "Directory exists");
    } else {
        dir.mkpath("/home/allison/Qt5_Tutorials/21_QDir/YYY");
    }
}

