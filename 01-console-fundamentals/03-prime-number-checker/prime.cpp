// prime number checker

#include <iostream>
#include <limits> // for numeric_limits<streamsize>::max() in line 26

using namespace std;

bool primeNumberChecker(int zahl) {
    bool isntDivisible = true;
    for(int i = 2; i < zahl; i++) {
        if(zahl % i == 0) {
            isntDivisible = false;
        }
    }
    return isntDivisible;
}

void showPrimeNumbers() {
    for(int y = 0; y<101; y++) {
        if(primeNumberChecker(y)) {
            cout << y << ", ";
        }
    }
    return;
}

int main() {

    int inputNum;

    cout << "prime number checker\nenter an integer: ";
    cin >> inputNum;

    while(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "invalid input! try again: ";
        cin >> inputNum;
    }

    if(inputNum < 2) {
        cout << inputNum << " is NOT a prime number, beacuse prime numbers must have two distinct factors. These are all prime numbers to 100\n";
        showPrimeNumbers();
        cout << '\n';
        return 0;
    }

    if(primeNumberChecker(inputNum)) {
        cout << inputNum << " IS a prime number\n";
    }
    else {
        cout << inputNum << " is NOT a prime number\n";
    }

    return 0;
}