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

int main() {

    /*
    cout << "here come all prime numbers:\n";
    for(int y = 0; y<numeric_limits<streamsize>::max(); y++) {
        if(primeNumberChecker(y)) {
            cout << y << ", ";
        }
    }
    return 0;
    */

    int inputNum;

    cout << "prime number checker\nenter a number: ";
    cin >> inputNum;

    while(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> inputNum;
    }

    if(primeNumberChecker(inputNum)) {
        cout << inputNum << " IS a prime number";
    }
    else {
        cout << inputNum << " is NOT a prime number";
    }

    return 0;
}