#include "Point.h"

Point::Point(int r, int g, int b) //constructor
{
    _red = r;
    _green = g;
    _blue = b;
}

//getters
int Point::getRed()
{
    return _red;
}

int Point::getBlue()
{
    return _blue;
}

int Point::getGreen()
{
    return _green;
}

//setters
void Point::setRed(int r)
{
    _red = r;
}

void Point::setBlue(int b)
{
    _blue = b;
}

void Point::setGreen(int g)
{
    _green = g;
}

//converts a Point into a string
string Point::toString()
{
    stringstream ssRed;
    ssRed << _red;
    string myRedString = ssRed.str();


    stringstream ssGreen;
    ssGreen << _green;
    string myGreenString = ssGreen.str();

    stringstream ssBlue;
    ssBlue << _blue;
    string myBlueString = ssBlue.str();

    string pointString = myRedString + " " +
                        myGreenString + " " +
                        myBlueString + " ";

    return pointString;
}
