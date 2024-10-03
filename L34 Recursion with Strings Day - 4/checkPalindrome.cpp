#include <iostream>
using namespace std;

bool check(string str, int end) {
    int start = str.length() - end - 1;
    if(end <= str.length()/2) {
        return true;
    }
    if(str[start] == str[end]) {
        return check(str, end - 1);
    }
    else{
        return false;
    }
}

int main() {
    string str = "abcba";
    cout << check(str, 4);
    return 0;
}