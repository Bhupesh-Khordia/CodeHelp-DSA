# include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    char k = 'A';

    int i = 1;
    while (i <= n){
        int j = 1;
        while (j<=n){       // shape of a square
            cout << k;     // printing character 'A' at start and increasing it each time the row ends.
            j+=1;
        }
        cout << endl;
        k+=1;
        i+=1;
    }

    // int n;
    // cin >> n;

    // char k = 'A';

    // int i = 1;
    // while (i <= n){
    //     int j = 1;
    //     while (j<=n){             // shape of a square
    //         char toPrint = k + i -1;
    //         cout << toPrint;    // we derive a formula 'A' + i - 1 which prints the desired character
    //         j+=1;
    //     }
    //     cout << endl;
    //     i+=1;
    // }
}