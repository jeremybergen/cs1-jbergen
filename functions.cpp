#include <iostream>

using namespace std;

string promptName()
{
    string fName;
    cout << "In promptName: &fName: " << &fName << endl;
    cout << "Please enter your first name: ";
    cin >> fName;

    return fName;
}

double moreNums(float num1)
{
    num1++;
    //Talk about this...
    ++num1++;
    num1--;
    --num1;
    return 42.5;
}

void sayHello()
{
    cout << "Hello World" << endl;
}

int main()
{
    sayHello();
    // string fName;
    // cout << "in Main: &fName: " << &fName << endl;
    // fName = promptName();

    // cout << "Hello " << fName << endl;

    // cout << "We got the number: " << moreNums() << endl;
    return 0;
}