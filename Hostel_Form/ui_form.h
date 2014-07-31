/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created: Thu Jul 31 13:40:56 2014
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_36;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_37;
    QLabel *label_37;
    QLineEdit *lineEdit_21;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QHBoxLayout *horizontalLayout_38;
    QLabel *label_38;
    QLineEdit *lineEdit_22;
    QHBoxLayout *horizontalLayout_39;
    QLabel *label_39;
    QLineEdit *lineEdit_23;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_40;
    QDateEdit *dateEdit_4;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_41;
    QLineEdit *lineEdit_24;
    QHBoxLayout *horizontalLayout_42;
    QLabel *label_42;
    QLineEdit *lineEdit_25;
    QHBoxLayout *horizontalLayout_44;
    QLabel *label_44;
    QLineEdit *lineEdit_26;
    QHBoxLayout *horizontalLayout_43;
    QLabel *label_43;
    QTextEdit *textEdit_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QSpinBox *spinBox;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_14;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_14;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpinBox *spinBox_2;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_34;
    QRadioButton *radioButton_15;
    QRadioButton *radioButton_16;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QSpinBox *spinBox_3;
    QLabel *label_35;
    QHBoxLayout *horizontalLayout_35;
    QRadioButton *radioButton_17;
    QRadioButton *radioButton_18;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QTextBrowser *textBrowser_2;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QWidget *tab_2;
    QTableWidget *tableWidget;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(734, 527);
        centralWidget = new QWidget(Form);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 194, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(255, 224, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(127, 97, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(170, 129, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        tabWidget->setPalette(palette);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 10, 711, 431));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        verticalLayout_7->addWidget(label_3);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        label_36 = new QLabel(widget);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        horizontalLayout_36->addWidget(label_36);

        lineEdit_5 = new QLineEdit(widget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_36->addWidget(lineEdit_5);


        verticalLayout_7->addLayout(horizontalLayout_36);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setSpacing(6);
        horizontalLayout_37->setObjectName(QString::fromUtf8("horizontalLayout_37"));
        label_37 = new QLabel(widget);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        horizontalLayout_37->addWidget(label_37);

        lineEdit_21 = new QLineEdit(widget);
        lineEdit_21->setObjectName(QString::fromUtf8("lineEdit_21"));

        horizontalLayout_37->addWidget(lineEdit_21);


        verticalLayout_7->addLayout(horizontalLayout_37);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_4->addWidget(radioButton_2);

        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout_4->addWidget(radioButton);


        verticalLayout_7->addLayout(horizontalLayout_4);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setSpacing(6);
        horizontalLayout_38->setObjectName(QString::fromUtf8("horizontalLayout_38"));
        label_38 = new QLabel(widget);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        horizontalLayout_38->addWidget(label_38);

        lineEdit_22 = new QLineEdit(widget);
        lineEdit_22->setObjectName(QString::fromUtf8("lineEdit_22"));

        horizontalLayout_38->addWidget(lineEdit_22);


        verticalLayout_7->addLayout(horizontalLayout_38);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setSpacing(6);
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));
        label_39 = new QLabel(widget);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        horizontalLayout_39->addWidget(label_39);

        lineEdit_23 = new QLineEdit(widget);
        lineEdit_23->setObjectName(QString::fromUtf8("lineEdit_23"));

        horizontalLayout_39->addWidget(lineEdit_23);


        verticalLayout_7->addLayout(horizontalLayout_39);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setSpacing(6);
        horizontalLayout_40->setObjectName(QString::fromUtf8("horizontalLayout_40"));
        label_40 = new QLabel(widget);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        horizontalLayout_40->addWidget(label_40);

        dateEdit_4 = new QDateEdit(widget);
        dateEdit_4->setObjectName(QString::fromUtf8("dateEdit_4"));
        dateEdit_4->setDateTime(QDateTime(QDate(1980, 1, 1), QTime(0, 0, 0)));

        horizontalLayout_40->addWidget(dateEdit_4);


        verticalLayout_7->addLayout(horizontalLayout_40);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setSpacing(6);
        horizontalLayout_41->setObjectName(QString::fromUtf8("horizontalLayout_41"));
        label_41 = new QLabel(widget);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        horizontalLayout_41->addWidget(label_41);

        lineEdit_24 = new QLineEdit(widget);
        lineEdit_24->setObjectName(QString::fromUtf8("lineEdit_24"));

        horizontalLayout_41->addWidget(lineEdit_24);


        verticalLayout_7->addLayout(horizontalLayout_41);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setSpacing(6);
        horizontalLayout_42->setObjectName(QString::fromUtf8("horizontalLayout_42"));
        label_42 = new QLabel(widget);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        horizontalLayout_42->addWidget(label_42);

        lineEdit_25 = new QLineEdit(widget);
        lineEdit_25->setObjectName(QString::fromUtf8("lineEdit_25"));

        horizontalLayout_42->addWidget(lineEdit_25);


        verticalLayout_7->addLayout(horizontalLayout_42);

        horizontalLayout_44 = new QHBoxLayout();
        horizontalLayout_44->setSpacing(6);
        horizontalLayout_44->setObjectName(QString::fromUtf8("horizontalLayout_44"));
        label_44 = new QLabel(widget);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        horizontalLayout_44->addWidget(label_44);

        lineEdit_26 = new QLineEdit(widget);
        lineEdit_26->setObjectName(QString::fromUtf8("lineEdit_26"));

        horizontalLayout_44->addWidget(lineEdit_26);


        verticalLayout_7->addLayout(horizontalLayout_44);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setSpacing(6);
        horizontalLayout_43->setObjectName(QString::fromUtf8("horizontalLayout_43"));
        label_43 = new QLabel(widget);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        horizontalLayout_43->addWidget(label_43);

        textEdit_4 = new QTextEdit(widget);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));

        horizontalLayout_43->addWidget(textEdit_4);


        verticalLayout_7->addLayout(horizontalLayout_43);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(1000000000);

        horizontalLayout_5->addWidget(spinBox);


        verticalLayout_7->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Comic Sans MS"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_7->setFont(font1);

        verticalLayout_6->addWidget(label_7);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font2;
        font2.setPointSize(9);
        label_9->setFont(font2);

        verticalLayout_6->addWidget(label_9);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        radioButton_13 = new QRadioButton(widget);
        radioButton_13->setObjectName(QString::fromUtf8("radioButton_13"));

        horizontalLayout_14->addWidget(radioButton_13);

        radioButton_14 = new QRadioButton(widget);
        radioButton_14->setObjectName(QString::fromUtf8("radioButton_14"));

        horizontalLayout_14->addWidget(radioButton_14);


        verticalLayout_6->addLayout(horizontalLayout_14);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        spinBox_2 = new QSpinBox(widget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setEnabled(false);
        spinBox_2->setMaximum(1000000000);

        horizontalLayout_2->addWidget(spinBox_2);


        verticalLayout_6->addLayout(horizontalLayout_2);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font2);

        verticalLayout_6->addWidget(label_12);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setSpacing(6);
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        radioButton_15 = new QRadioButton(widget);
        radioButton_15->setObjectName(QString::fromUtf8("radioButton_15"));

        horizontalLayout_34->addWidget(radioButton_15);

        radioButton_16 = new QRadioButton(widget);
        radioButton_16->setObjectName(QString::fromUtf8("radioButton_16"));

        horizontalLayout_34->addWidget(radioButton_16);


        verticalLayout_6->addLayout(horizontalLayout_34);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        spinBox_3 = new QSpinBox(widget);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setEnabled(false);
        spinBox_3->setMaximum(1000000000);

        horizontalLayout_7->addWidget(spinBox_3);


        verticalLayout_6->addLayout(horizontalLayout_7);

        label_35 = new QLabel(widget);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        QFont font3;
        font3.setPointSize(8);
        label_35->setFont(font3);

        verticalLayout_6->addWidget(label_35);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setSpacing(6);
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        radioButton_17 = new QRadioButton(widget);
        radioButton_17->setObjectName(QString::fromUtf8("radioButton_17"));

        horizontalLayout_35->addWidget(radioButton_17);

        radioButton_18 = new QRadioButton(widget);
        radioButton_18->setObjectName(QString::fromUtf8("radioButton_18"));

        horizontalLayout_35->addWidget(radioButton_18);


        verticalLayout_6->addLayout(horizontalLayout_35);


        horizontalLayout->addLayout(verticalLayout_6);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        textBrowser_2 = new QTextBrowser(widget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));

        horizontalLayout_6->addWidget(textBrowser_2);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_6->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableWidget = new QTableWidget(tab_2);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 1, 711, 451));
        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);

        Form->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(Form);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Form->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Form);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Form->setStatusBar(statusBar);

        retranslateUi(Form);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QMainWindow *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Form", "                                Basic Details", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("Form", " Name                :", 0, QApplication::UnicodeUTF8));
        lineEdit_5->setPlaceholderText(QApplication::translate("Form", "Name of the student", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("Form", "  ID                    :", 0, QApplication::UnicodeUTF8));
        lineEdit_21->setPlaceholderText(QApplication::translate("Form", "Identification number", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Form", "Gender :", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("Form", "Female", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("Form", "Male", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("Form", " Contact No.     : ", 0, QApplication::UnicodeUTF8));
        lineEdit_22->setPlaceholderText(QApplication::translate("Form", "Student contact number", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("Form", " Course              :", 0, QApplication::UnicodeUTF8));
        lineEdit_23->setPlaceholderText(QApplication::translate("Form", "Student course", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("Form", " DOB                  :", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("Form", " Father's Name  :", 0, QApplication::UnicodeUTF8));
        lineEdit_24->setPlaceholderText(QApplication::translate("Form", "Student's father name", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("Form", " Mother's name :", 0, QApplication::UnicodeUTF8));
        lineEdit_25->setPlaceholderText(QApplication::translate("Form", "Student's mother name", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("Form", " Parent's No.      :", 0, QApplication::UnicodeUTF8));
        lineEdit_26->setPlaceholderText(QApplication::translate("Form", "Parent's contact number", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("Form", " Postal address  :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Form", "Hostel Fee :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Form", "     Additional Details   ", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Form", "     WIFI Required ", 0, QApplication::UnicodeUTF8));
        radioButton_13->setText(QApplication::translate("Form", "Yes", 0, QApplication::UnicodeUTF8));
        radioButton_14->setText(QApplication::translate("Form", "No", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Form", "Amount : Rs", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Form", "     Food Option ", 0, QApplication::UnicodeUTF8));
        radioButton_15->setText(QApplication::translate("Form", "VEG", 0, QApplication::UnicodeUTF8));
        radioButton_16->setText(QApplication::translate("Form", "NON VEG", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Form", "Amount : Rs", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("Form", "  Parking Allotmen Required ", 0, QApplication::UnicodeUTF8));
        radioButton_17->setText(QApplication::translate("Form", "Yes", 0, QApplication::UnicodeUTF8));
        radioButton_18->setText(QApplication::translate("Form", "No", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Form", "Submit", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Form", "  Total Amount :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Form", " Room Alloted :", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Form", "Tab 1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Form", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Form", "ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Form", "Gender", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Form", "Course", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Form", "DOB", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Form", "Room alloted", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Form", "total fee", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Form", "Tab 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
