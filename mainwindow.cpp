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


void MainWindow::on_btSelectFile_clicked()
{

}


void MainWindow::on_btPlayOrPause_clicked()
{

}


void MainWindow::on_btStop_clicked()
{

}


void MainWindow::on_btFramePlay_clicked()
{

}


void MainWindow::on_btScreenshot_clicked()
{

}


void MainWindow::on_btSpeed_1_4_clicked()
{

}


void MainWindow::on_btSpeed_1_2_clicked()
{

}


void MainWindow::on_btSpeed_1_clicked()
{

}


void MainWindow::on_btSpeed_2_clicked()
{

}


void MainWindow::on_btSpeed_4_clicked()
{

}

