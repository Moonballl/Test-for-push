#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}

//绘图设备
//    QPixmap 对显示做了优化
//    QImage  提供像素级别的访问操作
//    QPicture 作为录像机，记录painter画画的步骤，日后重现

//    这些绘图设备都可以通过load和save来加载和保存文件
