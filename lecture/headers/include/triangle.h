#pragma once
#include <iostream>
#include <cmath>

namespace triangle
{
    void promptSides(int&, int&, int&);
    void calcArea(int, int, int, float&);
    void calcPerim(int, int, int, int&);
    void printVals(int, int, int, float, int);

    void promptSides(int& s1, int& s2, int& s3)
    {
        do
        {
            std::cout << "Enter side 1, must be greater than 0: ";
            std::cin >> s1;
        } while (s1 < 1);

        do
        {
            std::cout << "Enter side2, must be greater than 0: ";
            std::cin >> s2;
        } while (s2 < 1);

        do
        {
            std::cout << "Enter side3, must be greater than 0: ";
            std::cin >> s3;
        } while (s3 < 1);
    }
    void calcArea(int s1, int s2, int s3, float& area)
    {
        float s;
        int perim;
        calcPerim(s1, s2, s3, perim);
        s = perim/2.0;
        area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
    }
    void calcPerim(int s1, int s2, int s3, int& perim)
    {
        perim = s1 + s2 + s3;
    }
    void printVals(int s1, int s2, int s3, float area, int perim)
    {
        std::cout << "The triangle with sides " << s1 << ", " << s2 << ", " << s3
                << " has an area of " << area
                << " and a perimeter of " << perim << std::endl;
    }
}