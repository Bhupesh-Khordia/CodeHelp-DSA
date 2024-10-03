# include <iostream>
using namespace std;

int sumArr(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main () {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[1000];

    for (int i = 0; i < size; i++) {
        cout << "Enter element no. " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << sumArr(arr, size);
}