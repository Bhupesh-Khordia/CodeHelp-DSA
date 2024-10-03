# include <iostream>
# include <math.h>

using namespace std;

int main () {
    cout << "Enter the binary number that you want to convert: ";
    int n;
    cin >> n;

    int decimal = 0;
    int i = 0;
    while (n != 0) {
        int digit = n % 10;
        decimal += ( pow(2,i) * digit );
        n = n/10;
        i++;
    }
    cout << decimal;
}