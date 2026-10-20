#include <iostream>
using namespace std;

int main() {

    float number1;  // float for integers with 6-7 decimal digits (4 bytes) 
    float number2;
    float result;

    char op;        // char for single character
    char tryAgain;  // if wrong operator
    
    cout << endl << "first number: ";
    cin >> number1;

    cout << "second number: ";
    cin >> number2;

    cout << "operator ( + - * / ): ";
    cin >> op;
    
    switch(op) { // switch executes different blocks of code depending on the value of a given variable (op) works similar to if-else statements
        case '+':
            result = number1 + number2;
            break; // exits the switch block

        case '-':
            result = number1 - number2;
            break;

        case '*':
            result = number1 * number2;
            break;

        case '/':
            result = number1 / number2;
            break;

        default: // if no case matches
            cout << "Error, wrong operator";

            cout << "Try again? [y/n] ";
            cin >> tryAgain;

            if(tryAgain == 'y') {
                main(); // calls the main function recursively to start again
            }

            return 0;
    }

    cout << endl << "The result is: " << result << endl << endl;

    return 0;
}
