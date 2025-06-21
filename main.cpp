#include "mainwindow.h"
#include <QApplication>
#include <QFontDatabase>

int main(int argc, char *argv[])
{
    // 设置高DPI支持
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QApplication a(argc, argv);

    // Qt 6 默认使用 UTF-8 编码，不需要手动设置
    // QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

    // 添加中文字体支持
    QFont font("Microsoft YaHei", 9);  // 使用微软雅黑字体
    a.setFont(font);

    MainWindow w;
    w.show();

    return a.exec();
}
