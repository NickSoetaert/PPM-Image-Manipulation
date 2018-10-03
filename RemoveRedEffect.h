#ifndef REMOVE_RED_EFFECT_H
#define REMOVE_RED_EFFECT_H

#include <vector>

using namespace std;

class RemoveRedEffect : public SimpleImageEffect
{
    public:
    void processImage(vector<Point> &points){

        for(int i = 0; i < (points.size()); i++)
        {
            int r = 0; //0
            int g = points[i].getGreen(); //1
            int b = points[i].getBlue(); //2

            Point singleEditedPoint(r, g, b);
            points[i] = singleEditedPoint;
        }
    }
};

#endif
