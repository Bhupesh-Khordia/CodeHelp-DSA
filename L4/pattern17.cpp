# include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;


    int i = 1;
    while (i <= n){
        int j = 1;
        char k = 'A' + i -1;
        while (j<=i){       // shape of a triangle
            cout << k;     // printing character 'A' at start and increasing it each time the row ends.
            k+=1;
            j+=1;
        }
        cout << endl;
        i+=1;
    }
}

// we can use the formula 'A' + i + j - 2 to get the desired pattern. Similar to pattern 14.