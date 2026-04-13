#include <iostream>
using namespace std;

class A {
public:
    int i;
};

// Virtual inheritance
class B : virtual public A {
public:
    int j;
};

class C : public virtual A {
public:
    int k;
};

// Multiple inheritance
class D : public B, public C {
public:
    int sum;
};

int main() {
    D ob1;

    ob1.i = 10;   // from A (only ONE copy due to virtual)
    ob1.j = 20;   // from B
    ob1.k = 30;   // from C

    ob1.sum = ob1.i + ob1.j + ob1.k;

    cout << ob1.sum;

    return 0;
}
