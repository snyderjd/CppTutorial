#include <iostream>

int main() {
    int value {45};

    std::cout << "value: " << value << std::endl;

    std::cout << std::endl;

    value += 5; // equivalent to value = value + 5
    std::cout << "value (after += 5): " << value << std::endl; // 50

    value -= 5; // equivalent to value = value - 5
    std::cout << "value (after -= 5): " << value << std::endl; // 45

    value *= 2; // equivalent to value = value * 2
    std::cout << "value (after *= 2): " << value << std::endl; // 90

    value /= 3; // equivalent to value = value / 3
    std::cout << "value (after /= 3): " << value << std::endl; // 30

    value %= 11; // value = value % 11
    std::cout << "value (after %= 11: " << value << std::endl; // 8

    return 0;
}