#include <iostream>
using namespace std;

int getSum(int arr[], int size) {
    if(size == 0) {
        return 0;
    }
    return arr[size - 1] + getSum(arr, size-1);
}

int main() {
    int arr[] = {1,5,4,3,6};
    int n = 5;
    cout << "Sum of elements is: " << getSum(arr, n);
    return 0;
}