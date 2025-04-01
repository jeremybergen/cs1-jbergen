#include <cstring>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    // string str1 = "Jeremy";
    // string str2;

    // str2 = str1;

    char* str1 = "Jeremy";
    char* str2;

    strcpy(str2, str1);
    // char username[8];
    // char input[8];
    // char password[8] = "hello";
    
    // cout << "Enter you username: ";
    // cin >> username;

    // cout << "Enter your password: ";
    // cin >> input;

    // cout << "&username: " << &username << endl;
    // cout << "&input: " << &input << endl;
    // // cout << "&password: " << &password << endl;
    // cout << "username: " << username << endl;
    // cout << "input: " << input << endl;
    // // cout << "password: " << password << endl;

    // if(strncmp(username, "admin", 5) == 0 && strncmp(input, password, 5) == 0)
    // {
    //     cout << "Authenticated" << endl;
    // }
    // else
    // {
    //     cout << "Access Denied" << endl;
    // }

    // string myName;
    // char myName[100] = "This is a sentence";
    // char myName[] = "Jeremy";
    // char myName2[] = "Jere";

    // cout << strcmp(myName, myName2) << endl;
    // cout << strncmp(myName, myName2, 4) << endl;

    // char* myName = "Jeremy";
    // char myName[100];
    // char* name = myName;

    // name = "Jeremy";

    // cout << "Hello " << myName << endl;
    // char* pch = strchr(myName, 's');
    // cout << "First s: " << pch-myName << endl;
    // pch = strchr(pch+1, 's');
    // cout << "Second s: " << pch-myName << endl;
    // pch = strchr(pch+1, 's');
    // cout << "Third s: " << pch-myName << endl;
    // pch = strchr(pch+1, 's');
    // cout << "Fourth s: " << pch-myName << endl;
    return 0;
}
























// int addNums(int, int);
// // int addNums(float, float);

// namespace myNamespace
// {
//     int addNums(int, int);
// }

// // using namespace myNamespace;

// int main(int argc, char* argv[])
// {
//     // std::cout << "Hello World" << std::endl;
//     cout << addNums(42, 15) << endl;
//     return 0;
// }

// int myNamespace::addNums(int n1, int n2)
// {
//     return n1 + n2 + 10;
// }

// int addNums(int n1, int n2)
// {
//     return n1 + n2;
// }

// int addNums(float n1, float n2)
// {
//     return n1 + n2 * 10;
// }