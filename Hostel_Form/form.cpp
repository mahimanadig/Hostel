#include "form.h"
#include "ui_form.h"
#include<QTableWidget>
#include<QTableWidgetItem>
#include<QString>
    QString op_1_string;
    QString op_2_string;
    QString op_3_string;
    QString result_string;
    QString name;
    QString id;
    QString gender;
    QString course;
    QString father_name;
    QString mother_name;
    QString dob;
    QString no;
    QString pno;
    QString ad;
    QString roomalloted;
    QString tamount;
    QString wifi;
    int food;
    int hostelfee;


    int rownum = 0;

    int result_int;

Form::Form(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_spinBox_editingFinished()
{
     op_1_string =ui->spinBox->text();

    int op_1_int = op_1_string.toInt();

        result_int = op_1_int;


}

void Form::on_radioButton_13_clicked(bool checked)
{
    if(true)
        ui->spinBox_2->setEnabled(true);
}

//void Form::on_radioButton_15_clicked(bool checked)
//{
    //if(true)
  //      ui->spinBox_3->setEnabled(true);
//}

void Form::on_spinBox_3_editingFinished()
{

     op_2_string = ui->spinBox_3->text();
      int op_2_int = op_2_string.toInt();
     result_int = result_int + op_2_int;

}

void Form::on_spinBox_2_editingFinished()
{

    op_3_string = ui->spinBox_2->text();
     int op_3_int = op_3_string.toInt();
    result_int = result_int + op_3_int;



}





void Form::on_radioButton_2_clicked()
{
    gender = "female";
}


void Form::on_radioButton_clicked()
{
    gender = "male";
}



void Form::on_radioButton_13_clicked()
{
    wifi = "required";
}

void Form::on_radioButton_14_clicked()
{
    wifi = "not required";
}
void Form::on_pushButton_clicked()
{
     ui->tableWidget->setRowCount(rownum + 1);
    result_string = QString ::number(result_int);

    ui->textBrowser_2->setText(result_string);
    name = ui->lineEdit_5->text();
    id = ui->lineEdit_21->text();
    no = ui->lineEdit_22->text();
    course = ui->lineEdit_23->text();
    father_name = ui->lineEdit_24->text();
    mother_name = ui->lineEdit_25->text();
    pno = ui->lineEdit_26->text();
    ad = ui->textEdit_4->toPlainText();
    tamount = ui->textBrowser_2->toPlainText().toInt();
    roomalloted = ui->lineEdit->text();
    dob = ui->dateEdit_4->text();

    QTableWidgetItem *itab;
    itab = new QTableWidgetItem;
    itab->setText(name);
    ui->tableWidget->setItem(rownum,0,itab);
    ui->tableWidget->show();

    QTableWidgetItem *itab1;
    itab1 = new QTableWidgetItem;
    itab1->setText(id);
    ui->tableWidget->setItem(rownum,1,itab1);
    ui->tableWidget->show();

    QTableWidgetItem *itab2;
    itab2 = new QTableWidgetItem;
    itab2->setText(gender);
    ui->tableWidget->setItem(rownum,2,itab2);
    ui->tableWidget->show();

    QTableWidgetItem *itab3;
    itab3 = new QTableWidgetItem;
    itab3->setText(course);
    ui->tableWidget->setItem(rownum,3,itab3);
    ui->tableWidget->show();

    QTableWidgetItem *itab4;
    itab4 = new QTableWidgetItem;
    itab4->setText(dob);
    ui->tableWidget->setItem(rownum,4,itab4);
    ui->tableWidget->show();

    QTableWidgetItem *itab5;
    itab5 = new QTableWidgetItem;
    itab5->setText(roomalloted);
    ui->tableWidget->setItem(rownum,5,itab5);
    ui->tableWidget->show();

    QTableWidgetItem *itab6;
    itab6 = new QTableWidgetItem;
    itab6->setText(result_string);
    ui->tableWidget->setItem(rownum,6,itab6);
    ui->tableWidget->show();

 rownum ++;
 ui->lineEdit_5->clear();
 ui->lineEdit_21->clear();
 ui->lineEdit_22->clear();
 ui->lineEdit_23->clear();
 ui->lineEdit_24->clear();
 ui->lineEdit_25->clear();
 ui->lineEdit_26->clear();
 ui->textEdit_4->clear();
 ui->spinBox->clear();
 ui->spinBox_2->clear();
 ui->spinBox_3->clear();
}




void Form::on_radioButton_16_clicked(bool checked)
{
    if(true)
      ui->spinBox_3->setEnabled(true);

}
