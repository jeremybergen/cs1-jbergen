#include <iostream>

using namespace std;

// void myFunction(const int &inFunc)
// {
//     // inFunc += 10;
//     cout << "inFunc: " << inFunc << endl;
//     cout << "&inFunc: " << &inFunc << endl;
// }

// void sayGoodbye();
// void sayHello();

// int addNums(int, int);
// float addNums(float, float);
// float addNums(float, int);

template <typename T1, class T2>
T1 addNums(T1, T2);

int main()
{
    float num1;
    int num2;
    float sum;

    cout << "Enter two numbers separated by a space: ";
    cin >> num1 >> num2;

    sum = addNums<float, int>(num1, num2);

    cout << num1 << " + " << num2 << " = " << sum << endl;
    // cout << num1 << " + " << num2 << " = " << sum << '\n' << flush;
    // sayHello();

    // int inMainVar;

    // inMainVar = 42;

    // cout << "inMainVar: " << inMainVar << endl;
    // cout << "&inMainVar: " << &inMainVar << endl;
    // myFunction(inMainVar);
    // cout << "inMainVar: " << inMainVar << endl;
    // cout << "&inMainVar: " << &inMainVar << endl;

    return 0;
}

template <typename T1, class T2>
T1 addNums(T1 n1, T2 n2)
{
    return n1 + n2;
}

// int addNums(int n1, int n2)
// {
//     cout << "Inside int function: " << endl;
//     return n1 + n2;
// }

// float addNums(float n1, float n2)
// {
//     cout << "Inside float function: " << endl;
//     return n1 + n2;
// }

// float addNums(float n1, int n2)
// {
//     cout << "Inside float/int function: " << endl;
//     return n1 + n2;
// }

// void sayGoodbye()
// {
//     cout << "Goodbye" << endl;
//     sayHello();
// }

// void sayHello()
// {
//     cout << "Hello" << endl;
//     sayGoodbye();
// }