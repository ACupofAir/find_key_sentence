/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *tEdit_test_input;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTextBrowser *testBrower_key_sentence_output;
    QPushButton *btn_find_key_sentence;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(692, 677);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 70, 451, 421));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        tEdit_test_input = new QTextEdit(widget);
        tEdit_test_input->setObjectName(QString::fromUtf8("tEdit_test_input"));
        tEdit_test_input->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        tEdit_test_input->setMouseTracking(false);
        tEdit_test_input->setTabletTracking(false);
        tEdit_test_input->setContextMenuPolicy(Qt::DefaultContextMenu);

        verticalLayout->addWidget(tEdit_test_input);

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(110, 510, 451, 81));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        testBrower_key_sentence_output = new QTextBrowser(widget_2);
        testBrower_key_sentence_output->setObjectName(QString::fromUtf8("testBrower_key_sentence_output"));

        verticalLayout_2->addWidget(testBrower_key_sentence_output);

        btn_find_key_sentence = new QPushButton(centralWidget);
        btn_find_key_sentence->setObjectName(QString::fromUtf8("btn_find_key_sentence"));
        btn_find_key_sentence->setGeometry(QRect(230, 620, 231, 21));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Please input test:", nullptr));
        tEdit_test_input->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Key Sentence:", nullptr));
        btn_find_key_sentence->setText(QApplication::translate("MainWindow", "Find Key Sentence", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
