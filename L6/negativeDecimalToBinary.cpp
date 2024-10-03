# include <iostream>
# include <math.h>

using namespace std;

int main () {
    int n;
    cout << "Enter negative number that you want to convert to Binary: ";
    cin >> n;
    while ( n > 0) {
        cout << "Please enter a negative number: ";
        cin >> n;
    }
    
    int nPositive = abs(n);                  // To ignore the negative sign.
    
    int binary[32];                          // Created an array of length 32 to store the final binary representation.
    for ( int i = 31; i >= 0; i--) {         // Stored Binary of positive value of n in the array.
        binary[i] = nPositive & 1;
        nPositive = nPositive >> 1;
    }

    for ( int i = 0; i < 32; i++) {          // 1's Complement.
        if (binary[i] == 0) {
            binary[i] = 1;
        }
        else {
            binary[i] = 0;
        }
    }

    for ( int i = 31; i >= 0; i--) {         // 2's Complement.
        if (binary[i] == 0) {
            binary[i] = 1;
            break;
        }
        else {
            binary[i] = 0;
        }
    }

    for ( int i = 0; i < 32; i++) {          // Printing the final answer.
        cout << binary[i];
    }
}