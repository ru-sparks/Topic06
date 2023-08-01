#include <iostream>

// Generic function to find the maximum value between two elements
template<typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int intResult = findMax(10, 20);             // Calling with integers
    double doubleResult = findMax(3.14, 1.234);  // Calling with doubles
    char charResult = findMax('a', 'Z');         // Calling with characters

    std::cout << "Maximum of 10 and 20 is: " << intResult << std::endl;
    std::cout << "Maximum of 3.14 and 1.234 is: " << doubleResult << std::endl;
    std::cout << "Maximum of 'a' and 'Z' is: " << charResult << std::endl;

    return 0;
}