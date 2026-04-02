/**
 * @file      mywidget.cpp
 * @brief     主窗口类实现 - 计算器功能和布局演示
 * @author    LayoutDemo Team
 * @date      2026-04-02
 * @copyright Copyright © 2026 LayoutDemo. All rights reserved.
 */

#include "mywidget.h"
#include "ui_mywidget.h"

#include <QToolButton>
#include <QtMath>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
    , m_displayText("0")
    , m_pendingOperator("")
    , m_firstOperand(0.0)
    , m_secondOperand(0.0)
    , m_waitingForOperand(true)
    , m_memoryValue(0.0)
{
    ui->setupUi(this);
    setupConnections();
    updateDisplay();
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::setupConnections()
{
    connect(ui->btnNum0, &QPushButton::clicked, this, &MyWidget::onDigitClicked);
    connect(ui->btnNum1, &QPushButton::clicked, this, &MyWidget::onDigitClicked);
    connect(ui->btnNum2, &QPushButton::clicked, this, &MyWidget::onDigitClicked);
    connect(ui->btnNum3, &QPushButton::clicked, this, &MyWidget::onDigitClicked);
    connect(ui->btnNum4, &QPushButton::clicked, this, &MyWidget::onDigitClicked);
    connect(ui->btnNum5, &QPushButton::clicked, this, &MyWidget::onDigitClicked);
    connect(ui->btnNum6, &QPushButton::clicked, this, &MyWidget::onDigitClicked);
    connect(ui->btnNum7, &QPushButton::clicked, this, &MyWidget::onDigitClicked);
    connect(ui->btnNum8, &QPushButton::clicked, this, &MyWidget::onDigitClicked);
    connect(ui->btnNum9, &QPushButton::clicked, this, &MyWidget::onDigitClicked);

    connect(ui->btnPlus, &QPushButton::clicked, this, &MyWidget::onOperatorClicked);
    connect(ui->btnMinus, &QPushButton::clicked, this, &MyWidget::onOperatorClicked);
    connect(ui->btnMultiply, &QPushButton::clicked, this, &MyWidget::onOperatorClicked);
    connect(ui->btnDivision, &QPushButton::clicked, this, &MyWidget::onOperatorClicked);

    connect(ui->btnEqual, &QPushButton::clicked, this, &MyWidget::onEqualClicked);
    connect(ui->btnClear, &QPushButton::clicked, this, &MyWidget::onClearClicked);
    connect(ui->btnClearAll, &QPushButton::clicked, this, &MyWidget::onClearAllClicked);
    connect(ui->btnBackspace, &QPushButton::clicked, this, &MyWidget::onBackspaceClicked);
    connect(ui->btnPoint, &QPushButton::clicked, this, &MyWidget::onPointClicked);
    connect(ui->btnChangeSgin, &QPushButton::clicked, this, &MyWidget::onChangeSignClicked);
    connect(ui->btnSqrt, &QPushButton::clicked, this, &MyWidget::onSqrtClicked);
    connect(ui->btnPower, &QPushButton::clicked, this, &MyWidget::onPowerClicked);
    connect(ui->btnReciperoal, &QPushButton::clicked, this, &MyWidget::onReciprocalClicked);

    connect(ui->btnClearMem, &QPushButton::clicked, this, &MyWidget::onMemClicked);
    connect(ui->btnReadMem, &QPushButton::clicked, this, &MyWidget::onMemClicked);
    connect(ui->btnSetMem, &QPushButton::clicked, this, &MyWidget::onMemClicked);
    connect(ui->btnAddMem, &QPushButton::clicked, this, &MyWidget::onMemClicked);
}

void MyWidget::onDigitClicked()
{
    QPushButton *clickedBtn = qobject_cast<QPushButton *>(sender());
    if (!clickedBtn) {
        return;
    }
    QString digit = clickedBtn->text();

    if (m_waitingForOperand) {
        m_displayText = digit;
        m_waitingForOperand = false;
    } else {
        if (m_displayText == "0" && digit == "0") {
            return;
        }
        m_displayText += digit;
    }
    updateDisplay();
}

void MyWidget::onOperatorClicked()
{
    QPushButton *clickedBtn = qobject_cast<QPushButton *>(sender());
    if (!clickedBtn) {
        return;
    }
    QString op = clickedBtn->text();

    if (op == "x") {
        op = "*";
    } else if (op == "÷") {
        op = "/";
    }

    double currentValue = m_displayText.toDouble();

    if (!m_pendingOperator.isEmpty() && !m_waitingForOperand) {
        m_secondOperand = currentValue;
        calculate();
        m_firstOperand = m_displayText.toDouble();
    } else {
        m_firstOperand = currentValue;
    }

    m_pendingOperator = op;
    m_waitingForOperand = true;
}

void MyWidget::onEqualClicked()
{
    if (m_pendingOperator.isEmpty()) {
        return;
    }

    double currentValue = m_displayText.toDouble();
    m_secondOperand = currentValue;
    calculate();

    m_pendingOperator.clear();
    m_waitingForOperand = true;
}

void MyWidget::onClearClicked()
{
    m_displayText = "0";
    m_waitingForOperand = true;
    updateDisplay();
}

void MyWidget::onClearAllClicked()
{
    m_displayText = "0";
    m_pendingOperator.clear();
    m_firstOperand = 0.0;
    m_secondOperand = 0.0;
    m_waitingForOperand = true;
    updateDisplay();
}

void MyWidget::onBackspaceClicked()
{
    if (m_waitingForOperand) {
        return;
    }

    m_displayText.chop(1);
    if (m_displayText.isEmpty() || m_displayText == "-") {
        m_displayText = "0";
        m_waitingForOperand = true;
    }
    updateDisplay();
}

void MyWidget::onPointClicked()
{
    if (m_waitingForOperand) {
        m_displayText = "0.";
        m_waitingForOperand = false;
    } else if (!m_displayText.contains('.')) {
        m_displayText += '.';
    }
    updateDisplay();
}

void MyWidget::onChangeSignClicked()
{
    double value = m_displayText.toDouble();
    value = -value;
    m_displayText = QString::number(value);
    updateDisplay();
}

void MyWidget::onSqrtClicked()
{
    double value = m_displayText.toDouble();
    if (value < 0) {
        m_displayText = "Error";
    } else {
        value = qSqrt(value);
        m_displayText = QString::number(value);
    }
    m_waitingForOperand = true;
    updateDisplay();
}

void MyWidget::onPowerClicked()
{
    double value = m_displayText.toDouble();
    value = value * value;
    m_displayText = QString::number(value);
    m_waitingForOperand = true;
    updateDisplay();
}

void MyWidget::onReciprocalClicked()
{
    double value = m_displayText.toDouble();
    if (value == 0.0) {
        m_displayText = "Error";
    } else {
        value = 1.0 / value;
        m_displayText = QString::number(value);
    }
    m_waitingForOperand = true;
    updateDisplay();
}

void MyWidget::onMemClicked()
{
    QPushButton *clickedBtn = qobject_cast<QPushButton *>(sender());
    if (!clickedBtn) {
        return;
    }
    QString memOp = clickedBtn->text();

    if (memOp == "MC") {
        m_memoryValue = 0.0;
    } else if (memOp == "MR") {
        m_displayText = QString::number(m_memoryValue);
        m_waitingForOperand = true;
        updateDisplay();
    } else if (memOp == "MS") {
        m_memoryValue = m_displayText.toDouble();
        m_waitingForOperand = true;
    } else if (memOp == "M+") {
        m_memoryValue += m_displayText.toDouble();
        m_waitingForOperand = true;
    }
}

void MyWidget::updateDisplay()
{
    ui->lineEditDisplay->setText(m_displayText);
    ui->lineEditDisplay->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
}

void MyWidget::calculate()
{
    double result = 0.0;

    if (m_pendingOperator == "+") {
        result = m_firstOperand + m_secondOperand;
    } else if (m_pendingOperator == "-") {
        result = m_firstOperand - m_secondOperand;
    } else if (m_pendingOperator == "*") {
        result = m_firstOperand * m_secondOperand;
    } else if (m_pendingOperator == "/") {
        if (m_secondOperand == 0.0) {
            m_displayText = "Error";
            return;
        }
        result = m_firstOperand / m_secondOperand;
    } else {
        return;
    }

    m_displayText = QString::number(result);
    updateDisplay();
}

bool MyWidget::isOperator(const QString &text) const
{
    return text == "+" || text == "-" || text == "x" || text == "÷";
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

    QString strIndex = QString("[%1]----------").arg(index++);

    QString width = QString("按钮宽度: \t%1, %2, %3, %4")
                        .arg(ui->btnAdd->width())
                        .arg(ui->btnDel->width())
                        .arg(ui->btnModify->width())
                        .arg(ui->btnQuery->width());

    QMargins margins = ui->horizonwidget->layout()->contentsMargins();
    QString strmargins = QString("边距(左上右下)：\t%1, %2, %3, %4")
                            .arg(margins.left())
                            .arg(margins.top())
                            .arg(margins.right())
                            .arg(margins.bottom());

    int spacing = ui->horizonwidget->layout()->spacing();
    QString strSpacing = QString("间距：\t\t%1").arg(spacing);

    ui->textEdit->append(strIndex);
    ui->textEdit->append(width);
    ui->textEdit->append(strmargins);
    ui->textEdit->append(strSpacing);
    ui->textEdit->append("---------------");
    ui->textEdit->append("");

    ui->textEdit->moveCursor(QTextCursor::End);
}
