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

    cout << "myName: " << myName << endl;
    cout << "myName.size(): " << myName.size() << endl;
    cout << "myName.length(): " << myName.length() << endl;
    cout << "myName.max_size(): " << myName.max_size() << endl;
    cout << "myName.capacity(): " << myName.capacity() << endl;

    myName.reserve(40);

    cout << "myName.capacity(): " << myName.capacity() << endl;


    return 0;
}