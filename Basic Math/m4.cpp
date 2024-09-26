#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    long long reversed = 0;
    int original = x;

    while (x > 0) {
        int digit = x % 10;
        reversed = (reversed * 10) + digit;
        x /= 10;
    }

    return original == reversed;
}

int main() {
    int x;
    cin >> x;

    if (isPalindrome(x)) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }

    return 0;
}