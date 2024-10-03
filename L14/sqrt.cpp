#include <iostream>
using namespace std;

int floorSqrt(int n)
{
    int start = 0;
    int end = n;
    long long int mid = start + ((end - start) / 2);
    int ans;

    while ( start <= end) {
        if((mid * mid) == n) {
            ans = mid;
            break;
        }
        else if((mid * mid) > n) {
            end = mid - 1;
        }
        else {
            ans = mid;
            start = mid + 1;
        }
        mid = start + ((end - start) / 2);
    }

    return ans;
}

int main() {
    int n;
    cout<< "Enter the number: ";
    cin >> n;

    float sqrt = floorSqrt(n);
    while(sqrt * sqrt <= n) {
        sqrt += 0.1;
    }
    sqrt-=0.1;
    while(sqrt * sqrt <= n) {
        sqrt += 0.01;
    }
    sqrt -= 0.01;
    while(sqrt * sqrt <= n) {
        sqrt += 0.001;
    }
    sqrt -= 0.001;
    cout << sqrt;
}