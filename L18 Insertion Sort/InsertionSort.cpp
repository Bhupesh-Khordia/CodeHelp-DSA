# include <iostream>
using namespace std;

void insertionSort(int n, int arr[]){
    int i = 1;
    while (i < n) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0) {
            if(arr[j] > temp) {
                arr[j + 1] = arr[j];
            }
            else {
                break;
            }
            j--;
        }
        arr[j + 1] = temp;
        i++;
    }
}

int main() {
    int arr[5] = {1, 6, 7, 3, 2};
    insertionSort(5, arr);
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}