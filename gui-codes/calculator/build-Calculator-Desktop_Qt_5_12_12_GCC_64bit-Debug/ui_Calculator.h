/********************************************************************************
** Form generated from reading UI file 'Calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_1;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_eq;
    QPushButton *pushButton_2;
    QPushButton *pushButton_9;
    QPushButton *pushButton_3;
    QPushButton *pushButton_div;
    QPushButton *pushButton_0;
    QPushButton *pushButton_add;
    QPushButton *pushButton_min;
    QPushButton *pushButton_mul;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(352, 432);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(lineEdit);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Ubuntu\";\n"
"font-size: 44px;"));

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Ubuntu\";\n"
"font-size: 44px;"));

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Ubuntu\";\n"
"font-size: 44px;"));

        gridLayout->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_1 = new QPushButton(widget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Ubuntu\";\n"
"font-size: 44px;"));

        gridLayout->addWidget(pushButton_1, 0, 0, 1, 1);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Ubuntu\";\n"
"font-size: 44px;"));

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Ubuntu\";\n"
"font-size: 44px;"));

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_eq = new QPushButton(widget);
        pushButton_eq->setObjectName(QString::fromUtf8("pushButton_eq"));
        pushButton_eq->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Ubuntu\";\n"
"background-color: rgb(119, 118, 123);\n"
"font-size: 44px;"));

        gridLayout->addWidget(pushButton_eq, 3, 2, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Ubuntu\";\n"
"font-size: 44px;"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Ubuntu\";\n"
"font-size: 44px;"));

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Ubuntu\";\n"
"font-size: 44px;"));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_div = new QPushButton(widget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Ubuntu\";\n"
"font-size: 44px;background-color: rgb(153, 193, 241);"));

        gridLayout->addWidget(pushButton_div, 3, 0, 1, 1);

        pushButton_0 = new QPushButton(widget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Ubuntu\";\n"
"font-size: 44px;"));

        gridLayout->addWidget(pushButton_0, 3, 1, 1, 1);

        pushButton_add = new QPushButton(widget);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Ubuntu\";\n"
"font-size: 44px;background-color: rgb(153, 193, 241);"));

        gridLayout->addWidget(pushButton_add, 4, 0, 1, 1);

        pushButton_min = new QPushButton(widget);
        pushButton_min->setObjectName(QString::fromUtf8("pushButton_min"));
        pushButton_min->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Ubuntu\";\n"
"background-color: rgb(153, 193, 241);\n"
"font-size: 44px;"));

        gridLayout->addWidget(pushButton_min, 4, 1, 1, 1);

        pushButton_mul = new QPushButton(widget);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        pushButton_mul->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Ubuntu\";\n"
"background-color: rgb(153, 193, 241);\n"
"font-size: 44px;"));

        gridLayout->addWidget(pushButton_mul, 4, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 352, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButton_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton_eq->setText(QApplication::translate("MainWindow", "=", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButton_div->setText(QApplication::translate("MainWindow", "/", nullptr));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_add->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_min->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButton_mul->setText(QApplication::translate("MainWindow", "*", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
