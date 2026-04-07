#include<iostream>
using namespace std;

// 🔸 Base Class
class A
{
public:
    int x;

    void getX()
    {
        cout << "Enter x: ";
        cin >> x;
    }
};

// 🔸 Single Inheritance (A → B)
class B : public A
{
public:
    void showSingle()
    {
        cout << "Value of x = " << x << endl;
        cout << "Single Inheritance" << endl;
    }
};

// 🔸 Multilevel Inheritance (A → B → C)
class C : public B
{
public:
    int y;

    void calculate()
    {
        y = x + 10;
    }

    void showMulti()
    {
        cout << "y = " << y << endl;
        cout << "Multilevel Inheritance" << endl;
    }
};

// 🔸 Another Base Class (for Multiple)
class D
{
public:
    int z;

    void getZ()
    {
        cout << "Enter z: ";
        cin >> z;
    }
};

// 🔸 Multiple Inheritance (A + D → E)
class E : public A, public D
{
public:
    void showMultiple()
    {
        cout << "Sum = " << x + z << endl;
        cout << "Multiple Inheritance" << endl;
    }
};

// 🔸 Main Function
int main()
{
    int choice;

    cout << "\n1. Single Inheritance";
    cout << "\n2. Multilevel Inheritance";
    cout << "\n3. Multiple Inheritance";
    cout << "\nEnter choice: ";
    cin >> choice;

    if(choice == 1)
    {
        B obj;
        obj.getX();
        obj.showSingle();
    }
    else if(choice == 2)
    {
        C obj;
        obj.getX();
        obj.calculate();
        obj.showMulti();
    }
    else if(choice == 3)
    {
        E obj;
        obj.getX();
        obj.getZ();
        obj.showMultiple();
    }
    else
    {
        cout << "Invalid choice";
    }

    return 0;
}
