# include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    while (i <= n){
        int j = 1;
        while (j < i) {
            cout << " ";
            j += 1;
        }
        int k = 1;
        int l = i;
        while (k <= n-i+1) {
            cout << l;
            k += 1;
            l += 1;
        }
        cout << endl;
        i+=1;
    }
}