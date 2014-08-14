#ifndef ABOUTSIMULATION_H
#define ABOUTSIMULATION_H

#include <QDialog>

namespace Ui
{
class AboutSimulation;
}

class AboutSimulation : public QDialog
{
    Q_OBJECT

public:
    explicit AboutSimulation(QWidget *parent = 0);
    ~AboutSimulation();

private slots:

private:
    Ui::AboutSimulation *ui;
};

#endif // ABOUTSIMULATION_H
