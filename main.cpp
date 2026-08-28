#include <iostream>

int main() {
    double num1{};
    double num2{};

    std::cout << "Enter first number:";
    std::cin >> num1;

    std::cout << "Enter second number:";
    std::cin >> num2;

    std::cout << "Sum: " << num1 + num2 << std::endl;

    return 0;
}