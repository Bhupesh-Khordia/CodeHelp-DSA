#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while(a != b && a != 0 && b != 0) {
        if(a > b) {
            a -= b;              // Can also use a %= b
        }
        else if (a < b) {
            b -= a;
        }
    }
    if(b ==0) {
        return a;
    }
    return b;
}

int main() {
    int a , b;
    cin >> a >> b;
    cout << gcd(a,b);
    return 0;
}