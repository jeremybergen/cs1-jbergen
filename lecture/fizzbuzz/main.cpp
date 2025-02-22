#include <iostream>

using namespace std;

void solver();

int main()
{
    solver();

    return 0;
}

void solver()
{
    /*
    Input
    Input contains a single test case.
    Each test case contains three integers on a single line, X, Y and N 
    (1 <= X < Y <= N <= 100).

    Output
    Print integers from 1 to N
    in order, each on its own line, replacing the ones divisible by X
    with Fizz, the ones divisible by Y
    with Buzz and ones divisible by both 
    X and Y
    with FizzBuzz.
    */
    int x, y, n;
    cin >> x >> y >> n;

    for(int i = 1; i <= n; i++)
    {
        if (i%x == 0)
        {
            cout << "Fizz";
        }
        if (i%y == 0)
        {
            cout << "Buzz";
        }
        //    i%x != 0 && i%y != 0
        if (!(i%x == 0 || i%y == 0))
        {
            cout << i;
        }
        cout << endl;
        // if (i%x == 0 && i%y == 0)
        // {
        //     cout << "FizzBuzz" << endl;
        // }
        // else if (i%x == 0)
        // {
        //     cout << "Fizz" << endl;
        // }
        // else if (i%y == 0)
        // {
        //     cout << "Buzz" << endl;
        // }
        // else 
        // {
        //     cout << i << endl;
        // }
    }
}