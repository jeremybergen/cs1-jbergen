#include <iostream>
#include "include/rectangle.h"
#include "include/triangle.h"

using namespace std;

int main(int argc, char* argv[])
{
    int side1, side2, side3, area, perim;
    float triArea;
    string name;

    name = promptName();
    greetName(name);
    getSides(side1, side2);
    calcArea(side1, side2, area);
    calcPerim(side1, side2, perim);
    printVals(side1, side2, area, perim);

    triangle::promptSides(side1, side2, side3);
    triangle::calcArea(side1, side2, side3, triArea);
    triangle::calcPerim(side1, side2, side3, perim);
    triangle::printVals(side1, side2, side3, triArea, perim);

    return 0;
}

