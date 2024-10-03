#include <iostream>
using namespace std;

int LengthOfStr(char arr[]){
    int length = 0;
    for(int i = 0; arr[i] != '\0'; i++){            // Null Character tak ka hi print hota hai, So wha tak ki length hi valid h.
        length++;
    }
    return length;
}

int main() {
    char name[20];
    cout << "Enter Your name: ";
    cin >> name;

    cout << "The length of your Name is: " << LengthOfStr(name);
}