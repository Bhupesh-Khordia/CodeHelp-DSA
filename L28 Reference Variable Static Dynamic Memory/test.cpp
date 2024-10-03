#include <iostream>
using namespace std;

int& func(int x) {
    int a = x;
    int & num = a;
    return num;
}

int main() {
    int a = 5;
    cout << func(a);
    return 0;
}