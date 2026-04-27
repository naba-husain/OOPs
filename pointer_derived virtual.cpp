#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Display function of Base class" << endl;
    }
};

class Derv1 : public Base {
public:
    void display() {
        cout << "Display function of Derv1 class" << endl;
    }
};

int main() {
    Base* ptr;
    Derv1 obj;

    ptr = &obj;     // Base pointer pointing to Derv1 object
    ptr->display(); // Calls Derv1's display()

    return 0;
}
