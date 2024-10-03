#include <iostream>
using namespace std;

int pow(int a, int b) {
    if(b == 0) {
        return 1;
    }
    if(b == 1) {
        return a;
    }
    if(b & 1) {
        return a * pow(a, b/2) * pow(a, b/2);
    }
    else{
        return pow(a, b/2) * pow(a, b/2);
    }
}

int main() {
    int a = 2, b = 5;
    cout << pow(a, b);
    return 0;
}