#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "simulation.h"

#include "paraboloid.h"
#include "phone.h"
#include "user.h"

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_buttonClose_clicked();
    void on_buttonRunSimulation_clicked();

    void on_inputParaboloidCoefficientsX_returnPressed();
    void on_inputParaboloidCoefficientsY_returnPressed();
    void on_inputParaboloidCoefficientsZ_returnPressed();
    void on_inputParaboloidAngle_returnPressed();
    void on_inputSlicingPlaneHeight_returnPressed();
    void on_inputSlicingPlaneAngle_returnPressed();
    void on_inputPhoneAngle_returnPressed();
    void on_inputUserRadius_returnPressed();
    void on_inputResolutionLinear_returnPressed();
    void on_inputResolutionAngular_returnPressed();

    void on_actionRun_Simulation_triggered();
    void on_actionSave_Image_As_triggered();
    void on_actionClose_triggered();
    void on_actionProperties_triggered();
    void on_actionAbout_Simulation_triggered();
    void on_actionAbout_Qt_triggered();

private:
    Ui::MainWindow *uiMainWindow;
    Simulation simulation;
    Paraboloid paraboloid;
    Phone phone;
    User user;
};

#endif // MAINWINDOW_H
