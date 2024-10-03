#include <iostream>
using namespace std;

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n)
{   
    bool swapped = false;
    for(int i = n - 1; i >= 0; i--) {
        for(int j = 0; j < i; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(!swapped) {
            break;
        }
    }
}

int main() {
    int arr[5] = {1, 2, 8, 3, 5};
    int n = 5;
    bubbleSort(arr, n);
    printArr(arr, n);
}