#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

struct MyStruct
{
    int num1;
};

int main(int argc, char* argv[])
{
    unordered_map<int, string> myMap;
    map<string, vector<int>> myMap2;

    // unordered_map<MyStruct, int> tmpMap;

    // tmpMap[{1}] = 42;
    // tmpMap[{2}] = 15;

    myMap[10] = "ten";
    myMap[100] = "one hundred";
    myMap[20] = "twenty";
    

    myMap2["Jeremy"].push_back(42);

    // for(auto elem : myMap)
    // {
    //     cout << elem.first << ", " << elem.second << endl;
    // }
    for(auto it = myMap.begin(); it != myMap.end(); it++)
    {
        cout << it->first << ", " << it->second << endl;
    }

    return 0;
}