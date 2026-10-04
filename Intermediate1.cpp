#include <iostream>
using namespace std;

int main() 
{

    int n;
    int sum = 0;

    cout << "Enter N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    cout << "Sum = " << sum;

    return 0;
}