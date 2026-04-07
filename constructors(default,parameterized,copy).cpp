#include<iostream>
using namespace std;

class Rectangle
{
    int l, b;

public:
    // Default Constructor
    Rectangle()
    {
        l = 0;
        b = 0;
    }

    // Parameterized Constructor
    Rectangle(int x, int y)
    {
        l = x;
        b = y;
    }

    // Copy Constructor
    Rectangle(Rectangle &obj)
    {
        l = obj.l;
        b = obj.b;
    }

    void display()
    {
        cout<<"Length = "<<l<<endl;
        cout<<"Breadth = "<<b<<endl;
    }
};

int main()
{
    Rectangle r1;        // default constructor
    Rectangle r2(4,5);  // parameterized constructor
    Rectangle r3(r2);   // copy constructor

    cout<<"Default Constructor:"<<endl;
    r1.display();

    cout<<"\nParameterized Constructor:"<<endl;
    r2.display();

    cout<<"\nCopy Constructor:"<<endl;
    r3.display();

    return 0;
}
