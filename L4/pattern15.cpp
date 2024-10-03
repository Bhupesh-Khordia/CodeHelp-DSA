# include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    char k = 'A';

    int i = 1;
    while (i <= n){
        int j = 1;
        while (j<=i){       // shape of a triangle
            cout << k;     // printing character 'A' at start and increasing it each time the row ends.
            j+=1;
        }
        cout << endl;
        k+=1;
        i+=1;
    }
}

// We can use the formula 'A' + i -1 to print the desired pattern.