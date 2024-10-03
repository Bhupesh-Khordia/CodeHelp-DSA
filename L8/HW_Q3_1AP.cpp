# include <iostream>
using namespace std;

int ap( int n ) {
    return ((3*n) +7);
}

int main () {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << n <<"th term of AP: " << ap(n);
}