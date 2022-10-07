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
    void on_btSelectFile_clicked();

    void on_btPlayOrPause_clicked();

    void on_btStop_clicked();

    void on_btFramePlay_clicked();

    void on_btScreenshot_clicked();

    void on_btSpeed_1_4_clicked();

    void on_btSpeed_1_2_clicked();

    void on_btSpeed_1_clicked();

    void on_btSpeed_2_clicked();

    void on_btSpeed_4_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
