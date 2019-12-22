/********************************************************************************
** Form generated from reading UI file 'ExamOOP.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMOOP_H
#define UI_EXAMOOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExamOOPClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *updateButton;
    QPushButton *addButton;
    QLineEdit *idLineEdit;
    QLineEdit *xLineEdit;
    QLineEdit *yearLineEdit;
    QLineEdit *yLineEdit;
    QLineEdit *descrLineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ExamOOPClass)
    {
        if (ExamOOPClass->objectName().isEmpty())
            ExamOOPClass->setObjectName(QString::fromUtf8("ExamOOPClass"));
        ExamOOPClass->resize(600, 400);
        centralWidget = new QWidget(ExamOOPClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        updateButton = new QPushButton(centralWidget);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));

        gridLayout->addWidget(updateButton, 4, 2, 1, 1);

        addButton = new QPushButton(centralWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout->addWidget(addButton, 3, 2, 1, 1);

        idLineEdit = new QLineEdit(centralWidget);
        idLineEdit->setObjectName(QString::fromUtf8("idLineEdit"));

        gridLayout->addWidget(idLineEdit, 1, 1, 1, 1);

        xLineEdit = new QLineEdit(centralWidget);
        xLineEdit->setObjectName(QString::fromUtf8("xLineEdit"));

        gridLayout->addWidget(xLineEdit, 4, 1, 1, 1);

        yearLineEdit = new QLineEdit(centralWidget);
        yearLineEdit->setObjectName(QString::fromUtf8("yearLineEdit"));

        gridLayout->addWidget(yearLineEdit, 3, 1, 1, 1);

        yLineEdit = new QLineEdit(centralWidget);
        yLineEdit->setObjectName(QString::fromUtf8("yLineEdit"));

        gridLayout->addWidget(yLineEdit, 5, 1, 1, 1);

        descrLineEdit = new QLineEdit(centralWidget);
        descrLineEdit->setObjectName(QString::fromUtf8("descrLineEdit"));

        gridLayout->addWidget(descrLineEdit, 2, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 0, 0, 1, 3);

        ExamOOPClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ExamOOPClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        ExamOOPClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ExamOOPClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ExamOOPClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ExamOOPClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ExamOOPClass->setStatusBar(statusBar);

        retranslateUi(ExamOOPClass);

        QMetaObject::connectSlotsByName(ExamOOPClass);
    } // setupUi

    void retranslateUi(QMainWindow *ExamOOPClass)
    {
        ExamOOPClass->setWindowTitle(QApplication::translate("ExamOOPClass", "ExamOOP", nullptr));
        updateButton->setText(QApplication::translate("ExamOOPClass", "UPDATE", nullptr));
        addButton->setText(QApplication::translate("ExamOOPClass", "ADD", nullptr));
        label->setText(QApplication::translate("ExamOOPClass", "ID", nullptr));
        label_2->setText(QApplication::translate("ExamOOPClass", "Description", nullptr));
        label_3->setText(QApplication::translate("ExamOOPClass", "Year", nullptr));
        label_4->setText(QApplication::translate("ExamOOPClass", "X:", nullptr));
        label_5->setText(QApplication::translate("ExamOOPClass", "Y:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExamOOPClass: public Ui_ExamOOPClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMOOP_H
