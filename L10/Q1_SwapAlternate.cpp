# include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size ; i++) {
        cout << arr[i] << " ";
    }
}

void swapAlternate(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        swap(arr[i], arr[i+1]);
    }
}

int main () {
    int arr[5] = {1, 2, 3, 4, 5};
    swapAlternate(arr, 5);
    printArray(arr, 5);
}