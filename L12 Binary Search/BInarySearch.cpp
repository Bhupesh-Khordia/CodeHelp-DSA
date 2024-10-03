# include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
        int start = 0, end = n-1;
        while(start <= end) {
            // int mid = (start + end) / 2;    // This can work but when both start and end are large numbers, start + end can go out of integer's range.
            // So it is better to use.
            int mid = start + ((end - start)/2); 
            if (key == arr[mid]) {
                return mid;
            }
            else if (key > arr[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return -1;
}

int main () {
    int arr[6] = {1, 2, 3, 4, 5, 7};
    int n = 6;
    cout << binarySearch(arr, n, 7);
}



// Code of love babbar.

// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key) {

//     int start = 0;
//     int end = size-1;

//     int mid = start + (end-start)/2;

//     while(start <= end) {

//         if(arr[mid] == key) {
//             return mid;
//         }

//         //go to right wala part
//         if(key > arr[mid]) {
//             start = mid + 1;
//         }
//         else{ //key < arr[mid]
//             end = mid - 1;
//         }

//         mid = start + (end-start)/2;
//     }
    
//     return -1;
// }


// int main() { 

//     int even[6] = {2,4,6,8,12,18};
//     int odd[5] = {3, 8, 11, 14, 16};

//     int evenIndex = binarySearch(even, 6, 15);

//     cout << " Index of 15 is " << evenIndex << endl;

//     // int oddIndex = binarySearch(odd, 5, 14);

//     // cout << " Index of 14 is " << oddIndex << endl;


//     return 0;
// }

// int findPeak(int arr[], int n) {

//     int s =0, e = n-1;
//     int mid = s + (e-s)/2;

//     while(s<e) {
//         //cout<<" s " << s <<" e " << e << endl;
//         if(arr[mid] < arr[mid+1]){
//             s = mid+1; 
//         }
//         else{
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }