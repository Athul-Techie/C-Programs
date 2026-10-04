#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n;
    int original;
    int digits = 0;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    // Count the number of digits
    int temp = n;

    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    // Calculate the Armstrong sum
    temp = n;

    while (temp != 0) {
        int digit = temp % 10;

        sum = sum + pow(digit, digits);

        temp = temp / 10;
    }

    cout << "Sum = " << sum << endl;

    if (sum == original) {
        cout << "Armstrong number";
    }
    else {
        cout << "Not an Armstrong number";
    }

    return 0;
}