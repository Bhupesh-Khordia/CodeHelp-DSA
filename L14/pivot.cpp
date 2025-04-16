#include <iostream>
using namespace std;

int pivot(int *arr, int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] > arr[end]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return start;
}

int main() {
    int arr[7] = {9, 10, 1, 2, 2, 3, 7};
    cout << "The Index of pivot element is " << pivot(arr, 7);
}
