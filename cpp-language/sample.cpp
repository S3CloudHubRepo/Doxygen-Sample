#include <iostream>

/**
 * @brief Adds two numbers.
 * @param a First number.
 * @param b Second number.
 * @return Sum of a and b.
 */
int addNumbers(int a, int b) {
    return a + b;
}

/**
 * @brief Multiplies two numbers.
 * @param a First number.
 * @param b Second number.
 * @return Product of a and b.
 */
int multiplyNumbers(int a, int b) {
    return a * b;
}

/**
 * @brief Divides two numbers.
 * @param numerator The numerator.
 * @param denominator The denominator.
 * @return The result of the division.
 */
float divideNumbers(int numerator, int denominator) {
    if (denominator == 0) {
        std::cerr << "Error: Division by zero." << std::endl;
        return 0.0f;  // Return 0 in case of division by zero
    }
    return static_cast<float>(numerator) / denominator;
}

/**
 * @brief Squares a number.
 * (Missing @param and @return tags)
 */
int square(int x) {
    return x * x;
}

int main() {
    int a = 5, b = 10;
    std::cout << "Addition: " << addNumbers(a, b) << std::endl;
    std::cout << "Multiplication: " << multiplyNumbers(a, b) << std::endl;
    std::cout << "Division: " << divideNumbers(a, b) << std::endl;
    std::cout << "Square of a: " << square(a) << std::endl;
    return 0;
}

