#include <iostream>
using namespace std;

int main() {

    float number1;  // float for integers with 6-7 decimal digits (4 bytes) 
    float number2;
    float result;

    char op;        // char for single character
    char tryAgain;  // if wrong operator

    do {
        bool valid = true;
        tryAgain = 'n';
    
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
                cout << endl << "Error, wrong operator";
                valid = false;
                cout << endl << "Try again? [y/n] ";
                cin >> tryAgain;
        }

        if (valid == true) {cout << endl << "The result is: " << result << endl << endl;}

    } while(tryAgain == 'y');

    return 0;
}
