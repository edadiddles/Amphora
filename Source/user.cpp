#include <vector>
#include "user.h"

User::User()
{
}

User::~User()
{
}

void User::setX(double xVal)
{
    x.push_back(xVal);
}

void User::setY(double yVal)
{
    y.push_back(yVal);
}

void User::setZ(double zVal)
{
    z.push_back(zVal);
}

void User::setColor(QString colour, QString opacity)
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

double User::getX(int i)
{
    return x[i];
}

double User::getY(int i)
{
    return y[i];
}

double User::getZ(int i)
{
    return z[i];
}

void User::clear()
{
    x.clear();
    y.clear();
    z.clear();
}

std::vector<double> User::x;
std::vector<double> User::y;
std::vector<double> User::z;

QString User::color;

float User::red;
float User::green;
float User::blue;
float User::alpha;
