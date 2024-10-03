# include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;


    int i = 1;
    while (i <= n){
        char k = 'A' + n - i;
        int j = 1;
        while (j<=i){                    // shape of a triangle
            // char ch = 'A'+n-i+j-1;   // we derive a formula('A' + n - i + j -1) that works for each letter of the patern.
            // cout << ch;     
            cout << k;                // we derive a formula('A' + n - i) for the first letter of each row to print and then we increase it every time we print it.
            j+=1;
            k+=1;
        }
        cout << endl;
        i+=1;
    }
}