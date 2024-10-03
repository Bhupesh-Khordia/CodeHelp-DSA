# include <iostream>
using namespace std;

void printArray (int arr[], int n) {
    for ( int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}


// By me.

// int main () {                                                           
//     int arr[6] = {1, 56, 112, -1212, 5, 11};                                      
//     int size = 6;                                                                 
//     for (int i = 0; i < (size/2); i++) {                                                   
//         int a = arr[i];                                                    
//         int b = arr[size - i -1];                                                      
//         arr[i] = b;                                                    
//         arr[size - i -1] = a;                                                      
//     }                                                      
//
//     printArray(arr, size);                                                     
// }                                                      

// By Love Babbar Bhaiya.

void reverse (int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start ++;
        end --;
    }
}

int main () {
    int arr[7] = { 1, 2, 3, 4, 5, 6, 7};

    reverse(arr, 7);
    printArray (arr, 7);
}