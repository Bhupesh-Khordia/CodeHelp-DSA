# include <iostream>
# include <math.h>
using namespace std;

int binary(int n) {
    long i, ans = 0;
    while (n != 0) {
        int bit  = n & 1;
        n = n >> 1;
        ans = (ans + (bit*pow(10,i)));
        i++;
    }
    return ans;
}

int main () {
    int n = 10;
    cout << binary (10);
}