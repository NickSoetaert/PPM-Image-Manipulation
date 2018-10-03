#ifndef SIMPLEIMAGEEFFECT_H
#define SIMPLEIMAGEEFFECT_H

#include <vector>
#include <iostream>
#include <fstream>
#include <cstdlib>

#include "Point.h"

class SimpleImageEffect
{
    public:
    //pass by reference, so points can be edited from within.
    virtual void processImage(vector<Point> &points){
    cout << "the {} are needed to avoid a vtable error" << endl;
    }
};

#endif // SIMPLEIMAGEEFFECT_H
