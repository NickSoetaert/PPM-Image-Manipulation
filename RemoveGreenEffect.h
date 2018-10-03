#ifndef REMOVE_GREEN_EFFECT_H
#define REMOVE_GREEN_EFFECT_H

#include <vector>

using namespace std;

class RemoveGreenEffect : public SimpleImageEffect
{
    public:
    void processImage(vector<Point> &points){

        for(int i = 0; i < (points.size()); i++)
        {
            int r = points[i].getRed(); //0
            int g = 0; //1
            int b = points[i].getBlue(); //2

            Point singleEditedPoint(r, g, b);
            points[i] = singleEditedPoint;
        }
    }
};

#endif

