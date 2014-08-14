#include <cmath>
#include <cstring>
#include <string>
#include "MatrixMath.h"
#include <QApplication>

using namespace std;

const double PI = 3.14159265358979323846;

double Conversion(double input, string units)
{
	double output;
		
	if (units == "mm")
	{
		output = input;
	}

	if (units == "cm")
	{
		output = 10*input;
	}
	
	if (units == "m")
	{
		output = 1000*input;
	}
	
	if (units == "in")
	{
		output = 25.4*input;
	}

	if (units == "ft")
	{
		output = 304.8*input;
	}
	
	if (units == "rad")
	{
		output = input;
	}

	if (units == "deg")
	{
		output = (PI/180)*input;
	}
	
	return output;
}

double Dot(double vector1[], double vector2[], int size)
{
	double result = 0;

	for(int i=0; i<size; i++)
	{
		result += vector1[i]*vector2[i];
	}

	return result;
}

void Cross(double result[], double vector1[], double vector2[], int size)
{
    for(int i = 0; i < size; i++)
	{
        result[i] = vector1[(i+1)%size]*vector2[(i+2)%size] - vector1[(i+2)%size]*vector2[(i+1)%size];
	}

	return;
}

void Normalize(double vector[], int size)
{
	double lengthOfVector;

	lengthOfVector = sqrt(Dot(vector, vector, 3));

    for(int i = 0; i < size; i++)
	{
		vector[i] = vector[i]/lengthOfVector;
	}

	return;
}

void Equivalent(double result[], double input[], int size)
{
    for (int i = 0; i < size; i++)
    {
        result[i] = input[i];
    }
}

void MatrixMultiply(double result[], double matrix[][3], double vector1[], int size)
{
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			if(j==0)
			{
				result[i] = 0;
			}

            result[i] = result[i] + matrix[i][j]*vector1[j];
		}
	}


	return;
}

void MatrixMultiply(double result[][3], double matrix1[][3], double matrix2[][3], int size)
{
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			result[i][j] = 0;
	
			for(int k=0; k<size; k++)
			{
			result[i][j] = result[i][j] + matrix1[i][k]*matrix2[k][j];
			}
		}
	}
	
	return;
}

void MatrixMultiply(double result[], double matrix1[][3], double matrix2[][3], double vector1[], int size)
{
    double intermediateMatrix[3][3];

    MatrixMultiply(intermediateMatrix, matrix1, matrix2, size);
    MatrixMultiply(result, intermediateMatrix, vector1, size);

    return;
}
