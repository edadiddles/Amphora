#include <QFile>
#include <QFileDialog>
#include <QXmlStreamReader>
#include <QLineEdit>
#include <QMessageBox>
#include <QDialog>

#include <cmath>
#include <string>
#include <vector>

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "properties.h"
#include "ui_properties.h"

#include "aboutsimulation.h"

#include "MatrixMath.h"
#include "Amphora.h"

using namespace std;



MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),uiMainWindow(new Ui::MainWindow)
{
    uiMainWindow->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete uiMainWindow;
}



void MainWindow::on_buttonRunSimulation_clicked()
{
    double coefficientsParaboloidX;
    double coefficientsParaboloidY;
    double coefficientsParaboloidZ;
    double angleParaboloid;
    double heightSlicingPlane;
    double angleSlicingPlane;
    QString modelPhone;
    double anglePhone;
    double radiusUser;
    double linearResolution;
    double angularResolution;

    double widthPhone;
    double lengthPhone;
    double heightPhone;
    double widthSpeaker;
    double heightSpeaker;
    double centerSpeaker;

    double xPhone;
    double yPhone;
    double zPhone;
    double cornerPhone[3];

    double vecPhoneWidth[3];
    double vecPhoneLength[3];
    double vecPhoneHeight[3];

    double initialPhononLocation[3];
    double initialPhononProjection[3];

    double locationSpeaker[3];

    double spanAzimuthal = Conversion(30.0, "deg");
    double spanPolar = Conversion(360.0, "deg");

    double locationPhonon[3];
    double projectionPhonon[3];
    double rotationPolar[3][3];
    double rotationAzimuthal[3][3];

    bool atUser;

    double intersectParaboloid[3];
    double intersectPhone[3];
    double intersectUser[3];

    double aParaboloid;
    double bParaboloid;
    double cParaboloid;
    double tParaboloid;
    double tSlicingPlane;
    double tPhone;
    double aUser;
    double bUser;
    double cUser;
    double tUser;

    paraboloid.clear();
    phone.clear();
    user.clear();

    coefficientsParaboloidX = uiMainWindow->inputParaboloidCoefficientsX->text().toDouble();
    coefficientsParaboloidY = uiMainWindow->inputParaboloidCoefficientsY->text().toDouble();
    coefficientsParaboloidZ = uiMainWindow->inputParaboloidCoefficientsZ->text().toDouble();
    angleParaboloid = Conversion(uiMainWindow->inputParaboloidAngle->text().toDouble(), uiMainWindow->inputParaboloidAngleUnits->currentText().toStdString());

    heightSlicingPlane = Conversion(uiMainWindow->inputSlicingPlaneHeight->text().toDouble(), uiMainWindow->inputSlicingPlaneHeightUnits->currentText().toStdString());
    angleSlicingPlane = Conversion(uiMainWindow->inputSlicingPlaneAngle->text().toDouble(), uiMainWindow->inputSlicingPlaneAngleUnits->currentText().toStdString());

    modelPhone = uiMainWindow->inputPhoneModel->currentText();
    anglePhone = Conversion(uiMainWindow->inputPhoneAngle->text().toDouble(), uiMainWindow->inputPhoneAngleUnits->currentText().toStdString());

    radiusUser = Conversion(uiMainWindow->inputUserRadius->text().toDouble(), uiMainWindow->inputUserRadiusUnits->currentText().toStdString());

    linearResolution = Conversion(uiMainWindow->inputResolutionLinear->text().toDouble(), uiMainWindow->inputResolutionLinearUnits->currentText().toStdString());
    angularResolution = Conversion(uiMainWindow->inputResolutionAngular->text().toDouble(), uiMainWindow->inputResolutionAngularUnits->currentText().toStdString());


    QString tempString1;
    QString tempString2;

    bool noWhiteSpaces = false;

    while (!noWhiteSpaces)
    {
        for (int i = 0; i < modelPhone.size(); i++)
        {
            if (modelPhone.at(i).isSpace())
            {
                tempString1 = modelPhone.left(i);
                tempString2 = modelPhone.right(modelPhone.size() - (i+1));

                modelPhone = tempString1 + tempString2;

                break;
            }
            if (i == modelPhone.size()-1)
            {
                noWhiteSpaces = true;
            }
        }
    }

#ifdef WIN32
    QString path = QCoreApplication::applicationDirPath();
    path.append("/xml");
#elif MacOSX
    QString path = QCoreApplication::applicationDirPath();
#else
    QString path = QCoreApplication::applicationDirPath();
    path.append("/xml");
#endif

    tempString1 = modelPhone + ".xml";
    path.append("/" + tempString1);


    QFile file(path);
    file.open(QIODevice::ReadOnly);

    QXmlStreamReader xml(&file);

    QString currentName;

    while (!xml.isEndDocument())
    {
        xml.readNext();

        currentName = xml.name().toString();

        if (xml.isStartElement())
        {
            if (xml.name().toString() == "width")
            {
                widthPhone = xml.readElementText().toDouble();
            }
            else if (xml.name().toString() == "length")
            {
                lengthPhone = xml.readElementText().toDouble();
            }
            else if (xml.name().toString() == "height")
            {
                heightPhone = xml.readElementText().toDouble();
            }
            else if (xml.name().toString() == "Speaker")
            {
                while (!(xml.isEndElement() && xml.name().toString() == "Speaker"))
                {
                    xml.readNext();

                    currentName = xml.name().toString();

                    if (xml.isStartElement())
                    {
                        if (xml.name().toString() == "width")
                        {
                            widthSpeaker = xml.readElementText().toDouble();
                        }
                        else if (xml.name().toString() == "height")
                        {
                            heightSpeaker = xml.readElementText().toDouble();
                        }
                        else if (xml.name().toString() == "center")
                        {
                            centerSpeaker = xml.readElementText().toDouble();
                        }
                    }
                }
            }
        }
    }




    xPhone = 0.5*widthPhone;
    yPhone = +(-8.0*pow(widthPhone,2)*coefficientsParaboloidX*coefficientsParaboloidY*sin(angleParaboloid) - 6.0*pow(lengthPhone,2)*pow(coefficientsParaboloidY,2)*sin(angleParaboloid) - 8.0*pow(coefficientsParaboloidZ,2)*sin(angleParaboloid) - 16.0*lengthPhone*coefficientsParaboloidY*coefficientsParaboloidZ*sin(anglePhone) - 8.0*lengthPhone*coefficientsParaboloidY*coefficientsParaboloidZ*sin(2.0*angleParaboloid+anglePhone) - 4.0*pow(widthPhone,2)*coefficientsParaboloidX*coefficientsParaboloidY*sin(angleParaboloid+2.0*anglePhone) - 4.0*pow(lengthPhone,2)*pow(coefficientsParaboloidY,2)*sin(angleParaboloid+2.0*anglePhone) + 12.0*pow(coefficientsParaboloidZ,2)*sin(angleParaboloid+2.0*anglePhone) + 4.0*pow(widthPhone,2)*coefficientsParaboloidX*coefficientsParaboloidY*sin(3.0*angleParaboloid+2.0*anglePhone) + 4.0*pow(lengthPhone,2)*pow(coefficientsParaboloidY,2)*sin(3.0*angleParaboloid+2.0*anglePhone) + 4.0*pow(coefficientsParaboloidZ,2)*sin(3.0*angleParaboloid+2.0*anglePhone) + 8.0*lengthPhone*coefficientsParaboloidY*coefficientsParaboloidZ*sin(2.0*angleParaboloid+3.0*anglePhone) + pow(lengthPhone,2)*pow(coefficientsParaboloidY,2)*sin(3.0*angleParaboloid+4.0*anglePhone) - pow(lengthPhone,2)*pow(coefficientsParaboloidY,2)*sin(5.0*angleParaboloid+4.0*anglePhone))/(64.0*coefficientsParaboloidY*coefficientsParaboloidZ*pow(sin(angleParaboloid+anglePhone),2));
    zPhone = -(-8.0*pow(widthPhone,2)*cos(angleParaboloid)*coefficientsParaboloidX*coefficientsParaboloidY + 4.0*pow(widthPhone,2)*cos(angleParaboloid+2.0*anglePhone)*coefficientsParaboloidX*coefficientsParaboloidY + 4.0*pow(widthPhone,2)*cos(3.0*angleParaboloid+2.0*anglePhone)*coefficientsParaboloidX*coefficientsParaboloidY - 6.0*pow(lengthPhone,2)*cos(angleParaboloid)*pow(coefficientsParaboloidY,2) + 4.0*pow(lengthPhone,2)*cos(angleParaboloid+2.0*anglePhone)*pow(coefficientsParaboloidY,2) + 4.0*pow(lengthPhone,2)*cos(3.0*angleParaboloid+2.0*anglePhone)*pow(coefficientsParaboloidY,2) - pow(lengthPhone,2)*cos(3.0*angleParaboloid+4.0*anglePhone)*pow(coefficientsParaboloidY,2) - pow(lengthPhone,2)*cos(5.0*angleParaboloid+4.0*anglePhone)*pow(coefficientsParaboloidY,2) + 16.0*lengthPhone*cos(anglePhone)*coefficientsParaboloidY*coefficientsParaboloidZ - 8.0*lengthPhone*cos(2.0*angleParaboloid+anglePhone)*coefficientsParaboloidY*coefficientsParaboloidZ - 8.0*lengthPhone*cos(2.0*angleParaboloid+3.0*anglePhone)*coefficientsParaboloidY*coefficientsParaboloidZ - 8.0*cos(angleParaboloid)*pow(coefficientsParaboloidZ,2) - 12.0*cos(angleParaboloid+2.0*anglePhone)*pow(coefficientsParaboloidZ,2) + 4.0*cos(3.0*angleParaboloid+2.0*anglePhone)*pow(coefficientsParaboloidZ,2))/(64.0*coefficientsParaboloidY*coefficientsParaboloidZ*pow(sin(angleParaboloid+anglePhone),2));
    cornerPhone[0] = xPhone;
    cornerPhone[1] = yPhone;
    cornerPhone[2] = zPhone;


    vecPhoneWidth[0] = widthPhone;
    vecPhoneWidth[1] = 0;
    vecPhoneWidth[2] = 0;
    Normalize(vecPhoneWidth, 3);

    vecPhoneLength[0] = 0;
    vecPhoneLength[1] = lengthPhone*sin(anglePhone);
    vecPhoneLength[2] = lengthPhone*cos(anglePhone);
    Normalize(vecPhoneLength, 3);

    vecPhoneHeight[0] = vecPhoneLength[1]*vecPhoneWidth[2] - vecPhoneLength[2]*vecPhoneWidth[1];
    vecPhoneHeight[1] = vecPhoneLength[2]*vecPhoneWidth[0] - vecPhoneLength[0]*vecPhoneWidth[2];
    vecPhoneHeight[2] = vecPhoneLength[0]*vecPhoneWidth[1] - vecPhoneLength[1]*vecPhoneWidth[0];
    Normalize(vecPhoneHeight, 3);

    for(int i = 0; i < 3; i++)
    {
        initialPhononLocation[i] = cornerPhone[i] - centerSpeaker*vecPhoneWidth[i] + 0.5*heightPhone*vecPhoneHeight[i];
        initialPhononProjection[i] = -vecPhoneLength[i];
    }

    for (double gridSpeakerWidth = -0.5*widthSpeaker; gridSpeakerWidth <= 0.5*widthSpeaker; gridSpeakerWidth += linearResolution)
    {
        for (double gridSpeakerHeight = -0.5*heightSpeaker; gridSpeakerHeight <= 0.5*heightSpeaker; gridSpeakerHeight += linearResolution)
        {
            for (int i = 0; i < 3; i++)
            {
                locationSpeaker[i] = initialPhononLocation[i] + gridSpeakerWidth*vecPhoneWidth[i] + gridSpeakerHeight*vecPhoneHeight[i];
            }

            for (double gridAzimuthal = 0; gridAzimuthal <= spanAzimuthal; gridAzimuthal += angularResolution)
            {
                for (double gridPolar = 0; gridPolar <= spanPolar; gridPolar += angularResolution)
                {
                    Equivalent(locationPhonon, locationSpeaker, 3);

                    Rotation(rotationPolar, vecPhoneLength, gridPolar);
                    Rotation(rotationAzimuthal, vecPhoneHeight, gridAzimuthal);

                    MatrixMultiply(projectionPhonon,rotationPolar, rotationAzimuthal, initialPhononProjection, 3);

                    atUser = false;
                    while (!atUser)
                    {
                        aParaboloid = coefficientsParaboloidX*pow(projectionPhonon[0],2) + coefficientsParaboloidY*pow(projectionPhonon[1],2)*pow(cos(angleParaboloid),2) + coefficientsParaboloidY*pow(projectionPhonon[2],2)*pow(sin(angleParaboloid),2) + 2.0*coefficientsParaboloidY*projectionPhonon[1]*projectionPhonon[2]*cos(angleParaboloid)*sin(angleParaboloid);
                        bParaboloid = 2*coefficientsParaboloidX*projectionPhonon[0]*locationPhonon[0] + 2.0*coefficientsParaboloidY*projectionPhonon[1]*locationPhonon[1]*pow(cos(angleParaboloid),2) + 2.0*coefficientsParaboloidY*projectionPhonon[2]*locationPhonon[2]*pow(sin(angleParaboloid),2) + 2.0*coefficientsParaboloidY*projectionPhonon[1]*locationPhonon[2]*cos(angleParaboloid)*sin(angleParaboloid) + 2.0*coefficientsParaboloidY*projectionPhonon[2]*locationPhonon[1]*cos(angleParaboloid)*sin(angleParaboloid) + coefficientsParaboloidZ*projectionPhonon[1]*sin(angleParaboloid) - coefficientsParaboloidZ*projectionPhonon[2]*cos(angleParaboloid);
                        cParaboloid = coefficientsParaboloidX*pow(locationPhonon[0],2) + coefficientsParaboloidY*pow(locationPhonon[1],2)*pow(cos(angleParaboloid),2) + coefficientsParaboloidY*pow(locationPhonon[2],2)*pow(sin(angleParaboloid),2) + 2.0*coefficientsParaboloidY*locationPhonon[1]*locationPhonon[2]*cos(angleParaboloid)*sin(angleParaboloid) + coefficientsParaboloidZ*locationPhonon[1]*sin(angleParaboloid) - coefficientsParaboloidZ*locationPhonon[2]*cos(angleParaboloid);
                        tParaboloid = (-bParaboloid + sqrt(pow(bParaboloid,2) - 4*aParaboloid*cParaboloid))/(2*aParaboloid);
                        Intersection(intersectParaboloid, locationPhonon, projectionPhonon, tParaboloid);

                        tSlicingPlane = (heightSlicingPlane*cos(angleSlicingPlane) + locationPhonon[1]*cos(angleParaboloid)*sin(angleSlicingPlane) + locationPhonon[1]*sin(angleParaboloid)*cos(angleSlicingPlane) - locationPhonon[2]*cos(angleParaboloid)*cos(angleSlicingPlane) + locationPhonon[2]*sin(angleParaboloid)*sin(angleSlicingPlane))/(-projectionPhonon[1]*cos(angleParaboloid)*sin(angleSlicingPlane) - projectionPhonon[1]*sin(angleParaboloid)*cos(angleSlicingPlane) + projectionPhonon[2]*cos(angleParaboloid)*cos(angleSlicingPlane) - projectionPhonon[2]*sin(angleParaboloid)*sin(angleSlicingPlane));

                        tPhone = (Dot(vecPhoneHeight, cornerPhone, 3) - Dot(vecPhoneHeight, locationPhonon, 3))/(Dot(vecPhoneHeight, projectionPhonon, 3));
                        Intersection(intersectPhone, locationPhonon, projectionPhonon, tPhone);

                        aUser = Dot(projectionPhonon, projectionPhonon, 3);
                        bUser = 2*Dot(locationPhonon, projectionPhonon, 3);
                        cUser = Dot(locationPhonon, locationPhonon, 3) - pow(radiusUser,2);
                        tUser = (-bUser + sqrt(pow(bUser,2) - 4*aUser*cUser))/(2*aUser);
                        Intersection(intersectUser, locationPhonon, projectionPhonon, tUser);

                        if (tPhone > pow(10.0,-6) && (tPhone < tParaboloid || tParaboloid <= pow(10.0,-6)) && (tPhone < tSlicingPlane || tSlicingPlane <= pow(10.0,-6)) && ((xPhone - widthPhone) <= intersectPhone[0] && intersectPhone[0] <= xPhone && yPhone <= intersectPhone[1] && intersectPhone[1] <= (yPhone + lengthPhone*sin(anglePhone))))
                        {
                            Equivalent(locationPhonon, intersectPhone, 3);

                            Reflection(projectionPhonon, vecPhoneHeight);


                            phone.setX(locationPhonon[0]);
                            phone.setY(locationPhonon[1]);
                            phone.setZ(locationPhonon[2]);
                        }
                        else if (tParaboloid > pow(10.0,-6) && (tParaboloid < tSlicingPlane || tSlicingPlane <= pow(10.0,-6)))
                        {
                            Equivalent(locationPhonon, intersectParaboloid, 3);

                            double vecNormal[3];

                            vecNormal[0] = -2*coefficientsParaboloidX*locationPhonon[0];
                            vecNormal[1] = -2*coefficientsParaboloidY*cos(angleParaboloid)*(locationPhonon[1]*cos(angleParaboloid) + locationPhonon[2]*sin(angleParaboloid)) - coefficientsParaboloidZ*sin(angleParaboloid);
                            vecNormal[2] = -2*coefficientsParaboloidY*sin(angleParaboloid)*(locationPhonon[1]*cos(angleParaboloid) + locationPhonon[2]*sin(angleParaboloid)) + coefficientsParaboloidZ*cos(angleParaboloid);
                            Normalize(vecNormal, 3);

                            Reflection(projectionPhonon, vecNormal);

                            paraboloid.setX(locationPhonon[0]);
                            paraboloid.setY(locationPhonon[1]);
                            paraboloid.setZ(locationPhonon[2]);
                        }
                        else if (tSlicingPlane > pow(10.0,-6))
                        {
                            atUser = true;

                            Equivalent(locationPhonon, intersectUser, 3);

                            user.setX(locationPhonon[0]);
                            user.setY(locationPhonon[1]);
                            user.setZ(locationPhonon[2]);
                        }
                        else
                        {
                            break;
                        }
                    }

                    if (gridAzimuthal == 0)
                    {
                        break;
                    }
                }
            }
        }
    }
}

