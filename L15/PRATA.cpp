# include <iostream>
using namespace std;

bool isPossibleSol(int arr[], int n, int k, int mid) {
    int totalParatha = 0;
    for(int i = 0; i < n; i++) {
        int paratha = 0;
        int temp = arr[i];
        int temp2 = 2;
        while(temp <= mid) {
            paratha++;
            temp = temp + (arr[i] * temp2);
            temp2++;
        }
        totalParatha += paratha;
    }
    if(totalParatha >= k) {
        return true;
    }
    return false;
}

int main() {
    int x;
    cin >> x;
    int ansArr[x];
    for(int j = 0; j < x; j++) {
        int p;
        cin >> p;
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            int q;
            cin >> q;
            arr[i] = q;
        }
        // int p = 10;
        // int n = 4;
        // int arr[4] = {1, 2, 3, 4};
        int start = 0;
        int end = ((p * (p + 1)) / 2);
        int mid = start + ((end - start) / 2);
        int ans = -1;
        while(start <= end) {
            if(isPossibleSol(arr, n, p, mid)) {
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
            mid = start + ((end - start) / 2);
        }

        ansArr[j] = ans;
    }
    
    for(int i = 0; i < x; i++) {
        cout<< ansArr[i] << endl;
    }
    
    return 0;
}