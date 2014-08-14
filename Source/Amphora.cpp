#include <cmath>
#include <vector>
#include <string>
#include "MatrixMath.h"
#include "Amphora.h"

using namespace std;

const int DIMENSIONS = 3;


void Rotation(double rotationMatrix[][3], double axisOfRotation[], double angleOfRotation)
{
    rotationMatrix[0][0] = cos(angleOfRotation) + axisOfRotation[0]*axisOfRotation[0]*(1-cos(angleOfRotation));
    rotationMatrix[1][1] = cos(angleOfRotation) + axisOfRotation[1]*axisOfRotation[1]*(1-cos(angleOfRotation));
    rotationMatrix[2][2] = cos(angleOfRotation) + axisOfRotation[2]*axisOfRotation[2]*(1-cos(angleOfRotation));
	
    rotationMatrix[0][1] = -axisOfRotation[2]*sin(angleOfRotation) + axisOfRotation[0]*axisOfRotation[1]*(1-cos(angleOfRotation));
    rotationMatrix[0][2] =  axisOfRotation[1]*sin(angleOfRotation) + axisOfRotation[0]*axisOfRotation[2]*(1-cos(angleOfRotation));
	
    rotationMatrix[1][0] =  axisOfRotation[2]*sin(angleOfRotation) + axisOfRotation[0]*axisOfRotation[1]*(1-cos(angleOfRotation));
    rotationMatrix[1][2] = -axisOfRotation[0]*sin(angleOfRotation) + axisOfRotation[1]*axisOfRotation[2]*(1-cos(angleOfRotation));
	
    rotationMatrix[2][0] = -axisOfRotation[1]*sin(angleOfRotation) + axisOfRotation[0]*axisOfRotation[2]*(1-cos(angleOfRotation));
    rotationMatrix[2][1] =  axisOfRotation[0]*sin(angleOfRotation) + axisOfRotation[1]*axisOfRotation[2]*(1-cos(angleOfRotation));

	return;
}

void Intersection(double intersectionLocation[], double locationOfPhonon[], double projectionOfPhonon[], double lengthToIntersect)
{	
	for(int i=0; i<DIMENSIONS; i++)
	{
		intersectionLocation[i] = locationOfPhonon[i] + lengthToIntersect*projectionOfPhonon[i];
	}

	return;
}
	
void Reflection(double projectionOfPhonon[], double vectorNormal[])
{
	double angleReflection;
	double vectorReflection[DIMENSIONS];
	double rotationReflection[DIMENSIONS][DIMENSIONS];

    angleReflection = acos(-Dot(vectorNormal, projectionOfPhonon, DIMENSIONS));

    Cross(vectorReflection, vectorNormal, projectionOfPhonon, DIMENSIONS);
	Normalize(vectorReflection, DIMENSIONS);

	Rotation(rotationReflection, vectorReflection, angleReflection);

	MatrixMultiply(projectionOfPhonon, rotationReflection, vectorNormal, DIMENSIONS);

    return;
}

void BinarySort(vector<double>& vectorX, vector<double>& vectorY, vector<double>& vectorZ, double locationOfPhonon[])
{
    int numberOfElements = vectorX.size();

    int bottomIndex = 0;
    int topIndex = numberOfElements - 1;
    int middleIndex;


    vector<double>::iterator indexOriginX;
    vector<double>::iterator indexOriginY;
    vector<double>::iterator indexOriginZ;

    indexOriginX = vectorX.begin();
    indexOriginY = vectorY.begin();
    indexOriginZ = vectorZ.begin();



    bool isDone = false;

    if (numberOfElements > 0)
    {
        isDone = false;
        middleIndex = ceil((topIndex + bottomIndex)/2.0);
    }
    else
    {
        isDone = true;
        topIndex = 0;
    }


    while(!isDone)
    {
        if(locationOfPhonon[0] > vectorX[middleIndex])
        {
            bottomIndex = middleIndex + 1;
            middleIndex = ceil((topIndex + bottomIndex)/2.0);


            if(bottomIndex >= numberOfElements - 1)
            {
                topIndex = bottomIndex;
                break;
            }
        }
        else if(locationOfPhonon[0] < vectorX[middleIndex])
        {
            topIndex = middleIndex;
            middleIndex = floor((topIndex + bottomIndex)/2.0);

            if(topIndex <= 0)
            {
                break;
            }
        }
        else
        {
            topIndex = bottomIndex;
        }

        if(bottomIndex >= topIndex)
        {
            isDone = true;
        }
    }

    if(topIndex <= 0)
    {
        vectorX.insert(indexOriginX, locationOfPhonon[0]);
        vectorY.insert(indexOriginY, locationOfPhonon[1]);
        vectorZ.insert(indexOriginZ, locationOfPhonon[2]);
    }
    else if(topIndex >= numberOfElements - 1)
    {
        vectorX.push_back(locationOfPhonon[0]);
        vectorY.push_back(locationOfPhonon[1]);
        vectorZ.push_back(locationOfPhonon[2]);
    }
    else
    {
        vectorX.insert(indexOriginX + topIndex, locationOfPhonon[0]);
        vectorY.insert(indexOriginY + topIndex, locationOfPhonon[1]);
        vectorZ.insert(indexOriginZ + topIndex, locationOfPhonon[2]);
    }

    return;
}

void DataProcessing(vector<int>& result, vector<double> vectorX, vector<double> vectorY, vector<double> vectorZ, double radius)
{
    int density;
    int lowestIndex;
    int highestIndex;

    bool isLowestDone = false;
    bool isHighestDone = false;

    for(int i = 0; i < vectorX.size(); i++)
    {
        lowestIndex = i;
        highestIndex = i;

        density = 0;


        do
        {
            lowestIndex = lowestIndex - 100;


            if(lowestIndex < 0)
            {
                lowestIndex = 0;
                isLowestDone = true;
            }

            if(vectorX[i] - vectorX[lowestIndex] > radius)
            {
                isLowestDone = true;
            }
        } while(!isLowestDone);

        do
        {
            highestIndex = highestIndex + 100;


            if(highestIndex > vectorX.size() - 1)
            {
                highestIndex = vectorX.size() - 1;
                isHighestDone = true;
            }

            if(vectorX[highestIndex] - vectorX[i] > radius)
            {
                isHighestDone = true;
            }
        } while(!isHighestDone);

        for(int j = lowestIndex; j <= highestIndex; j++)
        {
            if(pow(radius,2) <= pow(vectorX[j] - vectorX[i],2) + pow(vectorY[j] - vectorY[i], 2) + pow(vectorZ[j] - vectorZ[i], 2))
            {
                density++;
            }
        }

        result.push_back(density);
    }

    return;
}
