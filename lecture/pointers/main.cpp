#include <iostream>

using namespace std;

int* readNumber();
void printNumber(int*);

void addNums(int*, int&);

int main()
{
    // int* num1 = new int;
    int* num2 = new int;
    int num1;

    num1 = 42;
    *num2 = 15;

    addNums(&num1, *num2);

    // delete num1;
    delete num2;
    // int* heapPtr;
    // heapPtr = new int;
    // cout << "&heapPtr: " << &heapPtr << endl;
    // cout << "heapPtr: " << heapPtr << endl;

    // *heapPtr = 42;

    // cout << "*heapPtr: " << *heapPtr << endl;
    // int num1;
    // int* ptr1;

    // // ptr1 = &num1;
    // ptr1 = readNumber();
    // cout << "DEBUG: inside main: ptr1: " << ptr1 << endl;
    // cout << "DEBUG: inside main: *ptr1: " << *ptr1 << endl;
    // (*ptr1)++;

    // printNumber(ptr1);


    
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
    // delete ptr1;

    return 0;
}

void addNums(int* n1, int& n2)
{
    cout << *n1 << " + " << n2 << " = " << *n1+n2 << endl;
}

int* readNumber()
{
    // int num1;
    int* ptr;
    ptr = new int;

    cout << "Enter a number: ";
    cin >> *ptr;
    // cin >> *(&num1);
    cout << "DEBUG: inside readNumber: *ptr: " << *ptr << endl;

    cout << "DEBUG: inside readNumber: ptr: " << ptr << endl;
    return ptr;
}
void printNumber(int* ptr)
{
    cout << "*ptr: " << *ptr << endl;
}