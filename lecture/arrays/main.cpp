#include <iostream>

using namespace std;

void printArray(int[][3], size_t);

int main()
{
    int* moreNumbers[5];

    for(int i = 0; i < 5; i++)
    {
        int* tmpArray = new int[5];
        moreNumbers[i] = tmpArray;
    }

    for(int i = 0; i < 5; i++)
    {
        cout << moreNumbers[i] << endl;
    }

    for(int i = 0; i < 5; i++)
    {
        delete[] moreNumbers[i];
    }
    // size_t arrSize = 1000000000;
    // int numbers[arrSize];
    // int* numbers = new int[arrSize];

    // int* numbers = new int[1900][1080][4];
    // int* img = new int[8208000];
    // int counter = 1;

    // img[0][0][0] = 255;

    // for(int i = 0; i < 3; i++)
    // {
    //     for(int j = 0; j < 3; j++)
    //     {
    //         for(int k = 0; k < 3; k++)
    //         {
    //             cout << "&numbers[" << i << "][" << j << "][" << k << "]: " 
    //              << &numbers[i][j][k] << endl;
    //             numbers[i][j][k] = counter;
    //             counter++;
    //         }
    //     }
    // }

    // for(int i = 0; i < 3; i++)
    // {
    //     for(int j = 0; j < 3; j++)
    //     {
    //         for(int k = 0; k < 3; k++)
    //         {
    //             cout << numbers[i][j][k] << " ";
    //         }
    //         cout << endl;
    //     }
    //     cout << endl;
    // }


    // printArray(numbers, arrSize);

    // int* ptr = &numbers[0][0];

    // for(int i = 0; i < 9; i++)
    // {
    //     cout << *ptr << " ";
    //     ptr++;
    // }

    // for(int i = 0; i < 3; i++)
    // {
    //     for(int j = 0; j < 3; j++)
    //     {
    //         cout << numbers[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // numbers[0][0] = 1;
    // numbers[1][1] = 5;
    // numbers[2][1] = 8;

    // int* numbers = new int[arrSize];
    
    // int* ptr;

    // cout << sizeof(numbers)/sizeof(int) << endl;

    // cout << "How many numbers do you want: ";
    // cin >> arrSize;
    // int numbers[arrSize];

    // for(size_t i = 0; i < arrSize; i++)
    // {
    //     numbers[i] = i;
    //     // cout << "Enter a number: ";
    //     // cin >> numbers[i];
    // }

    // printArray(numbers, arrSize);

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
    // delete[] numbers;
    // delete[] img;
    return 0;
}

void printArray(int numbers[][3], size_t arrSize)
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }
    // cout << sizeof(numbers) << endl;
    // for(size_t i = 0; i < arrSize; i++)
    // {
    //     // cout << "numbers[" << i << "]: "
    //     //      << numbers[i] << endl;
    //     cout << "*numbers+" << i << ": " 
    //          << *(numbers+i) << endl;
    //     // cout << "*ptr: " << *ptr << endl;
    //     // ptr++;
    // }
}