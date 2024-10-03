# include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n){
        int j = n - i;
        while (j) {
            cout << " ";
            j -= 1;
        }
        int k = 1;
        while (k <= i) {
            cout << k;
            k += 1;
        }
        int l = 1;
        int toPrint = i - 1;
        while (l < i){
            cout << toPrint;
            toPrint -= 1;
            l += 1;
        }
        cout << endl;
        i += 1;
    }
}