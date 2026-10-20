#include <iostream>
using namespace std;

int main() {

    float number1;  // float for integers with 6-7 decimal digits (4 bytes) 
    float number2;
    char op;        // char for single character
    float result;
    char tryAgain;
    
    cout << "first number: ";
    cin >> number1;

    cout << "second number: ";
    cin >> number2;

    cout << "operator (+ - * /}: ";
    cin >> op;
    
    switch(op) {
        
        case '+':
            result = number1 + number2;
            break;

        case '-':
            result = number1 - number2;
            break;

        case '*':
            result = number1 * number2;
            break;

        case '/': // or operator
            result = number1 / number2;
            break;

        default:
            cout << "Error, wrong operator";

            cout << "Try again? [y/n] ";
            cin >> tryAgain;

            if(tryAgain == 'y') {
                main();
            }

            return 0;
    }

    cout << endl << "The result is: " << result << endl;

    return 0;
}