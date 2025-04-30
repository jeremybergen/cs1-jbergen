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
    int* someNum = new int;

    public:
    // Rectangle();
    Rectangle(T1 = 1, T1 = 1);
    ~Rectangle();
    bool isValid() { return _valid; }
    void setSide1(T1 side1) { _side1 = side1; }

    T1 getSide1() const { return _side1; }
    T1 getSide2() const { return _side2; }
    void getSides();
    void changeSides();
    string printVals();
};

template <typename T1>
Rectangle<T1> addRectangles(Rectangle<T1>*, Rectangle<T1>*);

int main(int argc, char* argv[])
{
    Rectangle<double>* rect1 = new Rectangle<double>(42, 123);
    Rectangle<double>* rect2 = new Rectangle<double>(10, 20);

    // rect1.getSides();
    Rectangle<double> rect3 = addRectangles(rect1, rect2);

    cout << "rect1: " << rect1->printVals() << endl;
    cout << rect3.printVals() << endl;

    delete rect1;
    delete rect2;
    return 0;
}

template <typename T1>
Rectangle<T1> addRectangles(Rectangle<T1>* r1, Rectangle<T1>* r2)
{
    Rectangle<T1> newRect(r1->getSide1() + r2->getSide1(), r1->getSide2());
    r1->setSide1(100);
    return newRect;
}

template <typename T1>
Rectangle<T1>::~Rectangle()
{
    cout << "Deleting: someNum: " << someNum << endl;
    delete someNum;
    cout << "Instance destroyed" << endl;
}

// template <typename T1>
// Rectangle<T1>::Rectangle()
// {
//     _side1 = 2;
//     _side2 = 2;
//     calcArea();
//     calcPerim();
// }

template <typename T1>
Rectangle<T1>::Rectangle(T1 side1, T1 side2)
{
    cout << "someNum: " << someNum << endl;
    _side1 = side1;
    _side2 = side2;
    if(_side1 <= 0 || _side2 <= 0) getSides();
    calcArea();
    calcPerim();
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