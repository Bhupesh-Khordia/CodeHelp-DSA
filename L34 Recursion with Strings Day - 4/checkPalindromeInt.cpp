#include <math.h>
#include <iostream>
using namespace std;

bool check(int& i, int count) {
    if(i < 10) {
        return true;
    }
    int firstDigit = (i / pow(10, count - 1));
    if((i % 10) == firstDigit) {
        i = i - ((pow(10, count - 1)) * firstDigit);
        i = i / 10;
        return check(i, count - 2);
    }
    else {
        return false;
    }
}

int main() {
    int i = 12321;
    int count = 0;
    int j = i;
    while(j) {
        count++;
        j = j / 10;
    }
    cout << check(i, count);
    return 0;
}