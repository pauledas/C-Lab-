#include <iostream>

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Factorial is not defined for negative numbers.";
        return 1;
    }

    unsigned long long factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    std::cout << "Factorial of " << n << " is " << factorial;
    return 0;
}