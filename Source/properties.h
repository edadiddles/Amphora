#ifndef PROPERTIES_H
#define PROPERTIES_H

#include <QDialog>

#include "background.h"
#include "paraboloid.h"
#include "phone.h"
#include "user.h"

namespace Ui
{
class Properties;
}

class Properties : public QDialog
{
    Q_OBJECT

public:
    explicit Properties(QWidget *parent = 0);
    ~Properties();

private slots:

    void on_buttonAccept_clicked();

private:
    Ui::Properties *ui;
    Background background;
    Paraboloid paraboloid;
    Phone phone;
    User user;
};

#endif // PROPERTIES_H
