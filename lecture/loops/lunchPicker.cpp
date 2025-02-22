/*
Name: Jeremy Bergen

Daily lunch decision maker

Step1: Greet the victim...
Step2: Prompt for numVisitors and currentTime and currentMoney
    Step2a: compare numVistors and currentTime to see if eating
Step3: Use currentTime, currentMoney
Step4: Pick food
*/

#include <iostream>
#include <string>

using namespace std;

string promptName();
void greetVictim(string);
void promptValues(int&, int&, int&);
bool canEat(int, int, int);
void pickFood(int, int);

int main()
{
    int numVisitors;
    int currentTime;
    int currentMoney;
    greetVictim(promptName());

    promptValues(numVisitors, currentTime, currentMoney);
    // cout << "DEBUG: numVisitors: " << numVisitors << endl;
    // cout << "DEBUG: currentTime: " << currentTime << endl;
    // cout << "DEBUG: currentMoney: " << currentMoney << endl;
    if(!canEat(numVisitors, currentTime, currentMoney))
    {
        cout << "Not enough time, you must starve...womp, womp" << endl;
        return 0;
    }
    pickFood(currentTime, currentMoney);

    return 0;
}

string promptName()
{
    string name;
    cout << "Welcome to the lunch picker. What is your name? ";
    getline(cin, name);

    return name;
}
void greetVictim(string name)
{
    cout << "Welcome " << name << " answer these questions: " << endl;
}
void promptValues(int& numVisitors, int& currentTime, int& currentMoney)
{
    int hours;
    int minutes;
    char ch;
    cout << "How many people did you have in your office? ";
    cin >> numVisitors;

    cout << "What is the current time HH:MM? ";
    cin >> hours >> ch >> minutes;
    // // cin.ignore(1000, ':');
    // cin.get();
    // cin >> minutes;
    currentTime = hours * 60 + minutes;

    cout << "How much money do you have? ";
    cin >> currentMoney;

}
bool canEat(int numVisitors, int currentTime, int currentMoney)
{
    if (numVisitors < 10 && (currentTime >= 590 && currentTime <= 760) && currentMoney > 0)
    {
        return true;
    }
    return false;
}
void pickFood(int currentTime, int currentMoney)
{
    /*
    money:
    Break room fridge
    Taco Bell
    Sonic
    McDonald's
    Jimmy Johns
    Fiesta Guadalajara

    time:
    Break room fridge
    Taco Bell
    Fiesta Guadalajara
    Jimmy Johns
    McDonald's
    Sonic
    */
    int availableTime = 760 - currentTime + 20;
    if(availableTime < 20 || currentMoney < 1)
    {
        cout << "Raid the break room fridge...Don't get caught" << endl;
    }
    else if (availableTime < 35 || currentMoney < 2)
    {
        cout << "Don't get food poisoning at Taco Bell" << endl;
    }
    else if (availableTime < 40 || currentMoney < 10)
    {
        cout << "Get a toasted sub at Jimmy Johns" << endl;
    }
    else if (availableTime < 60 || currentMoney < 20)
    {
        cout << "Get some mexican food at Fiesta Guadalajara" << endl;
    }
    else if (availableTime < 80 || currentMoney < 25)
    {
        cout << "Get lunch and hopefully ice cream at McDonald's" << endl;
    }
    else if (availableTime < 120 || currentMoney < 30)
    {
        cout << "Eat Sonic" << endl;
    }
    
    // return "";
}