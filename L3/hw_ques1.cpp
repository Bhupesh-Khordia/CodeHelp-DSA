#include <iostream>
using namespace std;

int main(){
    char c;
    cout << "Enter the Character c: ";
    cin >> c;
    int a = c;
    if (a >= 97 & a <= 122){
        cout << "Char c is a lowercase(a-z).";
    }
    else if (a >= 65 & a <= 90){
        cout << "Char c is an uppercase(A-Z).";
    }
    else if (a >= 48 & a <= 57){
        cout << "Char c is a number(0-9).";
    }
    else {
        cout<< "Please enter a lowercase or uppercase or a number.";
    }
}