#include <iostream>
using namespace std;

int main() {
    int number = 0;
    long long sum = 0;
    
    cout << "Enter number: ";
    cin >> number;
    
    for (int i = 1; i <= number; i++) {
        
        sum = sum + i;
    }
    cout << "Result: " << sum;
    
    return 0;
}
