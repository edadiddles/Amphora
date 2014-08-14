#ifndef CMATH_H
#define CMATH_H
#endif

#ifndef VECTOR_H
#define VECTOR_H
#endif

#ifndef STRING_H
#define STRING_H
#endif

#ifndef MATRIXMATH_H
#define MATRIXMATH_H
#endif

#ifndef AMPHORA_H
#define AMPHORA_H

using std::string;
using std::vector;

void Rotation(double rotationMatrix[][3], double axisOfRotation[], double angleOfRotation);

void Intersection(double intersectionLocation[], double locationOfPhonon[], double projectionOfPhonon[], double lengthToIntersect);

void Reflection(double projectionOfPhonon[], double vectorNormal[]);

void BinarySort(vector<double> &vectorX, vector<double> &vectorY, vector<double> &vectorZ, double locationOfPhonon[]);

void DataProcessing(vector<int> &result, vector<double> vectorX, vector<double> vectorY, vector<double> vectorZ, double radius);

#endif
