#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector <int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    rotate(v.begin(), v.begin() + 2, v.end() - 1);
    for(auto i : v) {
        cout << i << " ";
    }

}