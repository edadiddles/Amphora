#include "properties.h"
#include "ui_properties.h"


Properties::Properties(QWidget *parent) : QDialog(parent),ui(new Ui::Properties)
{
    ui->setupUi(this);

    ui->inputPhoneColor->setCurrentText(phone.color);
    ui->inputParaboloidColor->setCurrentText(paraboloid.color);
    ui->inputUserColor->setCurrentText(user.color);
    ui->inputBackgroundColor->setCurrentText(background.color);

    ui->inputPhoneOpacity->setText(QString::number(phone.alpha));
    ui->inputParaboloidOpacity->setText(QString::number(paraboloid.alpha));
    ui->inputUserOpacity->setText(QString::number(user.alpha));
    ui->inputBackgroudOpacity->setText(QString::number(background.alpha));
}

Properties::~Properties()
{
    delete ui;
}


void Properties::on_buttonAccept_clicked()
{
    paraboloid.setColor(ui->inputParaboloidColor->currentText(), ui->inputParaboloidOpacity->text());
    phone.setColor(ui->inputPhoneColor->currentText(), ui->inputPhoneOpacity->text());
    user.setColor(ui->inputUserColor->currentText(), ui->inputUserOpacity->text());
    background.setColor(ui->inputBackgroundColor->currentText(), ui->inputBackgroudOpacity->text());
}
