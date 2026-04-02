/**
 * @file      mywidget.h
 * @brief     主窗口类定义 - 包含计算器功能和布局演示
 * @author    LayoutDemo Team
 * @date      2026-04-02
 * @copyright Copyright © 2026 LayoutDemo. All rights reserved.
 */

#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class MyWidget;
}
QT_END_NAMESPACE

/**
 * @class MyWidget
 * @brief 主窗口类，集成了计算器功能和多种布局演示
 *
 * 该类实现了：
 * - 标准计算器功能（四则运算、科学计算、内存操作）
 * - 水平布局演示
 * - 栅格布局演示
 * - 表单布局演示
 * - 窗口大小变化事件监控
 */
class MyWidget : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief 构造函数
     * @param parent 父窗口指针，默认为 nullptr
     */
    explicit MyWidget(QWidget *parent = nullptr);

    /**
     * @brief 析构函数
     */
    ~MyWidget();

protected:
    /**
     * @brief 窗口大小变化事件处理
     * @param event 大小变化事件对象
     *
     * 当窗口大小改变时，记录布局信息到文本编辑器中，
     * 用于演示和调试布局参数的变化。
     */
    void resizeEvent(QResizeEvent *event) override;

private slots:
    /** @brief 数字按钮点击槽函数 */
    void onDigitClicked();

    /** @brief 运算符按钮点击槽函数 */
    void onOperatorClicked();

    /** @brief 等号按钮点击槽函数 */
    void onEqualClicked();

    /** @brief 清除当前输入槽函数 */
    void onClearClicked();

    /** @brief 清除所有状态槽函数 */
    void onClearAllClicked();

    /** @brief 退格按钮点击槽函数 */
    void onBackspaceClicked();

    /** @brief 小数点按钮点击槽函数 */
    void onPointClicked();

    /** @brief 正负号切换槽函数 */
    void onChangeSignClicked();

    /** @brief 平方根计算槽函数 */
    void onSqrtClicked();

    /** @brief 平方计算槽函数 */
    void onPowerClicked();

    /** @brief 倒数计算槽函数 */
    void onReciprocalClicked();

    /** @brief 内存操作槽函数（MC/MR/MS/M+） */
    void onMemClicked();

private:
    /**
     * @brief 建立信号槽连接
     *
     * 将 UI 按钮的点击信号连接到对应的槽函数，
     * 使用 Qt5 新式语法确保编译期类型检查。
     */
    void setupConnections();

    /**
     * @brief 更新显示屏内容
     *
     * 将当前显示文本设置到 QLineEdit 控件，
     * 并设置右对齐显示。
     */
    void updateDisplay();

    /**
     * @brief 执行计算
     *
     * 根据当前的操作符和操作数执行相应的数学运算，
     * 处理除零错误等异常情况。
     */
    void calculate();

    /**
     * @brief 判断文本是否为运算符
     * @param text 待判断的文本
     * @return true 如果是运算符，false 否则
     */
    bool isOperator(const QString &text) const;

private:
    Ui::MyWidget *ui;              ///< UI 界面指针
    QString m_displayText;          ///< 当前显示的文本
    QString m_pendingOperator;      ///< 待处理的运算符
    double m_firstOperand;          ///< 第一个操作数
    double m_secondOperand;         ///< 第二个操作数
    bool m_waitingForOperand;       ///< 是否等待输入新操作数
    double m_memoryValue;           ///< 内存存储的值
};

#endif // MYWIDGET_H
