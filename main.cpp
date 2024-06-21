#include <iostream>

int main() {
    std::cout << "Hello, user!" << std::endl;

    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    int sum = a + b;
    std::cout << "The result is: " << sum << std::endl;

    return 0;
} 
