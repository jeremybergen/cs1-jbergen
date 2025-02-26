#include <iostream>

using namespace std;

int main()
{
    int num1;
    int* ptr1;

    ptr1 = &num1;

    cout << "Enter a number: ";
    // cin >> *ptr1;
    cin >> *(&num1);

    cout << "*ptr1: " << *ptr1 << endl;
    // int num1;
    // int num2;

    // int* ptr1;
    // int** ptr2;
    // int*** ptr3;
    // // int *ptr2;
    // // int * ptr3;

    // num1 = 42;
    // num2 = 15;

    // ptr1 = &num1;
    // ptr2 = &ptr1;
    // ptr3 = &ptr2;

    // cout << "&num1: " << &num1 << endl;
    // cout << "*(&num1): " << *(&num1) << endl;
    // cout << "ptr1: " << ptr1 << endl;
    // cout << "*ptr1: "<< *ptr1 << endl;
    // cout << "&ptr2: " << &ptr2 << endl;
    // cout << "*ptr2: "<< *ptr2 << endl;
    // cout << "**ptr2: " << *(*ptr2) << endl;

    // cout << "&ptr3: " << &ptr3 << endl;
    // cout << "*ptr3: "<< *ptr3 << endl;
    // cout << "**ptr3: " << *(*ptr3) << endl;
    // cout << "***ptr3: " << *(*(*ptr3)) << endl;

    // cout << "&num1: " << &num1 << endl;
    // cout << "&num2: " << &num2 << endl;
    // cout << "&ptr1: " << &ptr1 << endl;
    // cout << "ptr1:  " << ptr1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;
    // ptr1 = &num2;
    // cout << "ptr1:  " << ptr1 << endl;
    // cout << "*ptr1:" << *ptr1 << endl;

    return 0;
}