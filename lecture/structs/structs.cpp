#include <iostream>

using namespace std;

struct SomeOtherStruct
{
    int num1;
    int num2;
};

struct Student
{
    string fName;
    string lName;
    unsigned int age;
    float gpa;
    char ch1;
    int someNum;
    int numbers[10];


    SomeOtherStruct *sos1 = new SomeOtherStruct;

    // void hello()
    // {
    //     cout << "Hello World" << endl;
    // }
};

int main(int argc, char* argv[])
{
    // Student stu1;
    // stu1.hello();
    // Student *stu1 = new Student;

    // stu1->sos1->num1;

    // delete stu1->sos1;
    // delete stu1;
    // cout << sizeof(Student) << endl;
    // cout << sizeof(string) << endl;
    // Student *stu1 = new Student;

    // stu1->fName = "Jeremy";
    // stu1->lName = "Bergen";

    // Student stu1;
    // Student *ptr1;

    // // Student students[10];

    // // students[0].fName = "Jeremy";
    // // Student stu1;

    // stu1.fName = "Jeremy";
    // stu1.lName = "Bergen";
    // stu1.age = 42;
    // stu1.gpa = 3.55;

    // ptr1 = &stu1;
    
    // cout << "Hello " << ptr1->fName << " " << ptr1->lName << endl;
    // cout << "Hello " << (*ptr1).fName << " " << (*ptr1).lName << endl;

    // cout << "Hello " << stu1.fName << " " << stu1.lName << endl;

    // delete stu1;
    return 0;
}