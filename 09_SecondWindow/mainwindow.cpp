#include "mainwindow.h"
#include "./ui_mainwindow.h"
//#include "second_dialog.h"

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

void MainWindow::on_pushButton_clicked()
{
    //Second_Dialog secondDialog;
    //secondDialog.setModal(true);
    //secondDialog.exec();
    hide(); //hide 1st window
    secondDialog = new Second_Dialog(this);
    secondDialog->show();
}

