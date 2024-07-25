#include <iostream>
using namespace std;

int main() {
    int randomNumber = rand() % 100 + 1;
    int guess;

    do {
        cout << "Guess the number (between 1 and 100): ";
        cin >> guess;

        if (guess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number." << endl;
        }
    } while (guess != randomNumber);

    return 0;
}