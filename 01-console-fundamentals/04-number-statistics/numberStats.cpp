#include <iostream>
#include <vector>
#include <limits>
#include <cstdlib>

using namespace std;

void numberStatistics(vector<int> numberList) {

    int sum = 0;
    int minimum, maximum;

    for(int i = 0; i < numberList.size(); i++) {

        if(i == 0) {
            minimum = numberList[0]; 
            maximum = numberList[0]; 
        }

        sum += numberList[i];

        if(numberList[i] < minimum) {
            minimum = numberList[i];
        }

        if(numberList[i] > maximum) {
            maximum = numberList[i];
        }

        if(i == numberList.size() - 1) {
            cout << numberList[i];
        }

        else {
            cout << numberList[i] << ", ";    
        }
    }

    double average = double(sum)/numberList.size();
    
    cout << "\n\n--- Number Statistics ---\n";
    cout << "Count:\t\t" << numberList.size() << endl;
    cout << "Sum:\t\t" << sum << endl;
    cout << "Average:\t" << average << endl;
    cout << "Minimum:\t" << minimum << endl;
    cout << "Maximum:\t" << maximum << endl;
}

int main() {
    
    vector<int> numberList;

    int number;

    cout << "Insert numbers for the statistic\nPress enter between numbers\nWrite 0 to finish\n";

    while(number != 0) {

        cin >> number;

        if(cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input!\n" << endl;
            cin >> number;
        }    

        numberList.push_back(number);
    }

    numberList.pop_back();

    system("clear");
    numberStatistics(numberList);
    
    return 0;
}