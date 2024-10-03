#include <iostream>
using namespace std;

void reverseStr(string& str, int start, int end) {
    if(start >= end) {
        return;
    }
    swap(str[start], str[end]);
    reverseStr(str, start + 1, end - 1);
}

int main() {
    string s = "abcde";
    int start = 0;
    int end = 4;
    reverseStr(s, start, end);
    cout << s;
    return 0;
}