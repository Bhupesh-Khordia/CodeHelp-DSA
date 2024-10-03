#include <iostream>
using namespace std;

bool isPossibleSol(int arr[], int n, int k, int mid) {
	int wood = 0;
	for (int i = 0; i < n; i++) {
		if(arr[i] - mid > 0) {
			wood += arr[i] - mid;
		}
        if(wood >= k) {
            return true;
        }
	}
	return false;
}

int main() {
	int arr[5] = {4, 42, 40, 26, 46};
	int k = 20;
	int n = 5;
	int start = 0;
	int maxi = -1;
	for(int i = 0; i < n; i++) {
		maxi = max(maxi, arr[i]);
	}
	int end = maxi;
	int ans = -1;
	while(start <= end) {
        int mid = start + (end - start) / 2;
		if(isPossibleSol(arr, n, k, mid)) {
			ans = mid;
            start = mid + 1;
		}
		else{
			end = mid - 1;
		}
	}

    cout << ans;

	return 0;
}