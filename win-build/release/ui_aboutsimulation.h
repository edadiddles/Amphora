/********************************************************************************
** Form generated from reading UI file 'aboutsimulation.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTSIMULATION_H
#define UI_ABOUTSIMULATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutSimulation
{
public:
    QPushButton *buttonOk;
    QLabel *labelImage;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelAmphoraSimulation;
    QLabel *labelVersion;
    QLabel *labelDeveloper;
    QLabel *labelBuildDate;

    void setupUi(QDialog *AboutSimulation)
    {
        if (AboutSimulation->objectName().isEmpty())
            AboutSimulation->setObjectName(QStringLiteral("AboutSimulation"));
        AboutSimulation->resize(670, 389);
        AboutSimulation->setMinimumSize(QSize(670, 389));
        AboutSimulation->setMaximumSize(QSize(670, 389));
        buttonOk = new QPushButton(AboutSimulation);
        buttonOk->setObjectName(QStringLiteral("buttonOk"));
        buttonOk->setGeometry(QRect(550, 330, 101, 31));
        QFont font;
        font.setPointSize(11);
        buttonOk->setFont(font);
        labelImage = new QLabel(AboutSimulation);
        labelImage->setObjectName(QStringLiteral("labelImage"));
        labelImage->setGeometry(QRect(10, 10, 391, 368));
        labelImage->setAutoFillBackground(false);
        labelImage->setScaledContents(true);
        layoutWidget = new QWidget(AboutSimulation);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(418, 11, 241, 251));
        layoutWidget->setFont(font);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelAmphoraSimulation = new QLabel(layoutWidget);
        labelAmphoraSimulation->setObjectName(QStringLiteral("labelAmphoraSimulation"));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        labelAmphoraSimulation->setFont(font1);
        labelAmphoraSimulation->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelAmphoraSimulation);

        labelVersion = new QLabel(layoutWidget);
        labelVersion->setObjectName(QStringLiteral("labelVersion"));
        QFont font2;
        font2.setPointSize(13);
        labelVersion->setFont(font2);

        verticalLayout->addWidget(labelVersion);

        labelDeveloper = new QLabel(layoutWidget);
        labelDeveloper->setObjectName(QStringLiteral("labelDeveloper"));
        labelDeveloper->setFont(font2);

        verticalLayout->addWidget(labelDeveloper);

        labelBuildDate = new QLabel(layoutWidget);
        labelBuildDate->setObjectName(QStringLiteral("labelBuildDate"));
        labelBuildDate->setFont(font2);

        verticalLayout->addWidget(labelBuildDate);


        retranslateUi(AboutSimulation);
        QObject::connect(buttonOk, SIGNAL(clicked()), AboutSimulation, SLOT(close()));

        QMetaObject::connectSlotsByName(AboutSimulation);
    } // setupUi

    void retranslateUi(QDialog *AboutSimulation)
    {
        AboutSimulation->setWindowTitle(QApplication::translate("AboutSimulation", "About Amphora Simulation", 0));
        buttonOk->setText(QApplication::translate("AboutSimulation", "OK", 0));
        labelImage->setText(QString());
        labelAmphoraSimulation->setText(QApplication::translate("AboutSimulation", "Amphora Simulation", 0));
        labelVersion->setText(QApplication::translate("AboutSimulation", "Version", 0));
        labelDeveloper->setText(QApplication::translate("AboutSimulation", "Developed by Edward Ruzek", 0));
        labelBuildDate->setText(QApplication::translate("AboutSimulation", "Built on", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutSimulation: public Ui_AboutSimulation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTSIMULATION_H
