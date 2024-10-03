#include<iostream>
#include<limits.h>
using namespace std;

int getMin(int num[], int n) {

    int minValue = INT_MAX;
    
    for(int i = 0; i<n; i++) {
        
        minValue = min( minValue, num[i]);       // we can either use the built in function or use a loop to find minimum value.
        
        //if(num[i] < min){
        //    minValue = num[i];
        //}
    }

    //returning min value
    return minValue;
}

int getMax(int num[], int n) {

    int maxValue = INT_MIN;
    
    for(int i = 0; i<n; i++) {

        maxValue = max(maxValue, num[i]);

       // if(num[i] > max){
         //   maxValue = num[i];
       // }
    }

    //returning max value
    return maxValue;
}

int main() {

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int num[100];

    //taking input in array
    for(int i = 0; i<size; i++) {
        cout << "Enter value no. " << i + 1 << " : ";
        cin >> num[i];
    }

    cout << " Maximum value is " << getMax(num, size) << endl;
    cout << " Minimum value is " << getMin(num, size) << endl;


    return 0;
}