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

// Step 1: Prompt for name
string promptName()
{
    return "";
}
// Step 2: Greet name and explain program
void greetUser(string name)
{

}
// Step 3: Prompt for sides
float promptSides(string name)
{
    return 0.0;
}
// Step 4: Calculate area of rectangle
float calcArea(float s1, float s2)
{
    return 0.0;
}
// Step 5: Calculate perimeter of rectangle
float calcPerim(float s1, float s2)
{
    return 0.0;
}
// Step 6: Print out values
void printVals(float s1, float s2, float perim, float area)
{

}

int main()
{
    string fullName;
    float s1;
    float s2;
    float area;
    float perim;

    // Step 1: Prompt for name
    cout << "Please enter your full name: ";
    getline(cin, fullName);

    // Step 2: Greet name and explain program
    cout << "Hello " << fullName << " welcome to the rectangle calculator." << endl;

    // Step 3: Prompt for sides
    cout << "Enter the two sides of your rectangle: ";
    cin >> s1 >> s2;

    // Step 4: Calculate area of rectangle
    area = s1 * s2;

    // Step 5: Calculate perimeter of rectangle
    perim = (2 * s1) + (2 * s2);

    // Step 6: Print out values
    printf("Your rectangle with sides %f and %f has an area of %f and a perimeter of %f\n", s1, s2, area, perim);
    cout << "Your rectangle with sides " << s1 << " and " << s2 << " has an area of " << area << " and a perimeter of " << perim << "\n";

    return 0;
}