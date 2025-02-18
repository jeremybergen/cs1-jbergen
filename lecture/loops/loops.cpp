#include <iostream>
#include <iomanip>

using namespace std;

void printTable(int);
int promptSize();

int main()
{
    // do
    // {
    //     //do stuff
    // } while (true);
    
    // while(true)
    // {
    //     //do stuff
    // }
    // for( ; ; )
    // {
    //     //do stuff
    // }
    // int counter = 11;
    // // do
    // // {
    // //     cout << counter << endl;
    // //     counter++;
    // // } while(counter <= 10);

    // while (counter <= 10)
    // {
    //     cout << counter << endl;
    //     counter++;
    // }

    // cout << "after while loop: counter: " << counter << endl;
    
    int tableSize;

    tableSize = promptSize();

    if(tableSize == -1)
    {
        cout << "Table size error" << endl;
        return 0;
    }

    printTable(tableSize);

    // string firstName;

    // firstName = "Jeremy";
    // for(auto ch : firstName)
    // {
    //     cout << ch << endl;
    // }

    // for(int i = 0; i < firstName.length(); i++)
    // {
    //     cout << firstName[i] << endl;
    // }

    // int i = 0;
    // int j = 100;
    // for ( ; ; )
    // {
    //     if(i > 100 && j < 0)
    //     {
    //         break;
    //     }
    //     // if(i == 100 && j == 0)
    //     // {
    //     //     break;
    //     // }
    //     cout << i << " " << j << endl;
    //     i = i + 10;
    //     j = j - 9;
    // }
    

    return 0;
}

int promptSize()
{
    // int tableSize;
    // bool validSize = false;

    // while(!validSize)
    // {
    //     cout << "Enter table size: ";
    //     cin >> tableSize;

    //     if(tableSize >= 1 && tableSize <= 31)
    //     {
    //         validSize = true;
    //     }
    //     else
    //     {
    //         cout << "Size must be between 1 and 31" << endl;
    //     }
        
    // }

    int tableSize;

    cout << "Enter table size: ";

    while(cin >> tableSize)
    {
        if(tableSize >= 1 && tableSize <= 31)
        {
            return tableSize;
        }
        cout << "Size must be between 1 and 31" << endl;        
    }
    return -1;
}

void printTable(int tableSize)
{
    int fieldWidth = 4;

    cout << setfill('=');
    for(int i = 0; i < tableSize; i++)
    {
        cout << setw(fieldWidth) << "=";
    }
    cout << endl;
    cout << setfill(' ');

    for(int i = 1; i <= tableSize; i++)
    {
        // if(i%2 == 1)
        // {
        //     continue;
        // }
        // if(i%2 == 0)
        // {
        //     cout << i << endl;
        // }
        for(int j = 1; j < tableSize+1; j++)
        {
            // cout << i << "," << j << " ";
            cout << setw(fieldWidth) << i * j;
        }
        cout << endl;       
    }
}