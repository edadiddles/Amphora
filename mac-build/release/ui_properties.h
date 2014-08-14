/********************************************************************************
** Form generated from reading UI file 'properties.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIES_H
#define UI_PROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Properties
{
public:
    QPushButton *buttonAccept;
    QLabel *labelUser;
    QLabel *labelParaboloid;
    QPushButton *buttonClose;
    QGroupBox *boxColor;
    QComboBox *inputPhoneColor;
    QComboBox *inputParaboloidColor;
    QComboBox *inputUserColor;
    QComboBox *inputBackgroundColor;
    QLabel *labelPhone;
    QLabel *labelBackground;
    QGroupBox *boxOpacity;
    QLineEdit *inputPhoneOpacity;
    QLineEdit *inputParaboloidOpacity;
    QLineEdit *inputUserOpacity;
    QLineEdit *inputBackgroudOpacity;

    void setupUi(QDialog *Properties)
    {
        if (Properties->objectName().isEmpty())
            Properties->setObjectName(QStringLiteral("Properties"));
        Properties->setEnabled(true);
        Properties->resize(414, 303);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Properties->sizePolicy().hasHeightForWidth());
        Properties->setSizePolicy(sizePolicy);
        Properties->setMinimumSize(QSize(414, 303));
        Properties->setMaximumSize(QSize(414, 303));
        Properties->setSizeGripEnabled(false);
        buttonAccept = new QPushButton(Properties);
        buttonAccept->setObjectName(QStringLiteral("buttonAccept"));
        buttonAccept->setGeometry(QRect(200, 260, 91, 23));
        QFont font;
        font.setPointSize(10);
        buttonAccept->setFont(font);
        labelUser = new QLabel(Properties);
        labelUser->setObjectName(QStringLiteral("labelUser"));
        labelUser->setGeometry(QRect(30, 140, 81, 21));
        labelUser->setFont(font);
        labelUser->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelParaboloid = new QLabel(Properties);
        labelParaboloid->setObjectName(QStringLiteral("labelParaboloid"));
        labelParaboloid->setGeometry(QRect(30, 100, 81, 21));
        labelParaboloid->setFont(font);
        labelParaboloid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        buttonClose = new QPushButton(Properties);
        buttonClose->setObjectName(QStringLiteral("buttonClose"));
        buttonClose->setGeometry(QRect(300, 260, 91, 23));
        buttonClose->setFont(font);
        boxColor = new QGroupBox(Properties);
        boxColor->setObjectName(QStringLiteral("boxColor"));
        boxColor->setGeometry(QRect(130, 30, 161, 191));
        boxColor->setFont(font);
        boxColor->setAlignment(Qt::AlignCenter);
        inputPhoneColor = new QComboBox(boxColor);
        inputPhoneColor->setObjectName(QStringLiteral("inputPhoneColor"));
        inputPhoneColor->setGeometry(QRect(20, 30, 131, 22));
        inputPhoneColor->setFont(font);
        inputParaboloidColor = new QComboBox(boxColor);
        inputParaboloidColor->setObjectName(QStringLiteral("inputParaboloidColor"));
        inputParaboloidColor->setGeometry(QRect(20, 70, 131, 22));
        inputParaboloidColor->setFont(font);
        inputUserColor = new QComboBox(boxColor);
        inputUserColor->setObjectName(QStringLiteral("inputUserColor"));
        inputUserColor->setGeometry(QRect(20, 110, 131, 22));
        inputUserColor->setFont(font);
        inputBackgroundColor = new QComboBox(boxColor);
        inputBackgroundColor->setObjectName(QStringLiteral("inputBackgroundColor"));
        inputBackgroundColor->setGeometry(QRect(20, 150, 131, 22));
        inputBackgroundColor->setFont(font);
        labelPhone = new QLabel(Properties);
        labelPhone->setObjectName(QStringLiteral("labelPhone"));
        labelPhone->setGeometry(QRect(30, 60, 81, 21));
        labelPhone->setFont(font);
        labelPhone->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBackground = new QLabel(Properties);
        labelBackground->setObjectName(QStringLiteral("labelBackground"));
        labelBackground->setGeometry(QRect(30, 180, 81, 21));
        labelBackground->setFont(font);
        labelBackground->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        boxOpacity = new QGroupBox(Properties);
        boxOpacity->setObjectName(QStringLiteral("boxOpacity"));
        boxOpacity->setGeometry(QRect(300, 30, 91, 191));
        boxOpacity->setFont(font);
        boxOpacity->setAlignment(Qt::AlignCenter);
        inputPhoneOpacity = new QLineEdit(boxOpacity);
        inputPhoneOpacity->setObjectName(QStringLiteral("inputPhoneOpacity"));
        inputPhoneOpacity->setGeometry(QRect(10, 29, 71, 21));
        inputPhoneOpacity->setFont(font);
        inputParaboloidOpacity = new QLineEdit(boxOpacity);
        inputParaboloidOpacity->setObjectName(QStringLiteral("inputParaboloidOpacity"));
        inputParaboloidOpacity->setGeometry(QRect(10, 69, 71, 21));
        inputParaboloidOpacity->setFont(font);
        inputUserOpacity = new QLineEdit(boxOpacity);
        inputUserOpacity->setObjectName(QStringLiteral("inputUserOpacity"));
        inputUserOpacity->setGeometry(QRect(10, 109, 71, 21));
        inputUserOpacity->setFont(font);
        inputBackgroudOpacity = new QLineEdit(boxOpacity);
        inputBackgroudOpacity->setObjectName(QStringLiteral("inputBackgroudOpacity"));
        inputBackgroudOpacity->setGeometry(QRect(10, 149, 71, 21));
        inputBackgroudOpacity->setFont(font);

        retranslateUi(Properties);
        QObject::connect(buttonClose, SIGNAL(clicked()), Properties, SLOT(close()));

        QMetaObject::connectSlotsByName(Properties);
    } // setupUi

    void retranslateUi(QDialog *Properties)
    {
        Properties->setWindowTitle(QApplication::translate("Properties", "Properties", 0));
        buttonAccept->setText(QApplication::translate("Properties", "Accept", 0));
        labelUser->setText(QApplication::translate("Properties", "User", 0));
        labelParaboloid->setText(QApplication::translate("Properties", "Parboloid", 0));
        buttonClose->setText(QApplication::translate("Properties", "Close", 0));
        boxColor->setTitle(QApplication::translate("Properties", "Color", 0));
        inputPhoneColor->clear();
        inputPhoneColor->insertItems(0, QStringList()
         << QApplication::translate("Properties", "Red", 0)
         << QApplication::translate("Properties", "Green", 0)
         << QApplication::translate("Properties", "Blue", 0)
         << QApplication::translate("Properties", "Black", 0)
         << QApplication::translate("Properties", "White", 0)
        );
        inputParaboloidColor->clear();
        inputParaboloidColor->insertItems(0, QStringList()
         << QApplication::translate("Properties", "Red", 0)
         << QApplication::translate("Properties", "Green", 0)
         << QApplication::translate("Properties", "Blue", 0)
         << QApplication::translate("Properties", "Black", 0)
         << QApplication::translate("Properties", "White", 0)
        );
        inputUserColor->clear();
        inputUserColor->insertItems(0, QStringList()
         << QApplication::translate("Properties", "Red", 0)
         << QApplication::translate("Properties", "Green", 0)
         << QApplication::translate("Properties", "Blue", 0)
         << QApplication::translate("Properties", "Black", 0)
         << QApplication::translate("Properties", "White", 0)
        );
        inputBackgroundColor->clear();
        inputBackgroundColor->insertItems(0, QStringList()
         << QApplication::translate("Properties", "Red", 0)
         << QApplication::translate("Properties", "Green", 0)
         << QApplication::translate("Properties", "Blue", 0)
         << QApplication::translate("Properties", "Black", 0)
         << QApplication::translate("Properties", "White", 0)
        );
        labelPhone->setText(QApplication::translate("Properties", "Phone", 0));
        labelBackground->setText(QApplication::translate("Properties", "Background", 0));
        boxOpacity->setTitle(QApplication::translate("Properties", "Opacity", 0));
        inputPhoneOpacity->setText(QApplication::translate("Properties", "0", 0));
        inputParaboloidOpacity->setText(QApplication::translate("Properties", "0", 0));
        inputUserOpacity->setText(QApplication::translate("Properties", "0", 0));
        inputBackgroudOpacity->setText(QApplication::translate("Properties", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class Properties: public Ui_Properties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIES_H
