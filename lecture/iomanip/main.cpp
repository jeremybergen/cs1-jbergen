#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Person
{
    string fName, lName;
    int age;
    float gpa;
};

struct FieldWidths
{
    size_t fName, lName, age, gpa;
};

int main(int argc, char* argv[])
{
    size_t fieldWidth[4] = {12, 11, 5, 5};

    FieldWidths fWidth = {12, 11, 5, 5};
    Person people[5];

    people[0].fName = "Jeremy";
    people[0].lName = "Bergen";
    people[0].age = 43;
    people[0].gpa = 3.55;

    people[1].fName = "Luke";
    people[1].lName = "Skywalker";
    people[1].age = 26;
    people[1].gpa = 1.5;

    people[2].fName = "Han";
    people[2].lName = "Solo";
    people[2].age = 38;
    people[2].gpa = 1.4;

    people[3].fName = "Leia";
    people[3].lName = "Organa";
    people[3].age = 24;
    people[3].gpa = 3.9;

    people[4].fName = "Grand Moff Tarkin";
    people[4].lName = "Obi-Wan Kenobi";
    people[4].age = 10000;
    people[4].gpa = 0.5;

    for(int i = 0; i < 5; i++)
    {
        if(people[i].fName.length() > fieldWidth[0] - 2) fieldWidth[0] = people[i].fName.length() + 2;
        if(people[i].lName.length() > fieldWidth[1] - 2) fieldWidth[1] = people[i].lName.length() + 2;
        if(to_string(people[i].age).length() > fieldWidth[2] - 2) fieldWidth[2] = to_string(people[i].age).length() + 2;
        if(to_string(people[i].gpa).length() > fieldWidth[3] - 2) fieldWidth[3] = to_string(people[i].gpa).length() + 2;
    }

    cout << left << setw(fieldWidth[0]) << "First Name" << setw(fieldWidth[1]) 
         << "Last Name" << setw(fieldWidth[2]) 
         << "Age" << setw(fieldWidth[3]) << "GPA" << endl;

    cout << setfill('=');
    cout << setw(fieldWidth[0] + fieldWidth[1] + fieldWidth[2] + fieldWidth[3] - 6) << "" << endl;
    cout << setfill(' ');

    for(auto elem : people)
    {
        cout << setw(fieldWidth[0]) << elem.fName 
             << setw(fieldWidth[1]) << elem.lName 
             << setw(fieldWidth[2]) << elem.age 
             << setw(fieldWidth[3]) << elem.gpa << endl;
    }

    // for(auto elem : people)
    // {
    //     cout << elem.fName << endl;
    // }

    return 0;
}