# include <iostream>
using namespace std;

int fibonacci(int n) {
    if ( n == 1 ) {
        return 0;
    }
    if ( n == 2 ) {
        return 1;
    }

    int a = 0;
    int b = 1;
    int ans;

    for ( int i = 2; i < n; i++) {
        ans = a + b;
        a = b;
        b = ans;
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << n << "th term of Fibonacci is: " << fibonacci(n);
}