#include <QFile>

#include "aboutsimulation.h"
#include "ui_aboutsimulation.h"


const QString VERS = "0.30";
const QString BUILDDATE = "November 20, 2013";

AboutSimulation::AboutSimulation(QWidget *parent) : QDialog(parent),ui(new Ui::AboutSimulation)
{
    ui->setupUi(this);

    ui->labelVersion->setText("Version " + VERS);
    ui->labelBuildDate->setText("Built on " + BUILDDATE);

    QString filename = "images/aboutimage.png";
    QImage image(filename);
    ui->labelImage->setPixmap(QPixmap::fromImage(image));
}

AboutSimulation::~AboutSimulation()
{
    delete ui;
}
