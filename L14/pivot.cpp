#include <iostream>
using namespace std;

int pivot(int arr[], int size) {
    int start = 0;
    int end = size-1;
    int mid = start + ((end - start)/2);
                                            
    while(start < end) {
        if(arr[mid] >= arr[start]) {
            start = start + 1;
        }
        else {
            end = mid;
        }
        mid = start + ((end - start)/2);
    }
    return mid;
}

int main() {
    int arr[7] = {9, 10, 1, 2, 2, 3, 7};
    cout << "The Index of pivot element is " << pivot(arr, 7);
}