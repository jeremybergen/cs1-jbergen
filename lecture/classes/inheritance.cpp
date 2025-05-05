#include <iostream>
#include <string>

using namespace std;

// class Base
// {
//     protected:
//     int _data;

//     public:
//     void setData(int data) { _data = data; }
//     int getData() { return _data; }
// };

// class Derived : public Base
// {
//     private:
//     int _derivedData;

//     public:
//     void setDerivedData(int derivedData) { _derivedData = derivedData; _data = 42; }
//     int getDerivedData() { return _derivedData + _data; }
// };

class Animal
{
    protected:
    int _numLegs;
    string _color;
};

class Dog : protected Animal
{
    private:
    string _breed;
    string _attitude;

    public:
    Dog(string, string, int, string);
    void printDog();
};

int main(int argc, char* argv[])
{
    Dog novo("Husky", "Giant Jerk", 4, "White");
    novo.printDog();


    // Derived d1;
    // Base b1;

    // // b1._data = 123;

    // // d1.setData(42);
    // d1.setDerivedData(15);

    // // cout << "d1.getData(): " << d1.getData() << ", d1.getDerivedData(): " << d1.getDerivedData() << endl;
    // cout << "d1.getDerivedData(): " << d1.getDerivedData() << endl;
    return 0;
}

void Dog::printDog()
{
    cout << "The dog's breed is: " << _breed << " and his attitude is: " << _attitude << endl;
    cout << "The dog has " << _numLegs << " number of legs and it is " << _color << " color." << endl;
}

Dog::Dog(string breed, string attitude, int numLegs, string color)
{
    _breed = breed;
    _attitude = attitude;
    _numLegs = numLegs;
    _color = color;
}