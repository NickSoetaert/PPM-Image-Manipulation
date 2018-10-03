#ifndef READ_FROM_FILE_TO_CREATE_VECTOR_H
#define READ_FROM_FILE_TO_CREATE_VECTOR_H

#include <vector>
#include <iostream>
#include <fstream>
#include <cstdlib>

#include "Point.h"

using namespace std;

vector<Point> readFromFileToCreateVector(string inputFilename)//, int desiredEffect)
{
    ifstream input_stream;
    input_stream.open(inputFilename.c_str()); //input file name
    if(input_stream.fail()){
        cout << "~~~~ File failed to open. Exiting program. ~~~~" << endl;
        exit(1);
    }
    else{
        cout << "~~~~ Successfully Opened File ~~~~" << endl;
    }

    string p3Header; //gets rid of the header P3
    int imageWidth, imageHeight, maxInt;

    //This "erases" the unwanted color values.
    input_stream >> p3Header >> imageWidth >> imageHeight >> maxInt;

    ofstream output_stream;
    string outFilename = "Edited_" + inputFilename;
    output_stream.open(outFilename.c_str());
    output_stream << p3Header << endl;
    output_stream << imageWidth << " " << imageHeight << endl
                    << maxInt << endl;

    vector<Point> points;
    int nextInt;
    int whatNumWereOn = 1;
    Point myPoint(0,0,0); //just a dummy value, will be modified.

    while(input_stream >> nextInt)
     {
        if(whatNumWereOn%3 == 1){
            myPoint.setRed(nextInt);
        }
        else if(whatNumWereOn%3 == 2){
            myPoint.setGreen(nextInt);
        }
        else{ //%3 == 0
            myPoint.setBlue(nextInt);
        }

        if((whatNumWereOn > 2) && (whatNumWereOn%3 == 0)){
            points.push_back(myPoint);
        }
        whatNumWereOn++;
     }
return points;
}

#endif // READ_FROM_FILE_TO_CREATE_VECTOR_H
