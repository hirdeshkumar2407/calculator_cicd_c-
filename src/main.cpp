#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    int a = 5, b = 3;
    std::cout << "Add: " << calc.add(a, b) << std::endl;
    std::cout << "Subtract: " << calc.subtract(a, b) << std::endl;
    std::cout << "Multiply: " << calc.multiply(a, b) << std::endl;
    try {
        std::cout << "Divide: " << calc.divide(a, b) << std::endl;
    } catch (const std::invalid_argument &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}