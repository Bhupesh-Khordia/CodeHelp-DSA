#include <iostream>
using namespace std;

bool search(int arr[], int n, int key) {
    if(n == 0) {
        return false;
    }
    if(arr[0] == key) {
        return true;
    }
    else{
        search(arr + 1, n-1, key);
    }
}

int main() {
    int arr[] = {1,5,4,3,5};
    int n = 5;
    int num = 10;
    cout << search(arr, n, num);
    return 0;
}