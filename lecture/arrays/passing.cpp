#include <iostream>
#include <random>
#include <cstdlib>

using namespace std;

void buildArray(long*, int);
void printArray(long[], int);

int main(int argc, char* argv[])
{
    int* numbers;
    int* numbers2;

    numbers = (int*)calloc(10, sizeof(int));

    cout << "numbers: " << numbers << endl;
    // cout << "&numbers: " << &numbers << endl;
    // cout << "sizeof(*numbers): " << sizeof(*numbers) << endl;
    for(int i = 0; i < 10; i++)
    {
        numbers[i] = i;
    }

    for(int i = 0; i < 10; i++)
    {
        cout << "numbers[" << i << "]: " << numbers[i] << endl;
    }

    numbers2 = (int*) realloc(numbers, 20*sizeof(int));
    cout << "numbers: " << numbers << endl;
    cout << "numbers[0]: " << numbers[0] << endl;
    cout << "numbers2: " << numbers2 << endl;
    for(int i = 0; i < 20; i++)
    {
        numbers2[i] = i;
    }

    for(int i = 0; i < 20; i++)
    {
        cout << "numbers2[" << i << "]: " << numbers2[i] << endl;
    }
    // srand(time(0));
    // int arrSize = 10;
    // long numbers[arrSize];

    // cout << "&numbers[0]: " << &numbers[0] << endl;
    // cout << "numbers: " << numbers << endl;

    // buildArray(numbers, arrSize);
    // printArray(numbers, arrSize);

    // free(numbers);
    free(numbers2);
    return 0;
}

void buildArray(long* array, int arrSize)
{
    for(int i = 0; i < arrSize; i++)
    {
        // array[i] = random();
        *(array + i) = random();
    }
}

void printArray(long array[], int arrSize)
{
    for(int i = 0; i < arrSize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}