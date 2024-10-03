#include <iostream>
using namespace std;

void replaceSpacesInPlace(string &str) {
    int spaceCount = 0;

    // Count the number of spaces in the string
    for (char c : str) {
        if (c == ' ') {
            spaceCount++;
        }
    }

    // Calculate the new length of the string after replacement
    int newLength = str.length() + spaceCount * 2;

    // Resize the string to accommodate the additional characters
    str.resize(newLength);

    // Iterate through the original string from the end
    for (int i = str.length() - 1, j = newLength - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            str[j--] = '0';
            str[j--] = '4';
            str[j--] = '@';
        } else {
            str[j--] = str[i];
        }
    }
}

int main() {
    string input = "Hello World";
    replaceSpacesInPlace(input);
    cout << input << endl;
    return 0;
}
