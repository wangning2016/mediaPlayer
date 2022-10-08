/*
 * @Author: wangning2016 244199475@qq.com
 * @Date: 2022-10-08 17:17:40
 * @LastEditors: wangning2016 244199475@qq.com
 * @LastEditTime: 2022-10-08 17:18:42
 * @FilePath: /mediaPlayer/mainwindow.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
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
