#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char* argv[])
{
    /*
'a' "@"
'n' "[]\[]"
'b' "8"
'o' "0"
'c' "("
'p' "|D"
'd' "|)"
'q' "(,)"
'e' "3"
'r' "|Z"
'f' "#"
's' "$"
'g' "6"
't' "']['"
'h' "[-]"
'u' "|_|"
'i' "|"
'v' "\/"
'j' "_|"
'w' "\/\/"
'k' "|<"
'x' "}{"
'l' "1"
'y' "`/"
'm' "[]\/[]"
'z' "2"
    */

    map<char, string> newAlphabet;

    newAlphabet['a'] = "@";
    newAlphabet['n'] = "[]\\[]";
    newAlphabet['b'] = "8";
    newAlphabet['o'] = "0";
    newAlphabet['c'] = "(";
    newAlphabet['p'] = "|D";
    newAlphabet['d'] = "|)";
    newAlphabet['q'] = "(,)";
    newAlphabet['e'] = "3";
    newAlphabet['r'] = "|Z";
    newAlphabet['f'] = "#";
    newAlphabet['s'] = "$";
    newAlphabet['g'] = "6";
    newAlphabet['t'] = "']['";
    newAlphabet['h'] = "[-]";
    newAlphabet['u'] = "|_|";
    newAlphabet['i'] = "|";
    newAlphabet['v'] = "\\/";
    newAlphabet['j'] = "_|";
    newAlphabet['w'] = "\\/\\/";
    newAlphabet['k'] = "|<";
    newAlphabet['x'] = "}{";
    newAlphabet['l'] = "1";
    newAlphabet['y'] = "`/";
    newAlphabet['m'] = "[]\\/[]";
    newAlphabet['z'] = "2";

    string inLine;
    getline(cin, inLine);

    for(size_t i = 0; i < inLine.length(); i++)
    {
        auto it = newAlphabet.find(tolower(inLine.at(i)));
        if(it != newAlphabet.end())
        {
            // cout << newAlphabet[tolower(inLine.at(i))];
            cout << it->second;
        }
        else
        {
            cout << inLine.at(i);
        }
    }
    cout << endl;


    return 0;
}