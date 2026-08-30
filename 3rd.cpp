#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n = 153, original = n, sum = 0, digits = 0, temp = n;

    while (temp > 0) { digits++; temp /= 10; }
    
    temp = n;
    while (temp > 0) {
        sum += round(pow(temp % 10, digits));
        temp /= 10;
    }

    if (sum == original)
        cout << n << " is an Armstrong number.\n";
    else
        cout << n << " is not an Armstrong number.\n";

    return 0;
}