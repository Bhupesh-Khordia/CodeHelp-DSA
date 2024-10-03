#include<iostream>
using namespace std;

int merge(int *arr, int s, int e) {
    int inversion = 0;
    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            inversion += len1 - index1;
            arr[mainArrayIndex++] = second[index2++];
        }
    }   

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
    return inversion;

}

int mergeSort(int *arr, int s, int e) {
    //base case
    int inv = 0;
    if(s < e) {
        int mid = (s+e)/2;

        //left part sort karna h 
        inv += mergeSort(arr, s, mid);
        
        //right part sort karna h 
        inv += mergeSort(arr, mid+1, e);

        //merge
        inv += merge(arr, s, e);
    }
    
    return inv;
}

int main() {

    int arr[5] = {1,20,6,4,5};
    int n = 5;

    cout << "Inversions: " << mergeSort(arr, 0, n-1) << endl;

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}