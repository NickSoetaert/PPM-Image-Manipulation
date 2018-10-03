//Nick Soetaert

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "ProcessImage.h"
#include "AskForInput.h"
#include "ReadFromFileToCreateVector.h"
#include "Point.h"

using namespace std;

int main()
{
    int tempMethodNum = 10;
    string filename;

    cout << "Please enter your filename." << endl;
    cin >> filename;

    vector<Point> pointsVector;
    pointsVector = readFromFileToCreateVector(filename);

    while (tempMethodNum != 0)
    {
        askForInput();
        cin >> tempMethodNum;
        if(tempMethodNum != 0) //looks redundant, but keep.
        {
            int desiredEffect = tempMethodNum; //check if user input 0

            //THIS IS THE SINGLE LINE THAT EDITS THE ENTIRE ARRAY
            processImage(pointsVector, desiredEffect); //edits pointsVector with Pass by Ref
        }
    }

    ofstream output_stream;
    string outFilename = "Edited_" + filename;
    output_stream.open(outFilename.c_str(), std::ios_base::app); //app appends to the file

    //This just breaks down points to put them into a file.
    for(int i = 0; i < pointsVector.size(); i++)
    {
        int r = pointsVector[i].getRed();
        int g = pointsVector[i].getGreen();
        int b = pointsVector[i].getBlue();
        output_stream << r  << " " << g << " " << b << " ";
    }
return 0;
}
