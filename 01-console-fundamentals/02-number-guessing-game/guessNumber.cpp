#include <iostream>
#include <random>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main() {

    system("clear");

    int guessedNumber, targetNumber;

    srand(time(0)); // creating random seed for seconds passed since 1970

    targetNumber = rand() % 101; // create number between 0-100 with seed

    while(targetNumber != guessedNumber) { // not equal

        cout << "guess a number (0-100)\n";

        cin >> guessedNumber;

        while(cin.fail()) {
            system("clear");
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Try again: ";
            cin >> guessedNumber;
        }

        /*
            cin.fail() checks for invalid input
            cin.clear() resets the error state of cin so it can continue
            cin.ignore(numeric_limits<streamsize>::max(), '\n') takes ywo arguments
                ignore() skips symbols
                numeric_limits<streamsize>::max() allows unlimited amount of symbols
                '\n' stops at new line
        */

        system("clear");
        
        if (guessedNumber == targetNumber) {
            cout << "Correct! The number was " << targetNumber << endl;
            return 0;
        }
        else {
            if(guessedNumber > targetNumber) {
                cout << "The number is lower than " << guessedNumber << endl;
            }
            else if(guessedNumber < targetNumber) {
                cout << "The number is higher than " <<guessedNumber << endl;
            }
        }
    }
}