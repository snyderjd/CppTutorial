#include <iostream>

int main() {
    const int COUNT = 10;
    size_t i = 0; // iterator declaration

    do
    {
        std::cout << i << ": I love C++" << std::endl;
        i++; // incrementation
    } while (i < COUNT);

    std::cout << "Loop is done!" << std::endl;

    return 0;
}