#include <iostream>
using namespace std;

int partition(int arr[], int s, int e) {
    int pivot = arr[s];

    int cnt = 0;
 
    for(int i = s + 1; i <= e; i++) {
        if(arr[i] < pivot) {
            cnt++;
        }
    }

    int rightIndex = s + cnt;

    swap(arr[s], arr[rightIndex]);

    int i = s, j = e;

    // while(i < rightIndex && j > rightIndex) {
    while(i < j) {
        if(arr[i] < pivot) {
            i++;
            continue;
        }
        if(arr[j] > pivot) {
            j--;
            continue;
        }
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    return rightIndex;

}

void quickSort(int arr[], int s, int e) {
    if(s >= e) {
        return;
    }

    int p = partition(arr, s, e);

    quickSort(arr, s, p -1);
    quickSort(arr, p + 1, e);
}

int main() {
    int arr[] = {5,4,76,2,11,2,4};
    int n = 7;

    quickSort(arr, 0, n-1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}