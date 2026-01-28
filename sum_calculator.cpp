#include <iostream>
using namespace std;

int main() {
    long long number = 0;
    long long sum = 0;
    
    cout << "Enter number: ";
    cin >> number;
    
    sum = (number * (number + 1)) / 2;
    
    cout << "Result: " << sum << endl;
    
    return 0;
}
