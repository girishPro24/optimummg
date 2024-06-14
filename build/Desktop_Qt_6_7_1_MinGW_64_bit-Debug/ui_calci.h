/********************************************************************************
** Form generated from reading UI file 'calci.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCI_H
#define UI_CALCI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calci
{
public:
    QWidget *centralwidget;
    QLineEdit *display;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *add;
    QPushButton *subtra;
    QPushButton *multiply;
    QPushButton *divide;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *memory;
    QPushButton *button6;
    QPushButton *button9;
    QPushButton *button5;
    QPushButton *equal;
    QPushButton *button1;
    QPushButton *button;
    QPushButton *button2;
    QPushButton *memoryplus;
    QPushButton *memoryminus;
    QPushButton *button0;
    QPushButton *button3;
    QPushButton *button4;
    QPushButton *clear;
    QPushButton *button8;
    QLineEdit *display2;
    QLineEdit *display3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *calci)
    {
        if (calci->objectName().isEmpty())
            calci->setObjectName("calci");
        calci->resize(800, 600);
        centralwidget = new QWidget(calci);
        centralwidget->setObjectName("centralwidget");
        display = new QLineEdit(centralwidget);
        display->setObjectName("display");
        display->setGeometry(QRect(40, 40, 291, 101));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(40, 150, 721, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        add = new QPushButton(horizontalLayoutWidget);
        add->setObjectName("add");
        add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #FF8C00;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}\n"
"\n"
"QPushButtonpressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}"));

        horizontalLayout->addWidget(add);

        subtra = new QPushButton(horizontalLayoutWidget);
        subtra->setObjectName("subtra");
        subtra->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #FF8C00;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}\n"
"\n"
"QPushButtonpressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}"));

        horizontalLayout->addWidget(subtra);

        multiply = new QPushButton(horizontalLayoutWidget);
        multiply->setObjectName("multiply");
        multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #FF8C00;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}\n"
"\n"
"QPushButtonpressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}"));

        horizontalLayout->addWidget(multiply);

        divide = new QPushButton(horizontalLayoutWidget);
        divide->setObjectName("divide");
        divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #FF8C00;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}\n"
"\n"
"QPushButtonpressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}"));

        horizontalLayout->addWidget(divide);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(40, 230, 721, 217));
        gridLayoutWidget->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}\n"
"\n"
"QPushButtonpressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}"));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        memory = new QPushButton(gridLayoutWidget);
        memory->setObjectName("memory");
        memory->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}\n"
"\n"
"QPushButtonpressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}"));

        gridLayout->addWidget(memory, 5, 1, 1, 1);

        button6 = new QPushButton(gridLayoutWidget);
        button6->setObjectName("button6");
        button6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}\n"
"\n"
"QPushButtonpressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}"));

        gridLayout->addWidget(button6, 1, 2, 1, 1);

        button9 = new QPushButton(gridLayoutWidget);
        button9->setObjectName("button9");
        button9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}\n"
"\n"
"QPushButtonpressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}"));

        gridLayout->addWidget(button9, 2, 2, 1, 1);

        button5 = new QPushButton(gridLayoutWidget);
        button5->setObjectName("button5");
        button5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}\n"
"\n"
"QPushButtonpressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}"));

        gridLayout->addWidget(button5, 1, 1, 1, 1);

        equal = new QPushButton(gridLayoutWidget);
        equal->setObjectName("equal");
        equal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}\n"
"\n"
"QPushButtonpressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}"));

        gridLayout->addWidget(equal, 4, 2, 1, 1);

        button1 = new QPushButton(gridLayoutWidget);
        button1->setObjectName("button1");
        button1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}\n"
"\n"
"QPushButtonpressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}"));

        gridLayout->addWidget(button1, 0, 0, 1, 1);

        button = new QPushButton(gridLayoutWidget);
        button->setObjectName("button");
        button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}\n"
"\n"
"QPushButtonpressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}"));

        gridLayout->addWidget(button, 2, 0, 1, 1);

        button2 = new QPushButton(gridLayoutWidget);
        button2->setObjectName("button2");
        button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}\n"
"\n"
"QPushButtonpressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}"));

        gridLayout->addWidget(button2, 0, 1, 1, 1);

        memoryplus = new QPushButton(gridLayoutWidget);
        memoryplus->setObjectName("memoryplus");
        memoryplus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}\n"
"\n"
"QPushButtonpressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}"));

        gridLayout->addWidget(memoryplus, 5, 0, 1, 1);

        memoryminus = new QPushButton(gridLayoutWidget);
        memoryminus->setObjectName("memoryminus");
        memoryminus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}\n"
"\n"
"QPushButtonpressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}"));

        gridLayout->addWidget(memoryminus, 5, 2, 1, 1);

        button0 = new QPushButton(gridLayoutWidget);
        button0->setObjectName("button0");
        button0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}\n"
"\n"
"QPushButtonpressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}"));

        gridLayout->addWidget(button0, 4, 1, 1, 1);

        button3 = new QPushButton(gridLayoutWidget);
        button3->setObjectName("button3");
        button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}\n"
"\n"
"QPushButtonpressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}"));

        gridLayout->addWidget(button3, 0, 2, 1, 1);

        button4 = new QPushButton(gridLayoutWidget);
        button4->setObjectName("button4");
        button4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}\n"
"\n"
"QPushButtonpressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}"));

        gridLayout->addWidget(button4, 1, 0, 1, 1);

        clear = new QPushButton(gridLayoutWidget);
        clear->setObjectName("clear");
        clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}\n"
"\n"
"QPushButtonpressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}"));

        gridLayout->addWidget(clear, 4, 0, 1, 1);

        button8 = new QPushButton(gridLayoutWidget);
        button8->setObjectName("button8");
        button8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #C0C0C0;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}\n"
"\n"
"QPushButtonpressed{\n"
"background-color: #A9A9A9;\n"
"border: 1px solidgray;\n"
"padding :5px\n"
"}"));

        gridLayout->addWidget(button8, 2, 1, 1, 1);

        display2 = new QLineEdit(centralwidget);
        display2->setObjectName("display2");
        display2->setGeometry(QRect(352, 40, 131, 101));
        display3 = new QLineEdit(centralwidget);
        display3->setObjectName("display3");
        display3->setGeometry(QRect(510, 40, 261, 101));
        calci->setCentralWidget(centralwidget);
        menubar = new QMenuBar(calci);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        calci->setMenuBar(menubar);
        statusbar = new QStatusBar(calci);
        statusbar->setObjectName("statusbar");
        calci->setStatusBar(statusbar);

        retranslateUi(calci);

        QMetaObject::connectSlotsByName(calci);
    } // setupUi

    void retranslateUi(QMainWindow *calci)
    {
        calci->setWindowTitle(QCoreApplication::translate("calci", "calci", nullptr));
        add->setText(QCoreApplication::translate("calci", "add", nullptr));
        subtra->setText(QCoreApplication::translate("calci", "sub", nullptr));
        multiply->setText(QCoreApplication::translate("calci", "mul", nullptr));
        divide->setText(QCoreApplication::translate("calci", "div", nullptr));
        memory->setText(QCoreApplication::translate("calci", "Memory", nullptr));
        button6->setText(QCoreApplication::translate("calci", "6", nullptr));
        button9->setText(QCoreApplication::translate("calci", "9", nullptr));
        button5->setText(QCoreApplication::translate("calci", "5", nullptr));
        equal->setText(QCoreApplication::translate("calci", "equal", nullptr));
        button1->setText(QCoreApplication::translate("calci", "1", nullptr));
        button->setText(QCoreApplication::translate("calci", "7", nullptr));
        button2->setText(QCoreApplication::translate("calci", "2", nullptr));
        memoryplus->setText(QCoreApplication::translate("calci", "Memory+", nullptr));
        memoryminus->setText(QCoreApplication::translate("calci", "Memory-", nullptr));
        button0->setText(QCoreApplication::translate("calci", "0", nullptr));
        button3->setText(QCoreApplication::translate("calci", "3", nullptr));
        button4->setText(QCoreApplication::translate("calci", "4", nullptr));
        clear->setText(QCoreApplication::translate("calci", "clear", nullptr));
        button8->setText(QCoreApplication::translate("calci", "8", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calci: public Ui_calci {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCI_H
