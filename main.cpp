/**
 * @file      main.cpp
 * @brief     应用程序入口点
 * @author    LayoutDemo Team
 * @date      2026-04-02
 * @copyright Copyright © 2026 LayoutDemo. All rights reserved.
 */

#include "mywidget.h"

#include <QApplication>

/**
 * @brief 应用程序主入口函数
 * @param argc 命令行参数个数
 * @param argv 命令行参数数组
 * @return 应用程序退出码
 *
 * 创建 QApplication 对象和主窗口，启动事件循环。
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.show();
    return a.exec();
}
