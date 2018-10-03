#ifndef ASK_FOR_INPUT_H
#define ASK_FOR_INPUT_H

#include <iostream>

using namespace std;

void askForInput()
{
    cout << "Please select method:" << endl
    << "[1]Remove Red" << endl
    << "[2]Remove Green" << endl
    << "[3]Remove Blue" << endl
    << "[4]Negate Red" << endl
    << "[5]Negate Green" << endl
    << "[6]Negate Blue" << endl
    << "[7]Add Noise" << endl
    << "[8]High Contrast" << endl
    << "[9]Grayscale" << endl
    << "[0]Exit" << endl;
}

#endif
