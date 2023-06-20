#include <iostream>

int main() {
    
    int value {5};

    // Increment value by one
    value = value + 1;
    std::cout << "The value is: " << value << std::endl; // 6

    value = 5; // reset value to 5

    // Decrement by one
    value = value - 1;
    std::cout << "The value is: " << value << std::endl; // 4

    // ==============================
    
    std::cout << "----- Postfix increment and decrement -----" << std::endl;

    value = 5; // reset to 5

    std::cout << "The value is (incrementing): " << value++ << std::endl;
    std::cout << "The value is: " << value << std::endl;

    std::cout << std::endl;

    value = 5; // reset value to 5

    std::cout << "The value is (decrementing): " << value-- << std::endl;
    std::cout << "The value is: " << value << std::endl;

    // ==============================
    std::cout << "----- Prefix increment and decrement -----" << std::endl;
    
    value = 5; // reset to 5

    ++value;
    std::cout << "The value is (prefix++): " << value << std::endl;

    value = 5; // reset to 5
    std::cout << "The value is (prefix++ in place): " << ++value << std::endl;

    std::cout << std::endl;

    // Prefix: decrementing
    value = 5;

    --value;
    std::cout << "The value is (prefix--): " << value << std::endl;

    value = 5; // reset to 5
    std::cout << "The value is (prefix-- in place): " << --value << std::endl;
    
    return 0;
}