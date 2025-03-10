#include <iostream>
#include <vector>

using namespace std;

template <class T1>
vector<T1> buildVector();

template <class T1>
void printVector(vector<T1>&);

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
    // for(size_t i = 0; i < 10; i++)
    // {
    //     numbers.push_back(i);
    //     cout << "After " << numbers.size() << ": " 
    //          << numbers.capacity() << endl;
    // }

    numbers = buildVector<int>();

    cout << numbers.size() << endl;

    numbers.insert(numbers.begin()+4, 42);
    
    // numbers.clear();

    printVector<int>(numbers);

    // cout << numbers.front() << " " << numbers.back() << endl;
    // numbers.pop_back();
    // cout << numbers.front() << " " << numbers.back() << endl;
    // numbers.erase(numbers.begin());
    // numbers.erase(numbers.end()-1);
    // cout << numbers.front() << " " << numbers.back() << endl;

    return 0;
}

template <class T1>
vector<T1> buildVector()
{
    vector<T1> vec1;
    while(true)
    {
        T1 number;
        cout << "Enter a number, -999 to quit: ";
        cin >> number;
        if(number == -999) return vec1;
        vec1.push_back(number);
    }
}

template <class T1>
void printVector(vector<T1>& vec1)
{
    for(size_t i = 0; i < vec1.size(); i++)
    {
        // cout << "numbers[" << i << "]: " 
        //      << numbers[i] << endl;
        cout << "numbers.at(" << i << "): "
             << vec1.at(i) << endl;
    }

    // for(auto it = numbers.end()-1; it != numbers.begin()-1; it--)
    for(auto it = vec1.rbegin(); it != vec1.rend(); it++)
    {
        // *it = *it * 2;
        cout << *it << endl;
    }
    cout << vec1.max_size() << endl;
}