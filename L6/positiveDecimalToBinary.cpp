# include <iostream>
# include <math.h>          // library that contains many maths tools.

using namespace std;

int main () {
    int n;
    cout << "Enter positive number that you want to convert to Binary: ";
    cin >> n;
    while (n < 0) {
        cout << "Please enter a positive number: ";
        cin >> n;
    }

    int i = 0;
    int ans = 0;

    while (n!=0) {
        int bit = n & 1;
        n = n >> 1;

        ans += (bit * pow(10,i));
        i++;
    }
    cout << ans;
}