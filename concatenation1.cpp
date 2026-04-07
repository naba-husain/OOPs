#include <iostream>
#include <string>
using namespace std;

int main() {

    string str1 = "Hello";
    string str2 = " World!";
    string result = str1 + str2;   // Concatenate str1 and str2
    cout << result << endl;

    // Concatenating string and a literal
    string str3 = str1 + ", C++!";
    cout << str3 << endl;

    return 0;
}
