#include <iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int key) {
    if(s > e) {
        return false;
    }
    int mid = s+((e - s) / 2);
    if(arr[mid] == key) {
        return true;
    }
    if(arr[mid] > key) {
        binarySearch(arr, s, (mid) - 1, key);
    }
    else{
        binarySearch(arr, (mid) + 1, e, key);
    }
}

int main() {
    int arr[] = {1,6,7,9,11};
    int n = 5;
    int key = 111;
    cout << binarySearch(arr, 0, n -1, key);
    return 0;
}