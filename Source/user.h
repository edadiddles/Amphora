#ifndef USER_H
#define USER_H

#include <QString>
#include <vector>

class User
{
public:
    User();
    ~User();

    void setX(double xVal);
    void setY(double yVal);
    void setZ(double zVal);
    void setColor(QString colour, QString opacity);

    double getX(int i);
    double getY(int i);
    double getZ(int i);

    void clear();

    static std::vector<double> x;
    static std::vector<double> y;
    static std::vector<double> z;

    static QString color;

    static float red;
    static float green;
    static float blue;
    static float alpha;
};

#endif // USER_H
