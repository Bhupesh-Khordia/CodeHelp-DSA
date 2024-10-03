# include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int k = 1;

    int i = 1;
    while (i <= n){
        int j = 1;
        while (j<=i){       // shape of a triangle (number of columns is equal to number of rows)
            cout << k << " ";      // we initialize a variable k = 1 and increase it by 1 every time we print it.
            k+=1;
            j+=1;
        }
        cout << endl;
        i+=1;
    }
}