#include <iostream>

int main() {
    const size_t COUNT = 100;
    size_t i = 0; // iterator declaration
    
    while (i < COUNT) // condition
    {
        std::cout << i << ": I love C++" << std::endl;
        i++; // increment i
    }
    
    std::cout << "Loop is done!" << std::endl;

    return 0;
}