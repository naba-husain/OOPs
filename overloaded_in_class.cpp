#include <iostream>
using namespace std;

class Display
{
public:
    void display(int var)
    {
        cout << "Integer number: " << var << endl;
    }

    void display(float var)
    {
        cout << "Float number: " << var << endl;
    }

    void display(int var1, float var2)
    {
        cout << "Integer number: " << var1;
        cout << " and float number: " << var2 << endl;
    }
};

int main()
{
    Display obj;   // creating object of class

    int a = 5;
    float b = 5.5;

    obj.display(a);
    obj.display(b);
    obj.display(a, b);

    return 0;
}
