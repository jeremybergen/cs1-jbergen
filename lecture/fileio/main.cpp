#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    // int num1, num2, num3, num4, num5;
    int nums[10];
    // vector<int> numbers;
    ifstream fin;
    // fin.open("/home/jbergen/projects/cs1-jbergen/lecture/fileio/files/input.txt");
    fin.open("files/input.txt");
    ofstream fout;
    fout.open("files/output.txt");

    int counter = 0;
    string inLine;
    while(getline(fin, inLine))
    {
        cout << "DEBUG: inLine: " << stoi(inLine) << endl;
        counter++;
    }

    // for(int i = 0; i < counter; i++)
    // {
    //     cout << "nums[" << i << "]: " << nums[i] << endl;
    // }

    // for(size_t i = 0; i < numbers.size(); i++)

    // for(int i = 0; i < 5; i++)
    // {
    //     fin >> nums[i];
    //     cout << "nums[" << i << "]: " << nums[i] << endl;
    // }

    // fin >> num1 >> num2 >> num3 >> num4 >> num5;
    // cout << num1 << " " << num2 << " " << num3 << " " << num4 << " " << num5 << endl;

    fin.close();
    fout.close();
    return 0;
}