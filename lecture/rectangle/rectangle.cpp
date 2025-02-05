/*
Name: Jeremy Bergen

Rectangle Calculator

Step 1: Prompt for name
Step 2: Greet name and explain program
Step 3: Prompt for sides
Step 4: Calculate area of rectangle
Step 5: Calculate perimeter of rectangle
Step 6: Print out values
*/

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

// NEVER DO!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// int myNum = 42;
const int myNum = 42;

// Step 1: Prompt for name
string promptName()
{
    string fullName;
    cout << "Please enter your full name: ";
    getline(cin, fullName);

    return fullName;
}
// Step 2: Greet name and explain program
void greetUser(string name)
{
    cout << "Hello " << name << " welcome to the rectangle calculator." << endl;
}
// Step 3: Prompt for sides
void promptSides(string name, float &s1, float &s2)
{
    // float s1;
    // float s2;

    cout << name << " now we are going to get the sides" << endl;
    cout << "Enter the the sides of your rectangle: ";
    cin >> s1 >> s2;

    // return s1;
}
// Step 4: Calculate area of rectangle
float calcArea(float s1, float s2)
{
    // cout << "DEBUG: s1: " << s1 << ", s2: " << s2 << endl;
    return s1 * s2;
}
// Step 5: Calculate perimeter of rectangle
float calcPerim(float s1, float s2)
{
    return (2 * s1) + (2 * s2);
}
// Step 6: Print out values
void printVals(float s1, float s2, float area, float perim)
{
    // printf("Your rectangle with sides %f and %f has an area of %f and a perimeter of %f\n", s1, s2, area, perim);
    cout << "Your rectangle with sides " << s1 << " and " << s2 << " has an area of " << area << " and a perimeter of " << perim << "\n";
}

int main()
{
    string fullName;
    float s1;
    float s2;
    float area;
    float perim;

    // Step 1: Prompt for name
    fullName = promptName();

    // Step 2: Greet name and explain program
    greetUser(fullName);
    // greetUser(promptName());

    // Step 3: Prompt for sides
    // s1 = promptSides(fullName);
    // s2 = promptSides(fullName);
    promptSides(fullName, s1, s2);

    // Step 4: Calculate area of rectangle
    area = calcArea(s1, s2);

    // Step 5: Calculate perimeter of rectangle
    perim = calcPerim(s1, s2);

    // Step 6: Print out values
    printVals(s1, s2, area, perim);

    return 0;
}