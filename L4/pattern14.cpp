# include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;


    int i = 1;
    while (i <= n){
        int j = 1;
        char k = 'A' + i - 1;
        while (j<=n){       // shape of a square
            cout << k;     // printing character 'A' at start and increasing it each time the row ends.
            j+=1;
            k+=1;
        }
        cout << endl;
        i+=1;
    }
}

// we can use the formula i+j-1 which returns in number. To convert that to character we add 'A' - 1 both sides.
// we get 'A' + i + j - 2  . This is the final formula.