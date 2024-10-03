# include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    while (i <= n){
        int j = 1;
        while (j<=n){     // shape of a square
            cout << j;    // printing value of column number
            j+=1;
        }
        cout << endl;
        i+=1;
    }
}