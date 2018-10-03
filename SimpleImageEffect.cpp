#include "SimpleImageEffect.h"

/*
SimpleImageEffect::SimpleImageEffect(){}//constructor

//a vector of Points at the memory address of points
void processImage(vector<Point> &points){} ///Made virtual in header file
{
    
    //this just helps you implement the various effects on
    //the vector of points that make up the entire image
    //All image effects will be derived from this

    Point singleEditedPoint(0, 0, 0);

    ofstream output_stream;
    output_stream.open("outFiles.txt");
    cout << "SimpleImageEffect is kinda working, yay!" << endl;

    //just a vector of points at this point
    for(int i = 0; i < (3 * points.size()); i++)
    {
        int r = points[i].getRed(); //0
        int b = points[i].getBlue(); //1
        int g = points[i].getGreen(); //2

        if((i > 1) && (i%3 == 0)) //after first loop, add whenever i%3 = 0
        {
            Point singleEditedPoint(r, b, g);
            points[i] = singleEditedPoint;
            //editedPoints.push_back(singleEditedPoint);
        }
    }
    //put vector in a file so we can edit again later
    //output_stream << "asdf" << endl;

    for(int i = 1; i <= points.size(); i++)
    {
        if(i%3 == 1)
        {
             int r = singleEditedPoint.getRed();
             output_stream << r;
        }
        else if(i%3 == 2)
        {
             int b = singleEditedPoint.getBlue();
             output_stream << b;
        }
        else if(i%3 == 0)
        {
             int g = singleEditedPoint.getGreen();
             output_stream << g;
        }
    }

    output_stream.close();

}


*/