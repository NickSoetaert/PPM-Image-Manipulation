#ifndef RANDOM_NOISE_EFFECT_H
#define RANDOM_NOISE_EFFECT_H

#include <vector>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;

class RandomNoiseEffect : public SimpleImageEffect
{
    public:
    void processImage(vector<Point> &points){

        srand(time(NULL));

        for(int i = 0; i < (points.size()); i++)
        {
            //although the assignment says a value -10 to 10, a better
            //value is closer to -50 to 50. -10 to 10 isn't even visible.
            int randRed = rand() % 100;
            int randGreen = rand() % 100;
            int randBlue = rand() % 100;

            if(randRed > 50){
                randRed = randRed - 100;
            }
            if(randGreen > 50){
                randGreen = randGreen - 100;
            }
            if(randBlue > 50){
                randBlue = randBlue - 100;
            }

            int r = points[i].getRed(); //0
            int g = points[i].getGreen(); //1
            int b = points[i].getBlue(); //2

            //cout << "r: " << r <<  endl << "randRed: " << randRed << endl;
            //cout << randGreen << endl << randBlue << endl;

            r += randRed;

            //cout << "r+= randRed: " << r << endl;

            g += randGreen;

            b += randBlue;

            if(r > 255){
                r = 255;
            }
            if(r < 0){
                r = 0;
            }
            if(g > 255){
                g = 255;
            }
            if(g < 0){
                g = 0;
            }
            if(b > 255){
                b = 255;
            }
            if(b < 0){
                b = 0;
            }

            Point singleEditedPoint(r, g, b);
            points[i] = singleEditedPoint;
        }
    }
};

#endif
