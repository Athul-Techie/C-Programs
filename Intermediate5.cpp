#include <iostream>
using namespace std;

int main() {

    int n;
    int original;
    int reverse = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n != 0) {

        int digit = n % 10;

        reverse = reverse * 10 + digit;

        n = n / 10;
    }

    if (original == reverse) {
        cout << "Palindrome";
    }
    else {
        cout << "Not a palindrome";
    }

    return 0;
}