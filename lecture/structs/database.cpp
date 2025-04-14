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

void readFile(ifstream&, string);

int main(int argc, char* argv[])
{
    ifstream fin;
    
    readFile(fin, "input.csv");

    fin.close();
    return 0;
}

void readFile(ifstream& fin, string filename)
{
    fin.open(filename);
    string inLine;
    int counter = 0;
    while(getline(fin, inLine))
    {
        counter++;
    }

    Person people[counter];

    fin.clear();
    fin.seekg(0);

    while(getline(fin, inLine))
    {
        cout << "DEBUG: inLine: " << inLine << endl;
    }

}