void MainWindow::on_buttonClose_clicked()
{
    qApp->quit();
}



void MainWindow::on_inputParaboloidCoefficientsX_returnPressed()
{
    MainWindow::on_buttonRunSimulation_clicked();
}

void MainWindow::on_inputParaboloidCoefficientsY_returnPressed()
{
    MainWindow::on_buttonRunSimulation_clicked();
}

void MainWindow::on_inputParaboloidCoefficientsZ_returnPressed()
{
    MainWindow::on_buttonRunSimulation_clicked();
}

void MainWindow::on_inputParaboloidAngle_returnPressed()
{
    MainWindow::on_buttonRunSimulation_clicked();
}

void MainWindow::on_inputSlicingPlaneHeight_returnPressed()
{
    MainWindow::on_buttonRunSimulation_clicked();
}

void MainWindow::on_inputSlicingPlaneAngle_returnPressed()
{
    MainWindow::on_buttonRunSimulation_clicked();
}

void MainWindow::on_inputPhoneAngle_returnPressed()
{
    MainWindow::on_buttonRunSimulation_clicked();
}

void MainWindow::on_inputUserRadius_returnPressed()
{
    MainWindow::on_buttonRunSimulation_clicked();
}

void MainWindow::on_inputResolutionLinear_returnPressed()
{
    MainWindow::on_buttonRunSimulation_clicked();
}

void MainWindow::on_inputResolutionAngular_returnPressed()
{
    MainWindow::on_buttonRunSimulation_clicked();
}



void MainWindow::on_actionRun_Simulation_triggered()
{
    MainWindow::on_buttonRunSimulation_clicked();
}

void MainWindow::on_actionSave_Image_As_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this, tr("Save Image As..."), "untitled.png", tr("Images (*.png *.jpg)"));

    QImage image = simulation.getImage();
    image.save(filename,0,100);
}

void MainWindow::on_actionClose_triggered()
{
    qApp->quit();
}

void MainWindow::on_actionProperties_triggered()
{
    Properties p;
    p.exec();
}

void MainWindow::on_actionAbout_Simulation_triggered()
{
    AboutSimulation s;
    s.exec();
}

void MainWindow::on_actionAbout_Qt_triggered()
{
    QMessageBox::aboutQt(this, "About Qt");
}






