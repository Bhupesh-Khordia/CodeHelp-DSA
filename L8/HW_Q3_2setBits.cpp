# include <iostream>
# include <math.h>
using namespace std;


// DIDNT WORK. SO TOOK HELP FROM COMMENTS.

// int binary(int n) {
//     long i, ans = 0;
//     while (n != 0) {
//         int bit  = n & 1;
//         n = n >> 1;
//         ans = (ans + (bit*pow(10,i)));
//         i++;
//     }
//     return ans;
// }

// int setBits (int n) {
//     int binN = binary(n);
//     int ans = 0;
//     while (binN != 0) {
//         if (binN % 10 == 1) {
//             ans += 1;
//         }
//         binN /= 10;
//     }
//     return ans;
// }

// int main() {
//     int a, b;
//     cout << "Enter a: ";
//     cin >> a;
//     cout << "Enter b: ";
//     cin >> b;

//     cout << (setBits(a) + setBits(b)) ;
// }

int setBits (int n) {
    int ans = 0;
    
    while ( n != 0 ) {
        if ( n & 1 ) {
            ans++;
        }
        n = n >> 1;
    }

    return ans;
}

int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "Set Bits of a+b = " << setBits(a) + setBits(b) ;
}