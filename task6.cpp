#include <iostream>
using namespace std;

int main() {
    string password;

    do {
        cout << "Enter password: ";
        cin >> password;

        if (password != "password123") {
            cout << "Incorrect password. Try again." << endl;
        }
    } while (password != "password123");

    cout << "Password accepted." << endl;
    return 0;
}