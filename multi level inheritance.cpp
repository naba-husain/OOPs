#include <iostream>
using namespace std;

// Base class
class Grandfather {
public:
    void showGrandfather() {
        cout << "This is Grandfather" << endl;
    }
};

// Derived class 1
class Father : public Grandfather {
public:
    void showFather() {
        cout << "This is Father" << endl;
    }
};

// Derived class 2
class Son : public Father {
public:
    void showSon() {
        cout << "This is Son" << endl;
    }
};

int main() {
    Son s;
    s.showGrandfather();
    s.showFather();
    s.showSon();
    return 0;
}
