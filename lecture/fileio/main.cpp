#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    int num1, num2, num3, num4, num5;
    ifstream fin;
    fin.open("files/input.txt");
    ofstream fout;
    fout.open("files/output.txt");

    // for(int i = 0; i < 5; i++)
    // {
    //     fin >> num;
    //     cout << "num: " << num << endl;
    // }

    fin >> num1 >> num2 >> num3 >> num4 >> num5;
    fout << num1 << " " << num2 << " " << num3 << " " << num4 << " " << num5 << endl;

    fin.close();
    fout.close();
    return 0;
}