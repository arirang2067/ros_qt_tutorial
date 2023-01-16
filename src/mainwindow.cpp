#include "ros_qt_tutorial/mainwindow.h"
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


void MainWindow::on_Point1_clicked()
{

}

void MainWindow::on_Point2_clicked()
{

}

void MainWindow::on_Point3_clicked()
{

}

void MainWindow::on_X_SpinBox_valueChanged(double arg1)
{

}

void MainWindow::on_Y_SpinBox_valueChanged(double arg1)
{

}

void MainWindow::on_Z_SpinBox_valueChanged(double arg1)
{

}

void MainWindow::on_Send_clicked()
{

}
