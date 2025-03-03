#include <iostream>

using namespace std;

void printArray(int*, size_t);

int main()
{
    size_t arrSize = 5;
    
    // int* ptr;

    // cout << sizeof(numbers)/sizeof(int) << endl;

    cout << "How many numbers do you want: ";
    cin >> arrSize;
    int numbers[arrSize];

    for(size_t i = 0; i < arrSize; i++)
    {
        cout << "Enter a number: ";
        cin >> numbers[i];
    }

    printArray(numbers, arrSize);

    // cout << "*numbers: " << *numbers << endl;
    // cout << "numbers: " << numbers << endl;

    // for(int i = 0; i < 5; i++)
    // {
    //     cout << "&numbers[" << i << "]: " 
    //          << &numbers[i] << endl;
    // }

    // ptr = &numbers[0];
    // ptr = numbers;


    // cout << "*ptr: " << *ptr << endl;
    // ptr++;
    // cout << "*ptr: " << *ptr << endl;

    // numbers[0] = 42;
    // numbers[1] = 15;
    // numbers[2] = 23;
    // numbers[3] = 9000;
    // numbers[4] = -1;

    // cout << numbers[0] << endl;
}

void printArray(int *numbers, size_t arrSize)
{
    // cout << sizeof(numbers) << endl;
    for(size_t i = 0; i < arrSize; i++)
    {
        // cout << "numbers[" << i << "]: "
        //      << numbers[i] << endl;
        cout << "*numbers+" << i << ": " 
             << *(numbers+i) << endl;
        // cout << "*ptr: " << *ptr << endl;
        // ptr++;
    }
}