#include <iostream>
using namespace std;

int LengthOfStr(char arr[]){
    int length = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        length++;
    }
    return length;
}

void reverse(char arr[]) {
    int s = 0;
    int e = LengthOfStr(arr) - 1;
    while(s < e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main() {
    char name[20];
    cout << "Enter Your name: ";
    cin >> name;

    cout << "The reverse of your Name is: ";
    reverse(name);
    cout << name;
    return 0;
}