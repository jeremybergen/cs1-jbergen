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
    // cout << "DEBUG: myString: " << myString << endl;
    stripChars(myString);

    if (isPalin(myString))
    {
        cout << myString << " is a palindrome." << endl;
    }
    else
    {
        cout << myString << " is NOT a palindrome." << endl;
    }

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
    // // Option 1
    // string newStr = "";
    // for(char ch : str)
    // {
    //     newStr.push_back(tolower(ch));
    // }
    // str = newStr;

    // Option 2
    for(auto it = str.begin(); it != str.end(); it++)
    {
        *it = tolower(*it);
    }
}

void stripChars(string& str)
{
    // str = "a man, a plan, a canal panama"
    // string outStr = "";
    for(auto it = str.begin(); it != str.end(); it++)
    {
        // cout << "DEBUG: before if: *it: " << *it << endl;
        if(!isalnum(*it))
        {
            // outStr.push_back(*it);
            str.erase(it);
            it--;
        }
    }
    // str = outStr;
    // cout << "DEBUG: str: " << str << endl;
    // str = "amanaplanacanalpanama"
}

bool isPalin(string str)
{
    for(size_t i = str.length() - 1, j = 0; i >= 0 && j < str.length(); i--, j++)
    {
        cout << "DEBUG: str.at(" << i << "): " << str.at(i) << ", str.at(" << j << "): " << str.at(j) << endl;
        if(str.at(i) != str.at(j))
        {
            return false;
        }
        if(j >= i)
        {
            break;
        }
    }
    return true;
}