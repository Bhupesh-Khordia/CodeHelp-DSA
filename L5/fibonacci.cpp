# include <iostream>
using namespace std;

int main () {
    int n;
    cout << "How many numbers of fibonacci do you want to print? " << endl;
    cin >> n;

    int a = 0;
    int b = 1;
    int sum;

    if (n == 1){
        cout << a;
    }
    else if (n>=2)
    {
        cout << a << " " << b << " ";
    }
    

    for (int i = 2; i < n; i++){
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
}