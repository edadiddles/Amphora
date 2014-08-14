#ifndef SIMULATION_H
#define SIMULATION_H

#include <QGLWidget>

#include "background.h"
#include "paraboloid.h"
#include "phone.h"
#include "user.h"

class Simulation : public QGLWidget
{
    Q_OBJECT
public:
    explicit Simulation(QWidget *parent = 0);
    ~Simulation();

    QImage getImage();

protected:
    void initializeGL();
    void resizeGL(int width, int height);
    void paintGL();

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void wheelEvent(QWheelEvent *event);


private:
    Background background;
    Paraboloid paraboloid;
    Phone phone;
    User user;

    int xRot;
    int yRot;
    int zRot;

    double zoom;

    QPoint lastPos;
    double lastZoom;

signals:
    void xRotationChanged(int angle);
    void yRotationChanged(int angle);
    void zRotationChanged(int angle);

    void zoomChanged(int angle);

public slots:
    void setXRotation(int angle);
    void setYRotation(int angle);
    void setZRotation(int angle);

    void setZoom(double angle);

};

#endif // SIMULATION_H
