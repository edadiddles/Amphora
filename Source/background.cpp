#include "background.h"

Background::Background()
{
}

Background::~Background()
{
}



void Background::setColor(QString colour, QString opacity)
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

QString Background::color;

float Background::red;
float Background::green;
float Background::blue;
float Background::alpha;
