#ifndef CMATH_H
#define CMATH_H
#endif

#ifndef CSTRING_H
#define CSTRING_H
#endif

#ifndef STRING_H
#define STRING_H
#endif

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#endif

#ifndef QAPPLICATION_H
#define QAPPLICATION_H
#endif


#ifndef MATRIXMATH_H
#define MATRIXMATH_H

#include <string>

using std::string;

double Conversion(double, string);

double Dot(double[], double[], int);

void Cross(double[], double[], double[], int);

void Normalize(double[], int);

void Equivalent(double[], double[], int);

void MatrixMultiply(double[], double[][3], double[], int);

void MatrixMultiply(double[][3], double[][3], double[][3], int);

void MatrixMultiply(double[], double[][3], double[][3], double[], int);

#endif
