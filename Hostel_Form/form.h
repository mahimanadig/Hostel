#ifndef FORM_H
#define FORM_H

#include <QMainWindow>
#include<QTableWidget>

namespace Ui {
    class Form;
}

class Form : public QMainWindow
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = 0);
    ~Form();

private slots:
    void on_spinBox_editingFinished();

    void on_radioButton_13_clicked(bool checked);

    void on_radioButton_15_clicked(bool checked);

    void on_spinBox_3_editingFinished();

    void on_spinBox_2_editingFinished();

    void on_pushButton_clicked();

    void on_lineEdit_editingFinished();

  void on_lineEdit_returnPressed();

    void on_radioButton_2_clicked();

    void on_radioButton_clicked();

    void on_radioButton_13_clicked();

    void on_radioButton_14_clicked();

    //void on_radioButton_15_clicked();

    void on_radioButton_16_clicked();

    void on_radioButton_16_clicked(bool checked);

private:
    Ui::Form *ui;
};

#endif // FORM_H
