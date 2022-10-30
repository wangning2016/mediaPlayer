#include "mainwindow.h"

#include <QApplication>

extern "C"
{
#include "ffplay.h"
}
// /home/wangning/HDA/video/cctv1.flv
//  http://192.168.1.101/2.MP4
int main(int argc, char *argv[])
{
    main_ffplay(argc,argv);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
