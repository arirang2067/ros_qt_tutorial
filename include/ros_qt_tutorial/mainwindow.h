#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Point1_clicked();

    void on_Point2_clicked();

    void on_Point3_clicked();

    void on_X_SpinBox_valueChanged(double arg1);

    void on_Y_SpinBox_valueChanged(double arg1);

    void on_Z_SpinBox_valueChanged(double arg1);

    void on_Send_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
