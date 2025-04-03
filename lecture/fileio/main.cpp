#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char* argv[])
{
    // int num1, num2, num3, num4, num5;
    int numLines = 0;
    
    
    // vector<int> numbers;
    ifstream fin;
    // fin.open("/home/jbergen/projects/cs1-jbergen/lecture/fileio/files/input.txt");
    fin.open("files/input.txt", ios_base::binary | ios_base::in);

    if(!fin.is_open())
    {
        cout << "Failed to open file" << endl;
        return 0;
    }

    ofstream fout;
    fout.open("files/output.txt");

    int counter = 0;
    string inLine;
    while(getline(fin, inLine))
    {
        numLines++;
    }
    int nums[numLines];

    // must clear flags before seeking
    // cout << "DEBUG: numLines: " << numLines << endl;
    // cout << "tellg: " << fin.tellg() << endl;
    // fin.seekg(0);
    // cout << "DEBUG: " << fin.fail() << endl;
    // fin.clear();
    // cout << "DEBUG: " << fin.fail() << endl;
    // cout << "tellg: " << fin.tellg() << endl;
    // cout << "After seekg" << endl;
    fin.clear();
    fin.seekg(0);

    while(getline(fin, inLine))
    {
        bool isNumber = true;
        for(size_t i = 0; i < inLine.size(); i++)
        {
            if(inLine.at(0) == '-' && i == 0) continue;
            if(!isdigit(inLine.at(i))) 
            {
                isNumber = false;
                break;
            }
        }
        if(!isNumber) continue;
        // cout << "DEBUG: inLine: " << stoi(inLine) << endl;
        nums[counter] = stoi(inLine);
        counter++;
    }

    for(int i = 0; i < counter; i++)
    {
        cout << "nums[" << i << "]: " << nums[i] << endl;
    }

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