#include <iostream>
#include <string>
#include <cstdio>
#include <sstream>

using namespace std;

struct Node
{
    int data;
};

template <typename T1>
class Rectangle
{
    private:
    T1 _side1, _side2;
    T1 _area, _perim;
    bool _valid;
    void calcArea();
    void calcPerim();

    public:
    bool isValid() { return _valid; }

    void getSides();
    void changeSides();
    string printVals();
};

int main(int argc, char* argv[])
{
    Rectangle<double> rect1;

    rect1.getSides();

    cout << rect1.printVals() << endl;
    return 0;
}

template <typename T1>
void Rectangle<T1>::calcArea()
{
    if(_side1 != 0 && _side2 != 0)
    {
        _area = _side1 * _side2;
    }
    else
    {
        _area = -1;
    }
}
template <typename T1>
void Rectangle<T1>::calcPerim()
{
    if(_side1 != 0 && _side2 != 0)
    {
        _perim = 2*_side1 + 2*_side2;
    }
    else
    {
        _perim = -1;
    }
}
template <typename T1>
void Rectangle<T1>::getSides()
{
    _side1 = 0;
    _side2 = 0;
    while(_side1 <= 0 || _side2 <= 0)
    {
        cout << "Enter side1: ";
        cin >> _side1;
        cout << "Enter side2: ";
        cin >> _side2;
    }
    calcArea();
    calcPerim();
}
template <typename T1>
void Rectangle<T1>::changeSides()
{
    getSides();
}
template <typename T1>
string Rectangle<T1>::printVals()
{
    // return "The Rectangle with sides " + to_string(_side1) + " and " + to_string(_side2) + " has an area of " + to_string(_area) + " and a perimeter of " + to_string(_perim) + "\n";
    // char buffer[1000];
    // sprintf(buffer, "The Rectangle with sides %d and %d has an area of %d and a perimeter of %d", _side1, _side2, _area, _perim);
    // return (string)buffer;
    // string retStr;
    ostringstream oss;

    oss << "The Rectangle with sides " 
        << _side1 << " and " << _side2 
        << " has an area of " << _area 
        << " and a perimeter of " << _perim;

    return oss.str();
}















// class MyClass
// {
//     public:
//     int num1;

//     private:
//     int num2;
// };

// int myvar = 42;

// struct Node
// {
//     int data;
//     Node* next;
// };

// class Eraseable
// {
//     private:
//     bool isEraseable;

//     public:
//     bool eraseable() {return isEraseable;}
// };


// class Pen
// {
//     private:
//     string color;
//     float capacity;
//     bool cap;
//     bool empty;
//     Node* head;
//     int numbers[10];
//     Eraseable erase;

//     public:
//     // Getters
//     string getColor()
//     {
//         return color;
//     }
//     float getCapacity()
//     {
//         return capacity;
//     }
//     bool hasCap()
//     {
//         return cap;
//     }
//     bool isEmpty()
//     {
//         return empty;
//     }

//     // Setters
//     void setColor(string newColor)
//     {
//         color = newColor;
//     }
//     void setCapacity(float newCapacity)
//     {
//         // capacity = newCapacity;
//         if(newCapacity < 0 || newCapacity > 1.0)
//         {
//             capacity = 0;
//         }
//         else
//         {
//             capacity = newCapacity;
//             empty = false;
//         }

//         if(capacity == 0) empty = true;
//     }
//     void setCap(bool newCap)
//     {
//         cap = newCap;
//     }
//     bool isEraseable() {return erase.eraseable();}
// };

// int main(int argc, char* argv[])
// {
//     Pen pen1, pen2, pen3, pen4;

//     pen1.setColor("Red");
//     pen2.setColor("Black");
//     pen3.setColor("Blue");
//     pen4.setColor("Green");

//     pen1.setCapacity(.5);
//     pen2.setCapacity(0);
//     pen3.setCapacity(.3);
//     pen4.setCapacity(18);

//     pen1.setCap(true);
//     pen2.setCap(false);
//     pen3.setCap(true);
//     pen4.setCap(true);

//     cout << "Pen1: " << pen1.getColor() 
//          << ", " << pen1.getCapacity()*100 
//          << "%, " << boolalpha << pen1.hasCap() 
//          << ", " << pen1.isEmpty() << endl;

//     cout << "Pen2: " << pen2.getColor() 
//          << ", " << pen2.getCapacity()*100 
//          << "%, " << boolalpha << pen2.hasCap() 
//          << ", " << pen2.isEmpty() 
//          << ", " << pen2.isEraseable() << endl;
//     // MyClass mc1;

//     // mc1.num1 = 42;
//     // mc1.num2 = 15;
//     // myvar = 15;
//     return 0;
// }