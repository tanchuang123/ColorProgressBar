#include "form.h"
#include "ui_form.h"
#include <QtDebug>
Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    ui->widget->setDecimal(0);
    ui->widget->setBarBackGroundColor(QColor(237,237,250));
    ui->widget->setBarColor(QColor(100,120,10));
    ui->widget->setShowBarSplitLine(false);
    ui->widget->setValue(10);
    ui->widget->setTextColor(QColor(100,120,10));


}

Form::~Form()
{
    delete ui;
}
void Form::valueChange()
{


}

void Form::on_pushButton_clicked()
{
//     ui->widget->setValue(value);
    int value=ui->lineEdit->text().toInt();
    qDebug()<<value;
      ui->widget->setValue(value);
//     update();
}
