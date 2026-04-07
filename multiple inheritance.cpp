#include <iostream>
using namespace std;

// Base class 1
class Father {
public:
    void showFather() {
        cout << "This is Father" << endl;
    }
};

// Base class 2
class Mother {
public:
    void showMother() {
        cout << "This is Mother" << endl;
    }
};

// Derived class
class Child : public Father, public Mother {
public:
    void showChild() {
        cout << "This is Child" << endl;
    }
};

int main() {
    Child c;
    c.showFather();
    c.showMother();
    c.showChild();
    return 0;
}
