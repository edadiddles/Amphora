#include <QtOpenGL>
#include <cmath>
#include "simulation.h"

#ifndef GL_MULTISAMPLE
#define GL_MULTISAMPLE 0x809D
#endif


Simulation::Simulation(QWidget *parent) : QGLWidget(parent)
{
    xRot = 0;
    yRot = 0;
    zRot = 0;

    zoom = 1;
    lastZoom = 0;

    phone.setColor("Red","1.0");
    paraboloid.setColor("Green", "1.0");
    user.setColor("Blue", "1.0");
    background.setColor("Black","0.0");
}

Simulation::~Simulation()
{
}

QImage Simulation::getImage()
{
    QImage image = grabFrameBuffer();

    return image;
}

void Simulation::initializeGL()
{
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_CULL_FACE);
    glEnable(GL_MULTISAMPLE);
    glEnable(GL_BLEND);

    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}

void Simulation::resizeGL(int width, int height)
{
    int side = qMin(width, height);
    glViewport((width - side) / 2, (height - side) / 2, side, side);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1000,1000,-1000,1000,-1000,1000);
    glMatrixMode(GL_MODELVIEW);

}

void Simulation::paintGL()
{
    glClearColor(background.red, background.green, background.blue, background.alpha);

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glRotatef(xRot / 16.0, 1.0, 0.0, 0.0);
    glRotatef(yRot / 16.0, 0.0, 1.0, 0.0);
    glRotatef(zRot / 16.0, 0.0, 0.0, 1.0);

    glScalef(zoom,zoom,zoom);


    glPointSize(1.0f);

    glColor4f(user.red, user.green, user.blue, user.alpha);
    glBegin(GL_POINTS);
    for(size_t i = 0; i < user.x.size(); i++)
    {
        glVertex3d(user.x[i], user.y[i], user.z[i]);
    }
    glEnd();

    glColor4f(phone.red, phone.green, phone.blue, phone.alpha);
    glBegin(GL_POINTS);
    for(size_t i = 0; i < phone.x.size(); i++)
    {
        glVertex3d(phone.x[i], phone.y[i], phone.z[i]);
    }
    glEnd();

    glColor4f(paraboloid.red, paraboloid.green, paraboloid.blue, paraboloid.alpha);
    glBegin(GL_POINTS);
    for(size_t i = 0; i < paraboloid.x.size(); i++)
    {
        glVertex3d(paraboloid.x[i], paraboloid.y[i], paraboloid.z[i]);
    }
    glEnd();

#ifdef WIN32
    Sleep(0);
#elif MacOSX
#else
    sched_yield();
#endif



    //image = grabFrameBuffer();
}

static void NormalizeRotationAngle(int &angle)
{
    while (angle < 0)
        angle += 360 * 16;
    while (angle > 360 * 16)
        angle -= 360 * 16;
}

void Simulation::setXRotation(int angle)
{
    NormalizeRotationAngle(angle);
    if (angle != xRot)
    {
        xRot = angle;
        emit xRotationChanged(angle);
        updateGL();
    }
}

void Simulation::setYRotation(int angle)
{
    NormalizeRotationAngle(angle);
    if (angle != yRot)
    {
        yRot = angle;
        emit yRotationChanged(angle);
        updateGL();
    }
}

void Simulation::setZRotation(int angle)
{
    NormalizeRotationAngle(angle);
    if (angle != zRot)
    {
        zRot = angle;
        emit zRotationChanged(angle);
        updateGL();
    }
}

void Simulation::setZoom(double angle)
{
    zoom = angle;
    emit zoomChanged(angle);
    updateGL();
}

void Simulation::mousePressEvent(QMouseEvent *event)
{
    lastPos = event->pos();
}

void Simulation::mouseMoveEvent(QMouseEvent *event)
{
    int dx = event->x() - lastPos.x();
    int dy = event->y() - lastPos.y();

    if (event->buttons() &Qt::LeftButton)
    {
        setXRotation(xRot + 8 * dy);
        setZRotation(zRot + 8 * dx);
    }
    else if (event->buttons() &Qt::RightButton)
    {
        setXRotation(xRot + 8 * dy);
        setYRotation(yRot + 8 * dx);
    }

    lastPos = event->pos();
}

void Simulation::wheelEvent(QWheelEvent *event)
{
    double dz = event->angleDelta().y()/120 + lastZoom;

    setZoom(zoom + dz/10);

    if(lastZoom > 0 && event->angleDelta().y() > 0)
        lastZoom += event->angleDelta().y()/120;
    else if(lastZoom > 0 && event->angleDelta().y() < 0)
        lastZoom = 0;
    else if(lastZoom < 0 && event->angleDelta().y() > 0)
        lastZoom = 0;
    else if(lastZoom < 0 && event->angleDelta().y() < 0)
        lastZoom -= event->angleDelta().y()/120;
}

