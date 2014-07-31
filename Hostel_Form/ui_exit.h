/********************************************************************************
** Form generated from reading UI file 'exit.ui'
**
** Created: Thu Jul 31 12:37:58 2014
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXIT_H
#define UI_EXIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_exit
{
public:
    QLabel *label;

    void setupUi(QDialog *exit)
    {
        if (exit->objectName().isEmpty())
            exit->setObjectName(QString::fromUtf8("exit"));
        exit->resize(400, 300);
        label = new QLabel(exit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 60, 301, 171));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);

        retranslateUi(exit);

        QMetaObject::connectSlotsByName(exit);
    } // setupUi

    void retranslateUi(QDialog *exit)
    {
        exit->setWindowTitle(QApplication::translate("exit", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("exit", " Admission Process Completed", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class exit: public Ui_exit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXIT_H
