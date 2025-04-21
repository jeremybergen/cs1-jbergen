#include "rectangle.h"

string promptName()
{
    string name;
    cout << "Welcome to our rectangle calculator. What is your name? ";
    getline(cin, name);
    return name;
}
void greetName(string name)
{
    cout << "Welcome " << name << endl;
}
void getSides(int& s1, int& s2)
{
    do
    {
        cout << "Enter side 1, must be greater than 0: ";
        cin >> s1;
    } while (s1 < 1);

    do
    {
        cout << "Enter side2, must be greater than 0: ";
        cin >> s2;
    } while (s2 < 1);
    
}
void calcArea(int s1, int s2, int& area)
{
    area = s1*s2;
}
void calcPerim(int s1, int s2, int& perim)
{
    perim = 2*s1 + 2*s2;
}
void printVals(int s1, int s2, int area, int perim)
{
    cout << "The rectangle with sides " << s1 << " and " << s2
         << " has an area of " << area
         << " and a perimeter of " << perim << endl;
}