#include "mywidget.h"
#include "ui_mywidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::resizeEvent(QResizeEvent *event)
{
    static int index = 1;

    int lineCnt = ui->textEdit->document()->lineCount();
    if(lineCnt > 600)
    {
        ui->textEdit->clear();
        index = 1;
    }

    //索引
    QString strIndex = QString("[%1]----------").arg(index++);


    //按钮宽度
    QString width = QString("按钮宽度: \t%1, %2, %3, %3")
                        .arg(ui->btnAdd->width())
                        .arg(ui->btnDel->width())
                        .arg(ui->btnModify->width())
                        .arg(ui->btnQuery->width());

    //边距
    QMargins margins = ui->horizonwidget->layout()->contentsMargins();
    QString strmargins = QString("边距(左上右下)：\t%1, %2, %3, %4")
                            .arg(margins.left())
                            .arg(margins.top())
                            .arg(margins.right())
                            .arg(margins.bottom());

    //间距
    int spacing = ui->horizonwidget->layout()->spacing();
    QString strSpacing = QString("间距：\t\t%1").arg(spacing);

    ui->textEdit->append(strIndex);
    ui->textEdit->append(width);
    ui->textEdit->append(strmargins);
    ui->textEdit->append(strSpacing);
    ui->textEdit->append("---------------");
    ui->textEdit->append("");

    //移动光标到最后一行
    ui->textEdit->moveCursor(QTextCursor::End);
}
