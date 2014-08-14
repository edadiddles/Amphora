/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "simulation.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionProperties;
    QAction *actionAbout_Qt;
    QAction *actionAbout_Simulation;
    QAction *actionSave_Image_As;
    QAction *actionClose;
    QAction *actionRun_Simulation;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *layoutLeftColumn;
    QVBoxLayout *layoutVariables;
    QGroupBox *ParaboloidBox;
    QLabel *labelParaboloidCoefficients;
    QLineEdit *inputParaboloidCoefficientsX;
    QLineEdit *inputParaboloidCoefficientsY;
    QLineEdit *inputParaboloidCoefficientsZ;
    QLabel *labelParaboloidAngle;
    QLineEdit *inputParaboloidAngle;
    QComboBox *inputParaboloidAngleUnits;
    QSpacerItem *verticalSpacer;
    QGroupBox *SlicingPlaneBox;
    QLabel *labelSlicingPlaneHeight;
    QLineEdit *inputSlicingPlaneHeight;
    QLabel *labelSlicingPlaneAngle;
    QLineEdit *inputSlicingPlaneAngle;
    QComboBox *inputSlicingPlaneAngleUnits;
    QComboBox *inputSlicingPlaneHeightUnits;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *PhoneBox;
    QLabel *labelPhoneModel;
    QLabel *labelPhoneAngle;
    QLineEdit *inputPhoneAngle;
    QComboBox *inputPhoneAngleUnits;
    QComboBox *inputPhoneModel;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *UserBox;
    QLabel *labelUserRadius;
    QLineEdit *inputUserRadius;
    QComboBox *inputUserRadiusUnits;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *ResolutionBox;
    QLabel *labelResolutionLinear;
    QLineEdit *inputResolutionLinear;
    QLabel *labelResolutionAngular;
    QLineEdit *inputResolutionAngular;
    QComboBox *inputResolutionAngularUnits;
    QComboBox *inputResolutionLinearUnits;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *layoutButtons;
    QPushButton *buttonClose;
    QPushButton *buttonRunSimulation;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    Simulation *simulation;
    QMenuBar *menuBar;
    QMenu *menuHelp;
    QMenu *menuProperties;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1397, 998);
        MainWindow->setMinimumSize(QSize(1397, 998));
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        actionProperties = new QAction(MainWindow);
        actionProperties->setObjectName(QStringLiteral("actionProperties"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        actionAbout_Simulation = new QAction(MainWindow);
        actionAbout_Simulation->setObjectName(QStringLiteral("actionAbout_Simulation"));
        actionSave_Image_As = new QAction(MainWindow);
        actionSave_Image_As->setObjectName(QStringLiteral("actionSave_Image_As"));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionRun_Simulation = new QAction(MainWindow);
        actionRun_Simulation->setObjectName(QStringLiteral("actionRun_Simulation"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(1397, 977));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        layoutLeftColumn = new QVBoxLayout();
        layoutLeftColumn->setSpacing(6);
        layoutLeftColumn->setObjectName(QStringLiteral("layoutLeftColumn"));
        layoutLeftColumn->setSizeConstraint(QLayout::SetFixedSize);
        layoutVariables = new QVBoxLayout();
        layoutVariables->setSpacing(6);
        layoutVariables->setObjectName(QStringLiteral("layoutVariables"));
        ParaboloidBox = new QGroupBox(centralWidget);
        ParaboloidBox->setObjectName(QStringLiteral("ParaboloidBox"));
        ParaboloidBox->setMinimumSize(QSize(371, 111));
        ParaboloidBox->setMaximumSize(QSize(371, 111));
        labelParaboloidCoefficients = new QLabel(ParaboloidBox);
        labelParaboloidCoefficients->setObjectName(QStringLiteral("labelParaboloidCoefficients"));
        labelParaboloidCoefficients->setGeometry(QRect(0, 30, 91, 21));
        labelParaboloidCoefficients->setAlignment(Qt::AlignCenter);
        inputParaboloidCoefficientsX = new QLineEdit(ParaboloidBox);
        inputParaboloidCoefficientsX->setObjectName(QStringLiteral("inputParaboloidCoefficientsX"));
        inputParaboloidCoefficientsX->setGeometry(QRect(90, 30, 81, 20));
        inputParaboloidCoefficientsX->setInputMethodHints(Qt::ImhNone);
        inputParaboloidCoefficientsY = new QLineEdit(ParaboloidBox);
        inputParaboloidCoefficientsY->setObjectName(QStringLiteral("inputParaboloidCoefficientsY"));
        inputParaboloidCoefficientsY->setGeometry(QRect(190, 30, 81, 20));
        inputParaboloidCoefficientsZ = new QLineEdit(ParaboloidBox);
        inputParaboloidCoefficientsZ->setObjectName(QStringLiteral("inputParaboloidCoefficientsZ"));
        inputParaboloidCoefficientsZ->setGeometry(QRect(280, 30, 81, 20));
        labelParaboloidAngle = new QLabel(ParaboloidBox);
        labelParaboloidAngle->setObjectName(QStringLiteral("labelParaboloidAngle"));
        labelParaboloidAngle->setGeometry(QRect(0, 70, 91, 21));
        labelParaboloidAngle->setAlignment(Qt::AlignCenter);
        inputParaboloidAngle = new QLineEdit(ParaboloidBox);
        inputParaboloidAngle->setObjectName(QStringLiteral("inputParaboloidAngle"));
        inputParaboloidAngle->setGeometry(QRect(90, 70, 81, 20));
        inputParaboloidAngleUnits = new QComboBox(ParaboloidBox);
        inputParaboloidAngleUnits->setObjectName(QStringLiteral("inputParaboloidAngleUnits"));
        inputParaboloidAngleUnits->setGeometry(QRect(190, 71, 81, 21));

        layoutVariables->addWidget(ParaboloidBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutVariables->addItem(verticalSpacer);

        SlicingPlaneBox = new QGroupBox(centralWidget);
        SlicingPlaneBox->setObjectName(QStringLiteral("SlicingPlaneBox"));
        SlicingPlaneBox->setMinimumSize(QSize(371, 111));
        SlicingPlaneBox->setMaximumSize(QSize(371, 111));
        labelSlicingPlaneHeight = new QLabel(SlicingPlaneBox);
        labelSlicingPlaneHeight->setObjectName(QStringLiteral("labelSlicingPlaneHeight"));
        labelSlicingPlaneHeight->setGeometry(QRect(0, 30, 91, 21));
        labelSlicingPlaneHeight->setAlignment(Qt::AlignCenter);
        inputSlicingPlaneHeight = new QLineEdit(SlicingPlaneBox);
        inputSlicingPlaneHeight->setObjectName(QStringLiteral("inputSlicingPlaneHeight"));
        inputSlicingPlaneHeight->setGeometry(QRect(90, 30, 81, 20));
        labelSlicingPlaneAngle = new QLabel(SlicingPlaneBox);
        labelSlicingPlaneAngle->setObjectName(QStringLiteral("labelSlicingPlaneAngle"));
        labelSlicingPlaneAngle->setGeometry(QRect(0, 70, 91, 21));
        labelSlicingPlaneAngle->setAlignment(Qt::AlignCenter);
        inputSlicingPlaneAngle = new QLineEdit(SlicingPlaneBox);
        inputSlicingPlaneAngle->setObjectName(QStringLiteral("inputSlicingPlaneAngle"));
        inputSlicingPlaneAngle->setGeometry(QRect(90, 70, 81, 20));
        inputSlicingPlaneAngleUnits = new QComboBox(SlicingPlaneBox);
        inputSlicingPlaneAngleUnits->setObjectName(QStringLiteral("inputSlicingPlaneAngleUnits"));
        inputSlicingPlaneAngleUnits->setGeometry(QRect(180, 70, 91, 22));
        inputSlicingPlaneHeightUnits = new QComboBox(SlicingPlaneBox);
        inputSlicingPlaneHeightUnits->setObjectName(QStringLiteral("inputSlicingPlaneHeightUnits"));
        inputSlicingPlaneHeightUnits->setGeometry(QRect(180, 30, 91, 22));

        layoutVariables->addWidget(SlicingPlaneBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutVariables->addItem(verticalSpacer_2);

        PhoneBox = new QGroupBox(centralWidget);
        PhoneBox->setObjectName(QStringLiteral("PhoneBox"));
        PhoneBox->setMinimumSize(QSize(371, 111));
        PhoneBox->setMaximumSize(QSize(371, 111));
        labelPhoneModel = new QLabel(PhoneBox);
        labelPhoneModel->setObjectName(QStringLiteral("labelPhoneModel"));
        labelPhoneModel->setGeometry(QRect(0, 30, 91, 21));
        labelPhoneModel->setAlignment(Qt::AlignCenter);
        labelPhoneAngle = new QLabel(PhoneBox);
        labelPhoneAngle->setObjectName(QStringLiteral("labelPhoneAngle"));
        labelPhoneAngle->setGeometry(QRect(0, 70, 91, 21));
        labelPhoneAngle->setAlignment(Qt::AlignCenter);
        inputPhoneAngle = new QLineEdit(PhoneBox);
        inputPhoneAngle->setObjectName(QStringLiteral("inputPhoneAngle"));
        inputPhoneAngle->setGeometry(QRect(90, 70, 81, 20));
        inputPhoneAngleUnits = new QComboBox(PhoneBox);
        inputPhoneAngleUnits->setObjectName(QStringLiteral("inputPhoneAngleUnits"));
        inputPhoneAngleUnits->setGeometry(QRect(180, 70, 91, 22));
        inputPhoneModel = new QComboBox(PhoneBox);
        inputPhoneModel->setObjectName(QStringLiteral("inputPhoneModel"));
        inputPhoneModel->setGeometry(QRect(90, 30, 181, 22));
        labelPhoneModel->raise();
        labelPhoneAngle->raise();
        inputPhoneAngleUnits->raise();
        inputPhoneModel->raise();
        inputPhoneAngle->raise();

        layoutVariables->addWidget(PhoneBox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutVariables->addItem(verticalSpacer_3);

        UserBox = new QGroupBox(centralWidget);
        UserBox->setObjectName(QStringLiteral("UserBox"));
        UserBox->setMinimumSize(QSize(371, 71));
        UserBox->setMaximumSize(QSize(371, 111));
        labelUserRadius = new QLabel(UserBox);
        labelUserRadius->setObjectName(QStringLiteral("labelUserRadius"));
        labelUserRadius->setGeometry(QRect(0, 30, 91, 21));
        labelUserRadius->setAlignment(Qt::AlignCenter);
        inputUserRadius = new QLineEdit(UserBox);
        inputUserRadius->setObjectName(QStringLiteral("inputUserRadius"));
        inputUserRadius->setEnabled(true);
        inputUserRadius->setGeometry(QRect(90, 30, 81, 20));
        inputUserRadiusUnits = new QComboBox(UserBox);
        inputUserRadiusUnits->setObjectName(QStringLiteral("inputUserRadiusUnits"));
        inputUserRadiusUnits->setGeometry(QRect(180, 30, 81, 22));
        labelUserRadius->raise();
        inputUserRadiusUnits->raise();
        inputUserRadius->raise();

        layoutVariables->addWidget(UserBox);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutVariables->addItem(verticalSpacer_4);

        ResolutionBox = new QGroupBox(centralWidget);
        ResolutionBox->setObjectName(QStringLiteral("ResolutionBox"));
        ResolutionBox->setMinimumSize(QSize(371, 111));
        ResolutionBox->setMaximumSize(QSize(371, 111));
        labelResolutionLinear = new QLabel(ResolutionBox);
        labelResolutionLinear->setObjectName(QStringLiteral("labelResolutionLinear"));
        labelResolutionLinear->setGeometry(QRect(0, 30, 91, 21));
        labelResolutionLinear->setAlignment(Qt::AlignCenter);
        inputResolutionLinear = new QLineEdit(ResolutionBox);
        inputResolutionLinear->setObjectName(QStringLiteral("inputResolutionLinear"));
        inputResolutionLinear->setGeometry(QRect(90, 30, 81, 20));
        labelResolutionAngular = new QLabel(ResolutionBox);
        labelResolutionAngular->setObjectName(QStringLiteral("labelResolutionAngular"));
        labelResolutionAngular->setGeometry(QRect(0, 70, 91, 21));
        labelResolutionAngular->setAlignment(Qt::AlignCenter);
        inputResolutionAngular = new QLineEdit(ResolutionBox);
        inputResolutionAngular->setObjectName(QStringLiteral("inputResolutionAngular"));
        inputResolutionAngular->setGeometry(QRect(90, 70, 81, 20));
        inputResolutionAngularUnits = new QComboBox(ResolutionBox);
        inputResolutionAngularUnits->setObjectName(QStringLiteral("inputResolutionAngularUnits"));
        inputResolutionAngularUnits->setGeometry(QRect(180, 70, 81, 22));
        inputResolutionLinearUnits = new QComboBox(ResolutionBox);
        inputResolutionLinearUnits->setObjectName(QStringLiteral("inputResolutionLinearUnits"));
        inputResolutionLinearUnits->setGeometry(QRect(180, 30, 81, 22));
        inputResolutionAngular->raise();
        inputResolutionAngularUnits->raise();
        inputResolutionLinearUnits->raise();
        labelResolutionLinear->raise();
        inputResolutionLinear->raise();
        labelResolutionAngular->raise();

        layoutVariables->addWidget(ResolutionBox);


        layoutLeftColumn->addLayout(layoutVariables);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutLeftColumn->addItem(verticalSpacer_8);

        layoutButtons = new QHBoxLayout();
        layoutButtons->setSpacing(6);
        layoutButtons->setObjectName(QStringLiteral("layoutButtons"));
        layoutButtons->setSizeConstraint(QLayout::SetFixedSize);
        buttonClose = new QPushButton(centralWidget);
        buttonClose->setObjectName(QStringLiteral("buttonClose"));
        buttonClose->setMinimumSize(QSize(121, 31));
        buttonClose->setMaximumSize(QSize(121, 31));

        layoutButtons->addWidget(buttonClose);

        buttonRunSimulation = new QPushButton(centralWidget);
        buttonRunSimulation->setObjectName(QStringLiteral("buttonRunSimulation"));
        buttonRunSimulation->setMinimumSize(QSize(121, 31));
        buttonRunSimulation->setMaximumSize(QSize(121, 31));

        layoutButtons->addWidget(buttonRunSimulation);


        layoutLeftColumn->addLayout(layoutButtons);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutLeftColumn->addItem(verticalSpacer_9);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutLeftColumn->addItem(verticalSpacer_7);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutLeftColumn->addItem(verticalSpacer_5);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutLeftColumn->addItem(verticalSpacer_6);


        horizontalLayout->addLayout(layoutLeftColumn);

        simulation = new Simulation(centralWidget);
        simulation->setObjectName(QStringLiteral("simulation"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(simulation->sizePolicy().hasHeightForWidth());
        simulation->setSizePolicy(sizePolicy);
        simulation->setMinimumSize(QSize(991, 901));
        simulation->setSizeIncrement(QSize(1, 1));
        simulation->setLayoutDirection(Qt::LeftToRight);
        simulation->setInputMethodHints(Qt::ImhNone);

        horizontalLayout->addWidget(simulation);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1397, 21));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuProperties = new QMenu(menuBar);
        menuProperties->setObjectName(QStringLiteral("menuProperties"));
        menuProperties->setLayoutDirection(Qt::LeftToRight);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(inputParaboloidCoefficientsX, inputParaboloidCoefficientsY);
        QWidget::setTabOrder(inputParaboloidCoefficientsY, inputParaboloidCoefficientsZ);
        QWidget::setTabOrder(inputParaboloidCoefficientsZ, inputParaboloidAngle);
        QWidget::setTabOrder(inputParaboloidAngle, inputParaboloidAngleUnits);
        QWidget::setTabOrder(inputParaboloidAngleUnits, inputSlicingPlaneHeight);
        QWidget::setTabOrder(inputSlicingPlaneHeight, inputSlicingPlaneHeightUnits);
        QWidget::setTabOrder(inputSlicingPlaneHeightUnits, inputSlicingPlaneAngle);
        QWidget::setTabOrder(inputSlicingPlaneAngle, inputSlicingPlaneAngleUnits);
        QWidget::setTabOrder(inputSlicingPlaneAngleUnits, inputPhoneModel);
        QWidget::setTabOrder(inputPhoneModel, inputPhoneAngle);
        QWidget::setTabOrder(inputPhoneAngle, inputPhoneAngleUnits);
        QWidget::setTabOrder(inputPhoneAngleUnits, inputUserRadius);
        QWidget::setTabOrder(inputUserRadius, inputUserRadiusUnits);
        QWidget::setTabOrder(inputUserRadiusUnits, inputResolutionLinear);
        QWidget::setTabOrder(inputResolutionLinear, inputResolutionLinearUnits);
        QWidget::setTabOrder(inputResolutionLinearUnits, inputResolutionAngular);
        QWidget::setTabOrder(inputResolutionAngular, inputResolutionAngularUnits);
        QWidget::setTabOrder(inputResolutionAngularUnits, buttonRunSimulation);
        QWidget::setTabOrder(buttonRunSimulation, buttonClose);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuProperties->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionAbout_Simulation);
        menuHelp->addAction(actionAbout_Qt);
        menuProperties->addAction(actionProperties);
        menuFile->addAction(actionRun_Simulation);
        menuFile->addAction(actionSave_Image_As);
        menuFile->addAction(actionClose);

        retranslateUi(MainWindow);
        QObject::connect(buttonRunSimulation, SIGNAL(clicked()), simulation, SLOT(update()));
        QObject::connect(inputPhoneAngle, SIGNAL(returnPressed()), simulation, SLOT(update()));
        QObject::connect(inputUserRadius, SIGNAL(returnPressed()), simulation, SLOT(update()));
        QObject::connect(inputResolutionLinear, SIGNAL(returnPressed()), simulation, SLOT(update()));
        QObject::connect(inputResolutionAngular, SIGNAL(returnPressed()), simulation, SLOT(update()));
        QObject::connect(inputSlicingPlaneAngle, SIGNAL(returnPressed()), simulation, SLOT(update()));
        QObject::connect(inputSlicingPlaneHeight, SIGNAL(returnPressed()), simulation, SLOT(update()));
        QObject::connect(inputParaboloidAngle, SIGNAL(returnPressed()), simulation, SLOT(update()));
        QObject::connect(inputParaboloidCoefficientsX, SIGNAL(returnPressed()), simulation, SLOT(update()));
        QObject::connect(inputParaboloidCoefficientsY, SIGNAL(returnPressed()), simulation, SLOT(update()));
        QObject::connect(inputParaboloidCoefficientsZ, SIGNAL(returnPressed()), simulation, SLOT(update()));
        QObject::connect(buttonRunSimulation, SIGNAL(pressed()), simulation, SLOT(update()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Amphora Simulation", 0));
        actionProperties->setText(QApplication::translate("MainWindow", "Properties", 0));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About Qt...", 0));
        actionAbout_Simulation->setText(QApplication::translate("MainWindow", "About Simulation...", 0));
        actionSave_Image_As->setText(QApplication::translate("MainWindow", "Save Image As...", 0));
        actionClose->setText(QApplication::translate("MainWindow", "Close", 0));
        actionRun_Simulation->setText(QApplication::translate("MainWindow", "Run Simulation", 0));
        ParaboloidBox->setTitle(QApplication::translate("MainWindow", "Paraboloid", 0));
        labelParaboloidCoefficients->setText(QApplication::translate("MainWindow", "Coefficients", 0));
#ifndef QT_NO_TOOLTIP
        inputParaboloidCoefficientsX->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        inputParaboloidCoefficientsX->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        inputParaboloidCoefficientsX->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        inputParaboloidCoefficientsX->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        inputParaboloidCoefficientsX->setText(QApplication::translate("MainWindow", "0.0170794", 0));
        inputParaboloidCoefficientsY->setText(QApplication::translate("MainWindow", "0.0170794", 0));
        inputParaboloidCoefficientsZ->setText(QApplication::translate("MainWindow", "1", 0));
        labelParaboloidAngle->setText(QApplication::translate("MainWindow", "Angle", 0));
        inputParaboloidAngle->setText(QApplication::translate("MainWindow", "45", 0));
        inputParaboloidAngleUnits->clear();
        inputParaboloidAngleUnits->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "deg", 0)
         << QApplication::translate("MainWindow", "rad", 0)
        );
        SlicingPlaneBox->setTitle(QApplication::translate("MainWindow", "Slicing Plane", 0));
        labelSlicingPlaneHeight->setText(QApplication::translate("MainWindow", "Height", 0));
        inputSlicingPlaneHeight->setText(QApplication::translate("MainWindow", "150", 0));
        labelSlicingPlaneAngle->setText(QApplication::translate("MainWindow", "Angle", 0));
        inputSlicingPlaneAngle->setText(QApplication::translate("MainWindow", "30", 0));
        inputSlicingPlaneAngleUnits->clear();
        inputSlicingPlaneAngleUnits->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "deg", 0)
         << QApplication::translate("MainWindow", "rad", 0)
        );
        inputSlicingPlaneHeightUnits->clear();
        inputSlicingPlaneHeightUnits->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "mm", 0)
         << QApplication::translate("MainWindow", "cm", 0)
         << QApplication::translate("MainWindow", "m", 0)
         << QApplication::translate("MainWindow", "in", 0)
         << QApplication::translate("MainWindow", "ft", 0)
        );
        PhoneBox->setTitle(QApplication::translate("MainWindow", "Phone", 0));
        labelPhoneModel->setText(QApplication::translate("MainWindow", "Model", 0));
        labelPhoneAngle->setText(QApplication::translate("MainWindow", "Angle", 0));
        inputPhoneAngle->setText(QApplication::translate("MainWindow", "5", 0));
        inputPhoneAngleUnits->clear();
        inputPhoneAngleUnits->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "deg", 0)
         << QApplication::translate("MainWindow", "rad", 0)
        );
        inputPhoneModel->clear();
        inputPhoneModel->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "iPhone 4S", 0)
         << QApplication::translate("MainWindow", "iPhone 5", 0)
        );
        UserBox->setTitle(QApplication::translate("MainWindow", "User", 0));
        labelUserRadius->setText(QApplication::translate("MainWindow", "Radius", 0));
        inputUserRadius->setText(QApplication::translate("MainWindow", "1000", 0));
        inputUserRadiusUnits->clear();
        inputUserRadiusUnits->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "mm", 0)
         << QApplication::translate("MainWindow", "cm", 0)
         << QApplication::translate("MainWindow", "m", 0)
         << QApplication::translate("MainWindow", "in", 0)
         << QApplication::translate("MainWindow", "ft", 0)
        );
        ResolutionBox->setTitle(QApplication::translate("MainWindow", "Resolution", 0));
        labelResolutionLinear->setText(QApplication::translate("MainWindow", "Linear", 0));
        inputResolutionLinear->setText(QApplication::translate("MainWindow", "0.5", 0));
        labelResolutionAngular->setText(QApplication::translate("MainWindow", "Angular", 0));
        inputResolutionAngular->setText(QApplication::translate("MainWindow", "0.1", 0));
        inputResolutionAngularUnits->clear();
        inputResolutionAngularUnits->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "rad", 0)
         << QApplication::translate("MainWindow", "deg", 0)
        );
        inputResolutionLinearUnits->clear();
        inputResolutionLinearUnits->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "mm", 0)
         << QApplication::translate("MainWindow", "cm", 0)
         << QApplication::translate("MainWindow", "m", 0)
         << QApplication::translate("MainWindow", "in", 0)
         << QApplication::translate("MainWindow", "ft", 0)
        );
        buttonClose->setText(QApplication::translate("MainWindow", "Close", 0));
        buttonRunSimulation->setText(QApplication::translate("MainWindow", "Run Simulation", 0));
#ifndef QT_NO_TOOLTIP
        simulation->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        simulation->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuProperties->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
