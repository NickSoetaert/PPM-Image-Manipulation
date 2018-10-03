#ifndef NEGATE_BLUE_EFFECT_H
#define NEGATE_BLUE_EFFECT_H

#include <vector>

using namespace std;

class NegateBlueEffect : public SimpleImageEffect
{
    public:
    void processImage(vector<Point> &points){

        for(int i = 0; i < (points.size()); i++)
        {
            int r = points[i].getRed(); //0
            int g = points[i].getGreen(); //1
            int b = 255 - points[i].getBlue(); //2

            Point singleEditedPoint(r, g, b);
            points[i] = singleEditedPoint;
        }
    }
};

#endif



