#include <iostream>

using namespace std;

void promptNums(int[], size_t);
void printArray(int[], size_t);
void bubbleSort(int[], size_t);

int main()
{
    size_t arrSize = 0;

    do
    {
        cout << "How many numbers do you want? ";
        cin >> arrSize;
    } while(arrSize > 1000);
    
    int numbers[arrSize];

    promptNums(numbers, arrSize);

    cout << "Original: " << endl;
    printArray(numbers, arrSize);

    bubbleSort(numbers, arrSize);

    cout << "Sorted: " << endl;
    printArray(numbers, arrSize);

    
    return 0;
}

// template <typename T1>
void bubbleSort(int numbers[], size_t arrSize)
{
    bool sorted = true;
    for(size_t stage = 0; stage < arrSize; stage++)
    {
        sorted = true;
        for(size_t i = 0; i < arrSize - 1 - stage; i++)
        {
            if(numbers[i] < numbers[i+1])
            {
                sorted = false;
                int backup = numbers[i+1];
                numbers[i+1] = numbers[i];
                numbers[i] = backup;
            }
        }
        if(sorted == true)
        {
            break;
        }
        cout << "Stage " << stage+1 << ": " << endl;
        printArray(numbers, arrSize);
    }
}

void printArray(int numbers[], size_t arrSize)
{
    for(size_t i = 0; i < arrSize; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

void promptNums(int numbers[], size_t arrSize)
{
    for(size_t i = 0; i < arrSize; i++)
    {
        cout << "Enter a whole number: ";
        cin >> numbers[i];
    }
}

