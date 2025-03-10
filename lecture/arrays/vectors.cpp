#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers;

    // cout << "empty: " << numbers.capacity() << endl;
    // numbers.push_back(42);
    // cout << "after 1: " << numbers.capacity() << endl;
    // numbers.push_back(15);
    // cout << "after 2: " << numbers.capacity() << endl;
    // numbers.push_back(23);
    // cout << "after 3: " << numbers.capacity() << endl;
    // while(true)
    // {
    //     int number;
    //     cout << "Enter a number, -999 to quit: ";
    //     cin >> number;
    //     if(number == -999) break;
    //     numbers.push_back(number);
    //     cout << "After " << numbers.size() << ": " 
    //          << numbers.capacity() << endl;
    // }
    // numbers.resize(10);
    numbers.reserve(1000);
    for(size_t i = 0; i < 10; i++)
    {
        numbers.push_back(i);
        cout << "After " << numbers.size() << ": " 
             << numbers.capacity() << endl;
    }
    cout << numbers.size() << endl;

    numbers.insert(numbers.begin()+4, 42);
    
    // numbers.clear();

    for(size_t i = 0; i < numbers.size(); i++)
    {
        // cout << "numbers[" << i << "]: " 
        //      << numbers[i] << endl;
        cout << "numbers.at(" << i << "): "
             << numbers.at(i) << endl;
    }

    // for(auto it = numbers.end()-1; it != numbers.begin()-1; it--)
    for(auto it = numbers.rbegin(); it != numbers.rend(); it++)
    {
        // *it = *it * 2;
        cout << *it << endl;
    }
    cout << numbers.max_size() << endl;

    // cout << numbers.front() << " " << numbers.back() << endl;
    // numbers.pop_back();
    // cout << numbers.front() << " " << numbers.back() << endl;
    // numbers.erase(numbers.begin());
    // numbers.erase(numbers.end()-1);
    // cout << numbers.front() << " " << numbers.back() << endl;

    return 0;
}