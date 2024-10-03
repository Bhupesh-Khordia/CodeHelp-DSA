#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;             // row number
    while (i<=n){
        int j = 1;         // column number
        while (j<=n){
            cout<<"*";     // n number of stars in each row (total n number of rows)
            j+=1;
        }
        cout<<endl;        // next line after each row
        i+=1;
    }
}