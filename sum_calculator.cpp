#include <iostream>
using namespace std;

int main() {
    long long number = 0;
    long long sum = 0;
    
    cout << "Enter number: ";
    cin >> number;
    
    while (number > 999999999){
        cout << "Warning: Number is too big! It may cause incorrect results." << endl;
        cout << "Please enter a number smaller than 1,000,000,000: ";
        cin >> number;
    }

    sum = (number * (number + 1)) / 2;
    
    cout << "Result: " << sum << endl;
    
    return 0;
}
