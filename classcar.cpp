#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    int speed;

    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
    }
};

int main()
{
    Car c1, c2;

    // Car 1 details
    c1.brand = "Toyota";
    c1.speed = 120;

    // Car 2 details
    c2.brand = "BMW";
    c2.speed = 200;

    cout << "Car 1 Details:" << endl;
    c1.display();

    cout << endl;

    cout << "Car 2 Details:" << endl;
    c2.display();

    return 0;
}
