#include <QString>
#include <vector>
#include "paraboloid.h"


Paraboloid::Paraboloid()
{
}

Paraboloid::~Paraboloid()
{
}

void Paraboloid::setX(double xVal)
{
    x.push_back(xVal);
}

void Paraboloid::setY(double yVal)
{
    y.push_back(yVal);
}

void Paraboloid::setZ(double zVal)
{
    z.push_back(zVal);
}

void Paraboloid::setColor(QString colour, QString opacity)
{
    if(colour == "Black")
    {
        color = "Black";

        red = 0.0;
        green = 0.0;
        blue = 0.0;
        alpha = opacity.toFloat();
    }
    else if(colour == "White")
    {
        color = "White";

        red = 1.0;
        green = 1.0;
        blue = 1.0;
        alpha = opacity.toFloat();
    }
    else if(colour == "Red")
    {
        color = "Red";

        red = 1.0;
        green = 0.0;
        blue = 0.0;
        alpha = opacity.toFloat();
    }
    else if(colour == "Green")
    {
        color = "Green";

        red = 0.0;
        green = 1.0;
        blue = 0.0;
        alpha = opacity.toFloat();
    }
    else if(colour == "Blue")
    {
        color = "Blue";

        red = 0.0;
        green = 0.0;
        blue = 1.0;
        alpha = opacity.toFloat();
    }
}

double Paraboloid::getX(int i)
{
    return x[i];
}

double Paraboloid::getY(int i)
{
    return y[i];
}

double Paraboloid::getZ(int i)
{
    return z[i];
}

void Paraboloid::clear()
{
    x.clear();
    y.clear();
    z.clear();
}

std::vector<double> Paraboloid::x;
std::vector<double> Paraboloid::y;
std::vector<double> Paraboloid::z;

QString Paraboloid::color;

float Paraboloid::red;
float Paraboloid::green;
float Paraboloid::blue;
float Paraboloid::alpha;
