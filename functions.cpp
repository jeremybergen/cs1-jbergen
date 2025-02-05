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
    ++num1;
    //Talk about this...
    // ++num1++;
    // num1 + 1 = num1 + 1;
    // num1 += 1;
    num1--;
    --num1;
    return 42.5;
}

void sayHello()
{
    cout << "Hello World" << endl;
}

int addNums(int num1, int num2, string fName, double n3)
{
    cout << "Inside addNums: " << endl;
    cout << "&num1: " << &num1 << endl;
    cout << "&num2: " << &num2 << endl;
    int sum;
    sum = num1 + num2;
    return sum;
}

int main()
{
    int n1;
    int n2;
    int result;

    cout << "Enter two numbers separated by a space: ";
    cin >> n1 >> n2;
    cout << "Inside Main: " << endl;
    cout << "&n1: " << &n1 << endl;
    cout << "&n2: " << &n2 << endl;

    result = addNums(n1, n2, "Jeremy", 42.5);
    result = addNums(n1, n2, "", 0.0);
    cout << n1 << " + " << n2 << " = " << result << endl;
    // sayHello();
    // string fName;
    // cout << "in Main: &fName: " << &fName << endl;
    // fName = promptName();

    // cout << "Hello " << fName << endl;

    // cout << "We got the number: " << moreNums() << endl;
    return 0;
}