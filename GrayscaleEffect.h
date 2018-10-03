#ifndef GRAYSCALE_EFFECT_H
#define GRAYSCALE_EFFECT_H

#include <vector>

using namespace std;

class GrayscaleEffect : public SimpleImageEffect
{
    public:
    void processImage(vector<Point> &points){

        for(int i = 0; i < (points.size()); i++)
        {
            int r = points[i].getRed(); //0
            int g = points[i].getGreen(); //1
            int b = points[i].getBlue(); //2

            int avg = ((r+g+b)/3);

            r = avg;
            g = avg;
            b = avg;

            Point singleEditedPoint(r, g, b);
            points[i] = singleEditedPoint;
        }
    }
};

#endif
