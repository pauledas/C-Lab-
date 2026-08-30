
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, remainder, original;
    cout << "Enter an integer: ";
    cin >> n;
    original = n;

    // Handle negative numbers by taking their absolute value if necessary, 
    // or assume positive input. Here we use standard positive logic:
    while (n > 0) {
        remainder = n % 10;   // Extract the last digit
        sum += remainder;     // Add it to the running sum
        n /= 10;              // Remove the last digit
    }

    cout << "Sum of digits of " << original << " is: " << sum << endl;

    return 0;
}