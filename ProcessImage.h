#ifndef PROCESS_IMAGE_H
#define PROCESS_IMAGE_H

#include <vector>
#include "Point.h"
#include "SimpleImageEffect.h"
#include "RemoveRedEffect.h"
#include "RemoveGreenEffect.h"
#include "RemoveBlueEffect.h"
#include "NegateRedEffect.h"
#include "NegateGreenEffect.h"
#include "NegateBlueEffect.h"
#include "RandomNoiseEffect.h"
#include "HighContrastEffect.h"
#include "GrayscaleEffect.h"

void processImage(vector<Point> &uneditedPointsVector, int desiredEffect)
{
    //RemoveRedEffect imageToProcess;

    switch(desiredEffect){
        case 1:{
            RemoveRedEffect imageToProcess;
            imageToProcess.processImage(uneditedPointsVector);
            break;
        }
        case 2:{
            RemoveGreenEffect imageToProcess;
            imageToProcess.processImage(uneditedPointsVector);
            break;
        }
        case 3:{
            RemoveBlueEffect imageToProcess;
            imageToProcess.processImage(uneditedPointsVector);
            break;
        }
        case 4:{
            NegateRedEffect imageToProcess;
            imageToProcess.processImage(uneditedPointsVector);
            break;
        }
        case 5:{
            NegateGreenEffect imageToProcess;
            imageToProcess.processImage(uneditedPointsVector);
            break;
        }
        case 6:{
            NegateBlueEffect imageToProcess;
            imageToProcess.processImage(uneditedPointsVector);
        }
        case 7:{
            RandomNoiseEffect imageToProcess;
            imageToProcess.processImage(uneditedPointsVector);
            break;
        }
        case 8:{
            HighContrastEffect imageToProcess;
            imageToProcess.processImage(uneditedPointsVector);
            break;
        }
        case 9:{
            GrayscaleEffect imageToProcess;
            imageToProcess.processImage(uneditedPointsVector);
            break;
        }
        case 0:{
            break;
        }
    }
}

#endif // PROCESS_IMAGE_H
