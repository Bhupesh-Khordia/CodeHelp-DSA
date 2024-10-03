# include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;


    int i = 1;
    while (i <= n){
        int j = 1;
        char k = 'A';
        while (j<=n){       // shape of a square
            cout << k;     // printing character 'A' at start and increasing it each time the column ends.
            j+=1;
            k+=1;
        }
        cout << endl;
        i+=1;
    }
}

// We can also use the formula 'A' + j -1 to print the desired pattern.