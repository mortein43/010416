#include "statuspanel.h"
#include "./ui_statuspanel.h"

StatusPanel::StatusPanel(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StatusPanel)
{
    ui->setupUi(this);
}

StatusPanel::~StatusPanel()
{
    delete ui;
}

void StatusPanel::check()
{
    QString loginInputed = ui->lineEdit->text();
    QString passwordInputed = ui->lineEdit_2->text();
    QString loginCheck = "testuser";
    QString passwordCheck = "pa$$W0rd";
    if (loginInputed == loginCheck && passwordInputed==passwordCheck)
    {
        ui->label_3->setText("Успішний вхід!");
    } else if (loginInputed == loginCheck && passwordInputed!=passwordCheck)
    {
        ui->label_3->setText("Неправильний пароль.");
    } else if (loginInputed != loginCheck && passwordInputed==passwordCheck)
    {
        ui->label_3->setText("Неправильне ім'я.");
    } else ui->label_3->setText("Неправильне ім'я та пароль.");
}


void StatusPanel::on_pushButton_clicked()
{
    check();
}


void StatusPanel::on_lineEdit_2_returnPressed()
{
    check();
    ui->lineEdit->setFocus();
}

