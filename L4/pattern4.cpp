# include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    while (i <= n){
        int j = 1;
        while (j<=n){         // shape of a square
            cout << n-j+1;    // we derive the expression n-j+1 by seeing the pattern and print it.
            j+=1;
        }
        cout << endl;
        i+=1;
    }
}