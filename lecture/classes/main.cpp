#include <iostream>

using namespace std;

// class MyClass
// {
//     public:
//     int num1;

//     private:
//     int num2;
// };

// int myvar = 42;

struct Node
{
    int data;
    Node* next;
};

class Eraseable
{
    private:
    bool isEraseable;

    public:
    bool eraseable() {return isEraseable;}
};


class Pen
{
    private:
    string color;
    float capacity;
    bool cap;
    bool empty;
    Node* head;
    int numbers[10];
    Eraseable erase;

    public:
    // Getters
    string getColor()
    {
        return color;
    }
    float getCapacity()
    {
        return capacity;
    }
    bool hasCap()
    {
        return cap;
    }
    bool isEmpty()
    {
        return empty;
    }

    // Setters
    void setColor(string newColor)
    {
        color = newColor;
    }
    void setCapacity(float newCapacity)
    {
        // capacity = newCapacity;
        if(newCapacity < 0 || newCapacity > 1.0)
        {
            capacity = 0;
        }
        else
        {
            capacity = newCapacity;
            empty = false;
        }

        if(capacity == 0) empty = true;
    }
    void setCap(bool newCap)
    {
        cap = newCap;
    }
    bool isEraseable() {return erase.eraseable();}
};

int main(int argc, char* argv[])
{
    Pen pen1, pen2, pen3, pen4;

    pen1.setColor("Red");
    pen2.setColor("Black");
    pen3.setColor("Blue");
    pen4.setColor("Green");

    pen1.setCapacity(.5);
    pen2.setCapacity(0);
    pen3.setCapacity(.3);
    pen4.setCapacity(18);

    pen1.setCap(true);
    pen2.setCap(false);
    pen3.setCap(true);
    pen4.setCap(true);

    cout << "Pen1: " << pen1.getColor() 
         << ", " << pen1.getCapacity()*100 
         << "%, " << boolalpha << pen1.hasCap() 
         << ", " << pen1.isEmpty() << endl;

    cout << "Pen2: " << pen2.getColor() 
         << ", " << pen2.getCapacity()*100 
         << "%, " << boolalpha << pen2.hasCap() 
         << ", " << pen2.isEmpty() 
         << ", " << pen2.isEraseable() << endl;
    // MyClass mc1;

    // mc1.num1 = 42;
    // mc1.num2 = 15;
    // myvar = 15;
    return 0;
}