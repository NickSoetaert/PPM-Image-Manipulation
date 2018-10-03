#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <fstream>

using namespace std;

class Point
{
    public:
        Point(int r, int g, int b); //constructor

        //getters
        int getRed();
        int getGreen();
        int getBlue();
        //setters
        void setRed(int newRed);
        void setBlue(int newBlue);
        void setGreen(int newGreen);

        //I believe this is supposed to convert a Point into a string so it can be put into a ppm file
        string toString();

    private:
        int _red;
        int _green;
        int _blue;
};

#endif // POINT_H
