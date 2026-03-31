/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QWidget *horizonwidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd;
    QPushButton *btnDel;
    QPushButton *btnModify;
    QPushButton *btnQuery;
    QTextEdit *textEdit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEditDisplay;
    QPushButton *btnBackspace;
    QPushButton *btnClear;
    QPushButton *btnClearAll;
    QPushButton *btnClearMem;
    QPushButton *btnNum7;
    QPushButton *btnNum8;
    QPushButton *btnNum9;
    QPushButton *btnDivision;
    QPushButton *btnSqrt;
    QPushButton *btnReadMem;
    QPushButton *btnNum4;
    QPushButton *btnNum5;
    QPushButton *btnNum6;
    QPushButton *btnMultiply;
    QPushButton *btnPower;
    QPushButton *btnSetMem;
    QPushButton *btnNum1;
    QPushButton *btnNum2;
    QPushButton *btnNum3;
    QPushButton *btnMinus;
    QPushButton *btnReciperoal;
    QPushButton *btnAddMem;
    QPushButton *btnNum0;
    QPushButton *btnPoint;
    QPushButton *btnChangeSgin;
    QPushButton *btnPlus;
    QPushButton *btnEqual;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout;
    QLabel *labelName;
    QLineEdit *lineEditName;
    QLabel *labelEmail;
    QLineEdit *lineEditEmail;
    QLabel *labelRole;
    QComboBox *comboBoxRole;
    QLabel *labelYears;
    QSpinBox *spinBoxYears;
    QPushButton *btnSubmit;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName("MyWidget");
        MyWidget->resize(957, 549);
        QFont font;
        font.setPointSize(14);
        MyWidget->setFont(font);
        gridLayout_2 = new QGridLayout(MyWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(MyWidget);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizonwidget = new QWidget(groupBox);
        horizonwidget->setObjectName("horizonwidget");
        horizontalLayout = new QHBoxLayout(horizonwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        btnAdd = new QPushButton(horizonwidget);
        btnAdd->setObjectName("btnAdd");

        horizontalLayout->addWidget(btnAdd);

        btnDel = new QPushButton(horizonwidget);
        btnDel->setObjectName("btnDel");

        horizontalLayout->addWidget(btnDel);

        btnModify = new QPushButton(horizonwidget);
        btnModify->setObjectName("btnModify");

        horizontalLayout->addWidget(btnModify);

        btnQuery = new QPushButton(horizonwidget);
        btnQuery->setObjectName("btnQuery");

        horizontalLayout->addWidget(btnQuery);

        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 2);

        verticalLayout->addWidget(horizonwidget);

        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName("textEdit");
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
" color: #0080ce;\n"
"}\n"
""));

        verticalLayout->addWidget(textEdit);


        gridLayout_2->addWidget(groupBox, 0, 0, 2, 1);

        groupBox_2 = new QGroupBox(MyWidget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName("gridLayout");
        lineEditDisplay = new QLineEdit(groupBox_2);
        lineEditDisplay->setObjectName("lineEditDisplay");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditDisplay->sizePolicy().hasHeightForWidth());
        lineEditDisplay->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEditDisplay, 0, 0, 1, 6);

        btnBackspace = new QPushButton(groupBox_2);
        btnBackspace->setObjectName("btnBackspace");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnBackspace->sizePolicy().hasHeightForWidth());
        btnBackspace->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnBackspace, 1, 0, 1, 2);

        btnClear = new QPushButton(groupBox_2);
        btnClear->setObjectName("btnClear");
        sizePolicy1.setHeightForWidth(btnClear->sizePolicy().hasHeightForWidth());
        btnClear->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnClear, 1, 2, 1, 2);

        btnClearAll = new QPushButton(groupBox_2);
        btnClearAll->setObjectName("btnClearAll");
        sizePolicy1.setHeightForWidth(btnClearAll->sizePolicy().hasHeightForWidth());
        btnClearAll->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnClearAll, 1, 4, 1, 2);

        btnClearMem = new QPushButton(groupBox_2);
        btnClearMem->setObjectName("btnClearMem");
        sizePolicy1.setHeightForWidth(btnClearMem->sizePolicy().hasHeightForWidth());
        btnClearMem->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnClearMem, 2, 0, 1, 1);

        btnNum7 = new QPushButton(groupBox_2);
        btnNum7->setObjectName("btnNum7");
        sizePolicy1.setHeightForWidth(btnNum7->sizePolicy().hasHeightForWidth());
        btnNum7->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnNum7, 2, 1, 1, 1);

        btnNum8 = new QPushButton(groupBox_2);
        btnNum8->setObjectName("btnNum8");
        sizePolicy1.setHeightForWidth(btnNum8->sizePolicy().hasHeightForWidth());
        btnNum8->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnNum8, 2, 2, 1, 1);

        btnNum9 = new QPushButton(groupBox_2);
        btnNum9->setObjectName("btnNum9");
        sizePolicy1.setHeightForWidth(btnNum9->sizePolicy().hasHeightForWidth());
        btnNum9->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnNum9, 2, 3, 1, 1);

        btnDivision = new QPushButton(groupBox_2);
        btnDivision->setObjectName("btnDivision");
        sizePolicy1.setHeightForWidth(btnDivision->sizePolicy().hasHeightForWidth());
        btnDivision->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnDivision, 2, 4, 1, 1);

        btnSqrt = new QPushButton(groupBox_2);
        btnSqrt->setObjectName("btnSqrt");
        sizePolicy1.setHeightForWidth(btnSqrt->sizePolicy().hasHeightForWidth());
        btnSqrt->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnSqrt, 2, 5, 1, 1);

        btnReadMem = new QPushButton(groupBox_2);
        btnReadMem->setObjectName("btnReadMem");
        sizePolicy1.setHeightForWidth(btnReadMem->sizePolicy().hasHeightForWidth());
        btnReadMem->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnReadMem, 3, 0, 1, 1);

        btnNum4 = new QPushButton(groupBox_2);
        btnNum4->setObjectName("btnNum4");
        sizePolicy1.setHeightForWidth(btnNum4->sizePolicy().hasHeightForWidth());
        btnNum4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnNum4, 3, 1, 1, 1);

        btnNum5 = new QPushButton(groupBox_2);
        btnNum5->setObjectName("btnNum5");
        sizePolicy1.setHeightForWidth(btnNum5->sizePolicy().hasHeightForWidth());
        btnNum5->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnNum5, 3, 2, 1, 1);

        btnNum6 = new QPushButton(groupBox_2);
        btnNum6->setObjectName("btnNum6");
        sizePolicy1.setHeightForWidth(btnNum6->sizePolicy().hasHeightForWidth());
        btnNum6->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnNum6, 3, 3, 1, 1);

        btnMultiply = new QPushButton(groupBox_2);
        btnMultiply->setObjectName("btnMultiply");
        sizePolicy1.setHeightForWidth(btnMultiply->sizePolicy().hasHeightForWidth());
        btnMultiply->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnMultiply, 3, 4, 1, 1);

        btnPower = new QPushButton(groupBox_2);
        btnPower->setObjectName("btnPower");
        sizePolicy1.setHeightForWidth(btnPower->sizePolicy().hasHeightForWidth());
        btnPower->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnPower, 3, 5, 1, 1);

        btnSetMem = new QPushButton(groupBox_2);
        btnSetMem->setObjectName("btnSetMem");
        sizePolicy1.setHeightForWidth(btnSetMem->sizePolicy().hasHeightForWidth());
        btnSetMem->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnSetMem, 4, 0, 1, 1);

        btnNum1 = new QPushButton(groupBox_2);
        btnNum1->setObjectName("btnNum1");
        sizePolicy1.setHeightForWidth(btnNum1->sizePolicy().hasHeightForWidth());
        btnNum1->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnNum1, 4, 1, 1, 1);

        btnNum2 = new QPushButton(groupBox_2);
        btnNum2->setObjectName("btnNum2");
        sizePolicy1.setHeightForWidth(btnNum2->sizePolicy().hasHeightForWidth());
        btnNum2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnNum2, 4, 2, 1, 1);

        btnNum3 = new QPushButton(groupBox_2);
        btnNum3->setObjectName("btnNum3");
        sizePolicy1.setHeightForWidth(btnNum3->sizePolicy().hasHeightForWidth());
        btnNum3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnNum3, 4, 3, 1, 1);

        btnMinus = new QPushButton(groupBox_2);
        btnMinus->setObjectName("btnMinus");
        sizePolicy1.setHeightForWidth(btnMinus->sizePolicy().hasHeightForWidth());
        btnMinus->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnMinus, 4, 4, 1, 1);

        btnReciperoal = new QPushButton(groupBox_2);
        btnReciperoal->setObjectName("btnReciperoal");
        sizePolicy1.setHeightForWidth(btnReciperoal->sizePolicy().hasHeightForWidth());
        btnReciperoal->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnReciperoal, 4, 5, 1, 1);

        btnAddMem = new QPushButton(groupBox_2);
        btnAddMem->setObjectName("btnAddMem");
        sizePolicy1.setHeightForWidth(btnAddMem->sizePolicy().hasHeightForWidth());
        btnAddMem->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnAddMem, 5, 0, 1, 1);

        btnNum0 = new QPushButton(groupBox_2);
        btnNum0->setObjectName("btnNum0");
        sizePolicy1.setHeightForWidth(btnNum0->sizePolicy().hasHeightForWidth());
        btnNum0->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnNum0, 5, 1, 1, 1);

        btnPoint = new QPushButton(groupBox_2);
        btnPoint->setObjectName("btnPoint");
        sizePolicy1.setHeightForWidth(btnPoint->sizePolicy().hasHeightForWidth());
        btnPoint->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnPoint, 5, 2, 1, 1);

        btnChangeSgin = new QPushButton(groupBox_2);
        btnChangeSgin->setObjectName("btnChangeSgin");
        sizePolicy1.setHeightForWidth(btnChangeSgin->sizePolicy().hasHeightForWidth());
        btnChangeSgin->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnChangeSgin, 5, 3, 1, 1);

        btnPlus = new QPushButton(groupBox_2);
        btnPlus->setObjectName("btnPlus");
        sizePolicy1.setHeightForWidth(btnPlus->sizePolicy().hasHeightForWidth());
        btnPlus->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnPlus, 5, 4, 1, 1);

        btnEqual = new QPushButton(groupBox_2);
        btnEqual->setObjectName("btnEqual");
        sizePolicy1.setHeightForWidth(btnEqual->sizePolicy().hasHeightForWidth());
        btnEqual->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnEqual, 5, 5, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(MyWidget);
        groupBox_3->setObjectName("groupBox_3");
        formLayout = new QFormLayout(groupBox_3);
        formLayout->setObjectName("formLayout");
        labelName = new QLabel(groupBox_3);
        labelName->setObjectName("labelName");

        formLayout->setWidget(0, QFormLayout::LabelRole, labelName);

        lineEditName = new QLineEdit(groupBox_3);
        lineEditName->setObjectName("lineEditName");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditName);

        labelEmail = new QLabel(groupBox_3);
        labelEmail->setObjectName("labelEmail");

        formLayout->setWidget(1, QFormLayout::LabelRole, labelEmail);

        lineEditEmail = new QLineEdit(groupBox_3);
        lineEditEmail->setObjectName("lineEditEmail");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditEmail);

        labelRole = new QLabel(groupBox_3);
        labelRole->setObjectName("labelRole");

        formLayout->setWidget(2, QFormLayout::LabelRole, labelRole);

        comboBoxRole = new QComboBox(groupBox_3);
        comboBoxRole->addItem(QString());
        comboBoxRole->addItem(QString());
        comboBoxRole->addItem(QString());
        comboBoxRole->setObjectName("comboBoxRole");

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBoxRole);

        labelYears = new QLabel(groupBox_3);
        labelYears->setObjectName("labelYears");

        formLayout->setWidget(3, QFormLayout::LabelRole, labelYears);

        spinBoxYears = new QSpinBox(groupBox_3);
        spinBoxYears->setObjectName("spinBoxYears");

        formLayout->setWidget(3, QFormLayout::FieldRole, spinBoxYears);

        btnSubmit = new QPushButton(groupBox_3);
        btnSubmit->setObjectName("btnSubmit");

        formLayout->setWidget(4, QFormLayout::FieldRole, btnSubmit);


        gridLayout_2->addWidget(groupBox_3, 1, 1, 1, 1);


        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QCoreApplication::translate("MyWidget", "MyWidget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MyWidget", "\346\260\264\345\271\263\345\270\203\345\261\200", nullptr));
        btnAdd->setText(QCoreApplication::translate("MyWidget", "\345\242\236\345\212\240\350\256\260\345\275\225", nullptr));
        btnDel->setText(QCoreApplication::translate("MyWidget", "\345\210\240\351\231\244\350\256\260\345\275\225", nullptr));
        btnModify->setText(QCoreApplication::translate("MyWidget", "\344\277\256\346\224\271\350\256\260\345\275\225", nullptr));
        btnQuery->setText(QCoreApplication::translate("MyWidget", "\346\237\245\350\257\242\350\256\260\345\275\225", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MyWidget", "\346\240\205\346\240\274\345\270\203\345\261\200", nullptr));
        btnBackspace->setText(QCoreApplication::translate("MyWidget", "Backspace", nullptr));
        btnClear->setText(QCoreApplication::translate("MyWidget", "Clear", nullptr));
        btnClearAll->setText(QCoreApplication::translate("MyWidget", "Clear All", nullptr));
        btnClearMem->setText(QCoreApplication::translate("MyWidget", "MC", nullptr));
        btnNum7->setText(QCoreApplication::translate("MyWidget", "7", nullptr));
        btnNum8->setText(QCoreApplication::translate("MyWidget", "8", nullptr));
        btnNum9->setText(QCoreApplication::translate("MyWidget", "9", nullptr));
        btnDivision->setText(QCoreApplication::translate("MyWidget", "\303\267", nullptr));
        btnSqrt->setText(QCoreApplication::translate("MyWidget", "Sqrt", nullptr));
        btnReadMem->setText(QCoreApplication::translate("MyWidget", "MR", nullptr));
        btnNum4->setText(QCoreApplication::translate("MyWidget", "4", nullptr));
        btnNum5->setText(QCoreApplication::translate("MyWidget", "5", nullptr));
        btnNum6->setText(QCoreApplication::translate("MyWidget", "6", nullptr));
        btnMultiply->setText(QCoreApplication::translate("MyWidget", "x", nullptr));
        btnPower->setText(QCoreApplication::translate("MyWidget", "x\302\262", nullptr));
        btnSetMem->setText(QCoreApplication::translate("MyWidget", "MS", nullptr));
        btnNum1->setText(QCoreApplication::translate("MyWidget", "1", nullptr));
        btnNum2->setText(QCoreApplication::translate("MyWidget", "2", nullptr));
        btnNum3->setText(QCoreApplication::translate("MyWidget", "3", nullptr));
        btnMinus->setText(QCoreApplication::translate("MyWidget", "-", nullptr));
        btnReciperoal->setText(QCoreApplication::translate("MyWidget", "1/x", nullptr));
        btnAddMem->setText(QCoreApplication::translate("MyWidget", "M+", nullptr));
        btnNum0->setText(QCoreApplication::translate("MyWidget", "0", nullptr));
        btnPoint->setText(QCoreApplication::translate("MyWidget", ".", nullptr));
        btnChangeSgin->setText(QCoreApplication::translate("MyWidget", "\302\261", nullptr));
        btnPlus->setText(QCoreApplication::translate("MyWidget", "+", nullptr));
        btnEqual->setText(QCoreApplication::translate("MyWidget", "=", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MyWidget", "\350\241\250\345\215\225\345\270\203\345\261\200", nullptr));
        labelName->setText(QCoreApplication::translate("MyWidget", "\345\247\223\345\220\215", nullptr));
        lineEditName->setText(QCoreApplication::translate("MyWidget", "\346\240\221\344\270\213\344\271\213\347\214\253", nullptr));
        labelEmail->setText(QCoreApplication::translate("MyWidget", "\351\202\256\347\256\261", nullptr));
        lineEditEmail->setText(QCoreApplication::translate("MyWidget", "1234@foxmail.com", nullptr));
        labelRole->setText(QCoreApplication::translate("MyWidget", "\345\262\227\344\275\215", nullptr));
        comboBoxRole->setItemText(0, QCoreApplication::translate("MyWidget", "\347\240\224\345\217\221", nullptr));
        comboBoxRole->setItemText(1, QCoreApplication::translate("MyWidget", "\351\224\200\345\224\256", nullptr));
        comboBoxRole->setItemText(2, QCoreApplication::translate("MyWidget", "\350\264\242\345\212\241", nullptr));

        labelYears->setText(QCoreApplication::translate("MyWidget", "\345\267\245\344\275\234\347\273\217\351\252\214", nullptr));
        btnSubmit->setText(QCoreApplication::translate("MyWidget", "\346\217\220\344\272\244\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
