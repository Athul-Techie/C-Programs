#include <iostream>
using namespace std;

int main() {

    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    for (int n = start; n <= end; n++) {

        bool prime = true;

        if (n <= 1) {
            prime = false;
        }
        else {

            for (int i = 2; i < n; i++) {

                if (n % i == 0) {
                    prime = false;
                    break;
                }
            }
        }

        if (prime) {
            cout << n << " ";
        }
    }

    return 0;
}