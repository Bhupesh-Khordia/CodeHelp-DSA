# include <iostream>
// using namespace std;

int main () {
    int arr[100] ;

    // for (int i = 0; i < 100; ++i) {
    //     arr[i] = 1;
    // }

    std::fill(arr, arr+100, 1) ;  // saw it from chat gpt.

    std :: cout << arr[0];
}