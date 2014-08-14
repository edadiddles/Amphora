#ifndef BACKGROUND_H
#define BACKGROUND_H

#include <QString>

class Background
{
public:
    Background();
    ~Background();

    void setColor(QString colour, QString opacity);
    float getColor(QString colour);


    static QString color;

    static float red;
    static float green;
    static float blue;
    static float alpha;
};

#endif // BACKGROUND_H
