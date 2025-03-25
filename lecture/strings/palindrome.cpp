#include <iostream>
#include <string>

using namespace std;

string getString();
void lowercase(string&);
void stripChars(string&);
bool isPalin(string);

int main(int argc, char* argv[])
{
    string myString;
    myString = getString();
    lowercase(myString);
    cout << "DEBUG: myString: " << myString << endl;

    return 0;
}

string getString()
{
    string inStr;
    cout << "Enter a string to check palindromnity: ";
    // cin >> inStr;
    getline(cin, inStr);

    return inStr;
}
void lowercase(string& str)
{
    string newStr = "";
    for(char ch : str)
    {
        newStr.push_back(tolower(ch));
    }
    str = newStr;
    // for(auto it = str.begin(); it != str.end(); it++)
    // {
    //     *it = tolower(*it);
    // }
}

void stripChars(string& str)
{

}
bool isPalin(string str)
{
    return false;
}