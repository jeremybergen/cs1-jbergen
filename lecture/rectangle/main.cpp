#include <iostream>

using namespace std;

void myFunction(const int &inFunc)
{
    // inFunc += 10;
    cout << "inFunc: " << inFunc << endl;
    cout << "&inFunc: " << &inFunc << endl;
}

int main()
{
    int inMainVar;

    inMainVar = 42;

    cout << "inMainVar: " << inMainVar << endl;
    cout << "&inMainVar: " << &inMainVar << endl;
    myFunction(inMainVar);
    cout << "inMainVar: " << inMainVar << endl;
    cout << "&inMainVar: " << &inMainVar << endl;

    return 0;
}