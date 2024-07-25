#include <iostream>
using namespace std;

int main() {
    int a, b, remainder;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    do {
        remainder = a % b;
        a = b;
        b = remainder;
    } while (remainder != 0);

    cout << "GCD is " << a << endl;
    return 0;
}