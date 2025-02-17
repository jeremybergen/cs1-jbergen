#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;

int main()
{
    int netWorth;
    int age;
    char wonLottery = 'N';
    // int num2;

    cout << "Enter your net worth: ";
    // cout << 42/5.0 << endl;
    cin >> netWorth;
    cout << "What is your age: ";
    cin >> age;

    cout << "Did you win the lottery [y/N]: ";
    cin >> wonLottery;

    // if(netWorth > 2000000 && age > 5 || (wonLottery == 'Y' || wonLottery == 'y'))
    if((netWorth > 2000000 && age > 5) || tolower(wonLottery) == 'y')
    {
        cout << "Congrats, you can retire to a beach" << endl;
    }
    else if (netWorth > 1000000 && age > 5)
    {
        cout << "Congrats you can retire to Hannah Wyoming......................" << endl;
    }
    else if (netWorth > 5000000 && age > 70)
    {
        cout << "You should already be retired" << endl;
    }
    else
    {
        cout << "Keep working" << endl;
    }


    // cout << boolalpha << (num1 < 0) << " " << (num1%2 == 1) << endl;
    // cout << num1%2 << endl;
    // if(num1 > 0 && num1%2 == 0)
    // {
    //     cout << num1 << " is positive and even" << endl;
    // }
    // else if (num1 < 0 && num1%2 == 0)
    // {
    //     cout << num1 << " is negative and even" << endl;
    // }
    // else if (num1 > 0 && num1%2 == 1)
    // {
    //     cout << num1 << " is positive and odd" << endl;
    // }
    // else if (num1 < 0 && abs(num1%2) == 1)
    // {
    //     cout << num1 << " is negative and odd" << endl;
    // }
    // else
    // {
    //     cout << num1 << " is zero" << endl;
    // }

    // if(num1 == 0)
    // {
    //     cout << num1 << " is zero" << endl;
    // }
    // else if (num1%2 == 0)
    // {
    //     cout << num1 << " is even" << endl;
    //     if(num1 > 0) cout << num1 << " is positive" << endl;
    //     else cout << num1 << " is negative" << endl;
    // }
    // else
    // {
    //     cout << num1 << " is not even" << endl;
    //     if(num1 > 0) cout << num1 << " is positive" << endl;
    //     else cout << num1 << " is negative" << endl;
    // }

    // if (num1 > num2)
    // {
    //     cout << "num1 is larger" << endl;
    // }
    // else if (num1 < num2)
    // {
    //     cout << "num2 is larger" << endl;
    // }
    // else
    // {
    //     cout << "The numbers are equal" << endl;
    // }

    cout << "After if" << endl;

    return 0;
}