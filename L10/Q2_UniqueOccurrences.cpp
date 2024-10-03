# include <iostream>
using namespace std;

bool uniqueOccurrences(int arr[], int size) {
    int countArr[100];
    int x = 0;
    // int size = sizeof(arr)/ sizeof(int);
    for (int i = 0; i < size; i++) {
        bool notRepeated = true;

        for (int x = 0; x < i; x++) {
            if (arr[x] == arr[i]) {
                notRepeated = false;
            }
        }

        if(notRepeated) {
            int count = 1;
            for (int j = 0; j < size; j++) {
                if (arr[i] == arr[j] && i != j) {
                    count++;
                }
            }
            countArr[x] = count;
            x++;
        }
    }

    for (int i = 0; i < x; i++) {
        int countt = 1; 
        for (int j = 0; j < x; j++) {
            if (countArr[i] == countArr[j] && i != j) {
                countt++;
            }
            if (countt > 1) {
                return false;
            }
        }
    }

    return true;

}

int main() {
    int arr[4] = {1, 2, 1, 2};
    cout << uniqueOccurrences(arr, 4);
}