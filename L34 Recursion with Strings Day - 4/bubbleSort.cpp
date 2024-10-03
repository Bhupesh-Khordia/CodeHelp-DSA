#include <iostream>
using namespace std;

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int size) {
    if(size == 1 || size == 0) {
        return;
    }
    bool swapped = false;
    for(int i = 0; i < size - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
            swapped = true;
        }
    }
    if(!swapped) {
        return;
    }
    bubbleSort(arr,size - 1);
}

int main() {
    int arr[] = {5,4,2,7,3};
    int size = 5;
    bubbleSort(arr, size);
    print(arr, size);
    return 0;
}