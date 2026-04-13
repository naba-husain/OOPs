#include <iostream>
using namespace std;

class Base {
public:
    int x = 10;

protected:
    int y = 20;

private:
    int z = 30;
};

class Derived : public Base {
public:
    void display() {
        cout << "x = " << x << endl; // ✅ accessible
        cout << "y = " << y << endl; // ✅ accessible
        // cout << "z = " << z; ❌ not accessible
    }
};

int main() {
    Derived d;
    d.display();

    cout << "Access from main: " << d.x << endl; // ✅ allowed
}
