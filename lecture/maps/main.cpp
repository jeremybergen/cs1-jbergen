#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
    map<int, string> myMap;
    map<string, vector<int>> myMap2;

    myMap[10] = "ten";
    myMap[20] = "twenty";
    myMap[100] = "one hundred";

    myMap2["Jeremy"].push_back(42);

    for(auto elem : myMap)
    {
        cout << elem.first << ", " << elem.second << endl;
    }

    return 0;
}