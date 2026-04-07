//q.15
#include <iostream>
using namespace std;

float area(float length = 5, float breadth = 4)
{
    return length * breadth;
}

int main()
{
    float l, b;
    int choice;

    cout << "Enter 1 to give input OR 0 to use default values: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter breadth: ";
        cin >> b;

        cout << "Area = " << area(l, b);
    }
    else
    {
        cout << "Area (default) = " << area();
    }

    return 0;
}
