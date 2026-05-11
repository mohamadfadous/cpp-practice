#include <iostream>
using namespace std;

int main() {

    int secretNumber = 7;
    int guess;

    cout << "Guess the number: ";
    cin >> guess;

    while (guess != secretNumber) {

        if (guess > secretNumber) {
            cout << "Too high! Try again: ";
        }
        else {
            cout << "Too low! Try again: ";
        }

        cin >> guess;
    }

    cout << "Correct! You guessed the number." << endl;

    return 0;
}
