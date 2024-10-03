#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    if(n == 1 || n == 0) {
        return true;
    }
    if(arr[n-1] > arr[n-2]) {
        isSorted(arr, n-1);
    }
    else{
        return false;
    }
}


int main() {
    int arr[] = {1,6,5,6,7,8};
    int size = 6;
    cout << isSorted(arr, size);
    return 0;
}