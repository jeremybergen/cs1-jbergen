#include <iostream>
#include <string>
#include <cassert>
#include <cmath>
#include <cstring>

using namespace std;

void tests();

int main(int argc, char* argv[])
{
    // float epsilon = 1e-5;
    // // 0.00001
    // float ans = 12.43214319;
    // float res = 12.43214323;
    // assert(fabs(ans - res) <= epsilon);
    // string str1 = "Jeremy";
    // string str2 = "Jeremy";
    // cout << boolalpha << (str1 == str2) << endl;
    // cout << boolalpha << ("Jeremy" == "Jeremy") << endl;
    // cout << boolalpha << ((string)"Jeremy" == (string)"Jeremy") << endl;

    if(argc >= 2 && (string)argv[1] == "test")
    // if(argc >= 2 && strcmp(argv[1], "test") == 0)
    // if((string)argv[1] == "test" && argc >= 2)
    {
        //run tests()
        cout << "Inside conditional" << endl;
        return 0;
    }

    for(int i = 0; i < argc; i++)
    {
        cout << "argv[" << i << "]: "
             << argv[i] << endl;
    }
    // string fName = "Jeremy";
    // char* lName = "Bergen";

    // char lNameArr[] = {'B', 'e', 'r', 'g', 'e', 'n', '\0'};
    // char* lNamePtr = lNameArr;
    return 0;
}