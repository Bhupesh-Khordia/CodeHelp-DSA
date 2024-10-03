# include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    while (i <= n){
        int j = 1;
        while (j<=i){       // shape of a triangle (number of columns is equal to number of rows)
            cout << i;    // printing value of row number
            j+=1;
        }
        cout << endl;
        i+=1;
    }
}