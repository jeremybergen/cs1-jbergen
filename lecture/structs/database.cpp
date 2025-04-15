#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Person
{
    string fName;
    string lName;
    int age;
    float gpa;
    string title;
};

size_t readFile(ifstream&, string, Person**);

int main(int argc, char* argv[])
{
    ifstream fin;
    Person* people;
    size_t arrSize;
    
    arrSize = readFile(fin, "input.csv", &people);

    fin.close();

    for(size_t i = 0; i < arrSize; i++)
    {
        cout << people[i].fName << endl;
    }

    return 0;
}

size_t readFile(ifstream& fin, string filename, Person** people)
{
    fin.open(filename);
    string inLine;
    int numLines = 0;
    while(getline(fin, inLine))
    {
        numLines++;
    }

    // Person* people = new Person[numLines];
    
    *people = new Person[numLines];

    fin.clear();
    fin.seekg(0);

    int counter = 0;
    while(getline(fin, inLine))
    {
        Person newPerson;
        // cout << "DEBUG: inLine: " << inLine << endl;

        // Jeremy,Bergen,42,3.55,Assistant Professor
        int fieldCounter = 0;
        string fields[5];
        for(size_t i = 0; i < inLine.length(); i++)
        {
            // cout << inLine.find(',', i) << endl;
            size_t commachar = inLine.find(',', i);
            // cout << commachar << endl;
            // cout << i << ", " << commachar - i << endl;
            string tmpStr = inLine.substr(i, commachar - i);
            fields[fieldCounter] = tmpStr;

            // //Manual way of suffering
            // switch(fieldCounter)
            // {
            //     case 0:
            //     newPerson.fName = tmpStr;
            //     break;
            //     case 1:
            //     newPerson.lName = tmpStr;
            //     break;
            //     case 2:
            //     newPerson.age = stoi(tmpStr);
            //     break;
            //     case 3:
            //     newPerson.gpa = stof(tmpStr);
            //     break;
            //     case 4:
            //     newPerson.title = tmpStr;
            //     break;
            //     default:
            //     cerr << "Invalid input" << endl;
            //     break;
            // }
            fieldCounter++;

            if(commachar == string::npos) break;
            i = commachar;

        }
        // return;
        newPerson.fName = fields[0];
        newPerson.lName = fields[1];
        newPerson.age = stoi(fields[2]);
        newPerson.gpa = stof(fields[3]);
        newPerson.title = fields[4];
        // cout << newPerson.fName << ", " << newPerson.lName << ", " << newPerson.age << ", " << newPerson.gpa << ", " << newPerson.title << endl;

        *people[counter] = newPerson;
        counter++;
    }
    return counter;
}