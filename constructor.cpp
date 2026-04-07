#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    // 1. Default Constructor
    Student() {
        id = 0;
        name = "Unknown";
        cout << "Default Constructor Called" << endl;
    }

    // 2. Parameterized Constructor
    Student(int i, string n) {
        id = i;
        name = n;
        cout << "Parameterized Constructor Called" << endl;
    }

    // 3. Copy Constructor
    Student(const Student &s) {
        id = s.id;
        name = s.name;
        cout << "Copy Constructor Called" << endl;
    }

    // Function to display data
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {

    // Default constructor object
    Student s1;
    s1.display();

    cout << endl;

    // Parameterized constructor object
    Student s2(101, "Naba");
    s2.display();

    cout << endl;

    // Copy constructor object
    Student s3 = s2;
    s3.display();

    return 0;
}
