#include <iostream>
using namespace std;

int main() {
    long long number = 0;
    long long sum = 0;
    
    cout << "Enter number: ";
    cin >> number;
    
    for (long long i = 1; i <= number; i++) {
        
        sum = sum + i;
    }
    cout << "Result: " << sum;
    
    return 0;
}
