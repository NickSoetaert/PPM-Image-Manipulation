#ifndef REMOVE_BLUE_EFFECT_H
#define REMOVE_BLUE_EFFECT_H

#include <vector>

using namespace std;

class RemoveBlueEffect : public SimpleImageEffect
{
    public:
    void processImage(vector<Point> &points){

        for(int i = 0; i < (points.size()); i++)
        {
            int r = points[i].getRed(); //0
            int g = points[i].getGreen(); //1
            int b = 0; //2

            Point singleEditedPoint(r, g, b);
            points[i] = singleEditedPoint;
        }
    }
};

#endif
