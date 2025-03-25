#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    // string fName = "Jeremy";
    string fName;
    string lName;
    string myName;

    fName = "Jeremy";
    lName = "Bergen";
    // myName = fName + " " + lName;
    // myName += fName;
    // myName += "    ";
    // myName += lName;
    // myName += myName;
    myName.append(fName);
    myName.append(" ");
    myName.append(lName);

    // cout << "myName: " << myName << endl;
    // cout << "myName.size(): " << myName.size() << endl;
    // cout << "myName.length(): " << myName.length() << endl;
    // cout << "myName.max_size(): " << myName.max_size() << endl;
    // cout << "myName.capacity(): " << myName.capacity() << endl;

    // myName.reserve(40);

    // cout << "myName.capacity(): " << myName.capacity() << endl;

    // cout << "myName[13]: " << myName[13] << endl;
    // cout << "*(myName + 13): " << *(myName.c_str() + 13) << endl;
    // cout << "myName.at(13): " << myName.at(13) << endl;

    // cout << "myName.substr(0, 8): " << myName.substr() << endl;
    // cout << boolalpha << (myName < myName) << endl;
    // cout << "npos: " << string::npos << endl;

    // for(size_t i = 0; i < myName.length(); i++)
    // {
    //     cout << "myName.at(" << i << "): "
    //          << myName.at(i) << endl;
    // }
    // for(auto it = myName.rbegin(); it != myName.rend(); it++)
    // {
    //     cout << *it;
    // }
    // for(char ch : myName)
    // {
    //     cout << ch << endl;
    // }


    return 0;
}