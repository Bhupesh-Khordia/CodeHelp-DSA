# include <iostream>
using namespace std ;

int main(){
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {            // loop for rows
        int j = 1;
        while (j <= n-i){       // loop for printing spaces in upside down triangular pattern
            cout << " ";
            j+=1;
        }
        int k = 1;
        while (k <= i){         // loop for printing * in same row in triangular pattern
            cout << "*";
            k+=1;
        }
        cout << endl;
        i+=1;
    }
}