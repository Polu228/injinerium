#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    int sum = a + b;
    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}