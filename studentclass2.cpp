#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    string name;

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s1, s2;

    // Student 1 details
    s1.id = 1;
    s1.name = "Naba";

    // Student 2 details
    s2.id = 2;
    s2.name = "Lakshmi";

    cout << "Student 1 Details:" << endl;
    s1.display();

    cout << endl;

    cout << "Student 2 Details:" << endl;
    s2.display();

    return 0;
}
