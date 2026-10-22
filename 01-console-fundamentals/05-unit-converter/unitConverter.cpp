#include <iostream>
#include <cstdlib>
// not using namespace std this  ;-D

float convertUnit(int from, int to, float inputMoney) {
    float outputMoney;
    float inputEuro;

    switch (from) {
        case 1: inputEuro = inputMoney; break;
        
        case 2: inputEuro = inputMoney * 0.88; break;

        case 3: inputEuro = inputMoney * 1.19; break;

        case 4: inputEuro = inputMoney * 0.00099; break;
            
        case 5: inputEuro = inputMoney * 0.0544; break;

        default: break;
    }

    switch (to) {
        case 1: outputMoney = inputEuro; break;
        
        case 2: outputMoney = inputEuro * 1.12; break;

        case 3: outputMoney = inputEuro * 0.75; break;

        case 4: outputMoney = inputEuro * 1009; break;
            
        case 5: outputMoney = inputEuro * 17.995; break;

        default: break;
    }

    return outputMoney;
    // 1 Euro = 1.12 USD = 0.75 GBP = 1009 KPW = 17.995 PRB
}


void indexToUnit(int index) {
    switch (index) {
    case 1:
        std::cout << "Euro";
        break;
    case 2:
        std::cout << "US-Dollar";
        break;
    case 3:
        std::cout << "GB-Pound";
        break;
    case 4:
        std::cout << "North Korean Won";
        break;
    case 5:
        std::cout << "Pridnestrovian Ruble";
        break;
    
    default:
        break;
    }
    return;
}

int main() {

    float userValue;
    int from;
    int to;

    std::system("clear");

    std::cout << "--- Unit Converter ---\n\n";
    std::cout << "[1] Euro (€)\n[2] US-Dollar ($)\n[3] GB-Pound (£)\n[4] North Korean Won (₩)\n[5] Pridnestrovian Ruble (₽)\n\n";

    std::cout << "Select Unit: ";
    std::cin >> from;

    std::cout << "Amount (in ";
    indexToUnit(from);
    std::cout << "s): ";
    std::cin >> userValue;
    std::cout << "Convert to: ";
    std::cin >> to;

    
    std::cout << "\n" << userValue << " ";
    indexToUnit(from);
    std::cout << "s are equal to ";
    std::cout << convertUnit(from, to, userValue);
    std::cout << " ";
    indexToUnit(to);
    std::cout << "s\n";

    return 0;
}

