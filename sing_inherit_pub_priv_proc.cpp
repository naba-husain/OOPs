#include <iostream>
using namespace std;

// ================= BASE CLASS (A) =================
class A {
public:
    int pub = 10;

protected:
    int prot = 20;

private:
    int priv = 30;
};

// ================= PUBLIC INHERITANCE =================
class B_public : public A {
public:
    void show() {
        cout << "PUBLIC INHERITANCE\n";
        cout << "Public: " << pub << endl;       // OK
        cout << "Protected: " << prot << endl;   // OK
        // cout << priv; // ERROR
    }
};

// ================= PRIVATE INHERITANCE =================
class B_private : private A {
public:
    void show() {
        cout << "\nPRIVATE INHERITANCE\n";
        cout << "Public->Private: " << pub << endl;
        cout << "Protected->Private: " << prot << endl;
    }
};

// ================= PROTECTED INHERITANCE =================
class B_protected : protected A {
public:
    void show() {
        cout << "\nPROTECTED INHERITANCE\n";
        cout << "Public->Protected: " << pub << endl;
        cout << "Protected: " << prot << endl;
    }
};

// ================= MAIN (C) =================
int main() {
    B_public obj1;
    obj1.show();
    cout << "Access from main (C): " << obj1.pub << endl;  // OK

    B_private obj2;
    obj2.show();
    // cout << obj2.pub; // ERROR

    B_protected obj3;
    obj3.show();
    // cout << obj3.pub; // ERROR

    return 0;
}
