#include <iostream>
#include <string>

using namespace std;

void tests();

int main(int argc, char* argv[])
{
    if(argc >= 2 && argv[1] == "test")
    {
        //run tests()
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