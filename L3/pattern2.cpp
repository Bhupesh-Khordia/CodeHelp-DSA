#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;

    int i = 1;
    while (i<=n){
        int j = 1;
        while (j<=n){        // print n columns in each row (total n rows)
            cout << i;       // print row number in each column
            j+=1;
        }
        cout << endl;
        i+=1;
    }
}