#include<iostream>
using namespace std;

// Base class
class Vehicle
{
public:
    int speed;

    void setSpeed(int s)
    {
        speed = s;
    }
};

// Derived class
class Car : public Vehicle
{
public:
    void display()
    {
        cout << "Car speed is: " << speed << " km/h" << endl;
    }
};

int main()
{
    Car c;

    c.setSpeed(80);   // inherited function
    c.display();

    return 0;
}
