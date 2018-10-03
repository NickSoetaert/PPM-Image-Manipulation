#ifndef HIGH_CONTRAST_EFFECT_H
#define HIGH_CONTRAST_EFFECT_H

#include <vector>

using namespace std;

//if color value >=128, set to 255. Else, set to 0.
class HighContrastEffect : public SimpleImageEffect
{
    public:
    void processImage(vector<Point> &points){

        for(int i = 0; i < (points.size()); i++)
        {
            int r = points[i].getRed(); //0
            int g = points[i].getGreen(); //1
            int b = points[i].getBlue(); //2

            if(r>=128){
                r = 255;
            }
            else{
                r = 0;
            }
            if(g>=128){
                g = 255;
            }
            else{
                g = 0;
            }
            if(b>=128){
                b = 255;
            }
            else{
                b=0;
            }

            Point singleEditedPoint(r, g, b);
            points[i] = singleEditedPoint;
        }
    }
};

#endif




