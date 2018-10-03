#ifndef NEGATE_RED_EFFECT_H
#define NEGATE_RED_EFFECT_H

#include <vector>

using namespace std;

class NegateRedEffect : public SimpleImageEffect
{
    public:
    void processImage(vector<Point> &points){

        for(int i = 0; i < (points.size()); i++)
        {
            int r = 255 - points[i].getRed(); //0
            int g = points[i].getGreen(); //1
            int b = points[i].getBlue(); //2

            Point singleEditedPoint(r, g, b);
            points[i] = singleEditedPoint;
        }
    }
};

#endif

