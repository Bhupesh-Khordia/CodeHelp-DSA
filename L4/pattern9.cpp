# include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int k;

    int i = 1;
    while (i <= n){
        int j = 1;
        k = i;
        while (j<=i){                   // shape of a triangle (number of columns is equal to number of rows)
            // cout << k << " ";       // we initialize a variable k = row number and increase it each time we print it.
            cout << i+j-1 << " ";     // we derive a formula by observation (i+j-1) to print
            k+=1;
            j+=1;
        }
        cout << endl;
        i+=1;
    }
}