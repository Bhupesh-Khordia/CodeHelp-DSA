#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    string s = "hi";
    cout << endl;
    cout << typeid(s[0]).name() << endl;
    return 0;
}