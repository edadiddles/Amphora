#include <vector>
#include "phone.h"

Phone::Phone()
{
}

Phone::~Phone()
{
}

void Phone::setX(double xVal)
{
    x.push_back(xVal);
}

void Phone::setY(double yVal)
{
    y.push_back(yVal);
}

void Phone::setZ(double zVal)
{
    z.push_back(zVal);
}

void Phone::setColor(QString colour, QString opacity)
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

double Phone::getX(int i)
{
    return x[i];
}

double Phone::getY(int i)
{
    return y[i];
}

double Phone::getZ(int i)
{
    return z[i];
}


void Phone::clear()
{
    x.clear();
    y.clear();
    z.clear();
}

std::vector<double> Phone::x;
std::vector<double> Phone::y;
std::vector<double> Phone::z;

QString Phone::color;

float Phone::red;
float Phone::green;
float Phone::blue;
float Phone::alpha;
