#include <iostream>
using namespace std;

int main() {
    int n, sumEven = 0, sumOdd = 0, i = 1;
    cout << "Enter a number: ";
    cin >> n;

    while (i <= n) {
        if (i % 2 == 0) {
            sumEven += i;
        } else {
            sumOdd += i;
        }
        i++;
    }

    cout << "Sum of even numbers up to " << n << " is " << sumEven << endl;
    cout << "Sum of odd numbers up to " << n << " is " << sumOdd << endl;
    return 0;
}