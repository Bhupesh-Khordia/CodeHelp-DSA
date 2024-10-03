# include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int k = 1;

    int i = 1;
    while (i <= n){
        int j = 1;
        while (j<=n){     // shape of a square
            cout << k;    // we initialize an external number k = 1 and increase it after every time we print it.
            k+=1;
            j+=1;
        }
        cout << endl;
        i+=1;
    }
}