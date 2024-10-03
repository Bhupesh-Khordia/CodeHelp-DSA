# include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {

        int j = 1;
        while (j <= n - i + 1) {
            cout << j;
            j += 1;
        }

        int k = 1;
        while (k < i) {
            cout << "*";
            k += 1;
        }

        int l = 1;
        while (l < i) {
            cout << "*";
            l += 1;
        }

        int m = 1;
        int toPrint = n - i + 1;
        while (m <= n - i + 1) {
            cout << toPrint;
            toPrint -= 1;
            m += 1;
        }

        cout << endl;
        i += 1;
    }
}