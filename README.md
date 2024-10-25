# Palindrome-2
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string x) {
    int n = x.length();

    // Compare the string from both ends
    for (int i = 0; i < n / 2; i++) {
        if (x[i] != x[n - i - 1]) {
            return false; // Not a palindrome
        }
    }

    return true; // Is a palindrome
}

int main() {
    string x;
    cout << "Enter a string: ";
    cin >> x;

    if (isPalindrome(x)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}