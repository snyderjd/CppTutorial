#include <iostream>

int main() {
    // for loop

    for (unsigned int i {0}; i < 10000; ++i) 
    {
        // Whatever we want the loop to run
        std::cout << i << ": I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;

    std::cout << "------------------------------" << std::endl;

    // Use size_t: a representation of some unsigned int for positive numbers
    for (size_t i {0}; i < 10; ++i)
    {
        std::cout << i << ": I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;

    // sizeof(size_t)
    std::cout << "sizeof(size_t): " << sizeof(size_t) << std::endl;

    std::cout << "------------------------------" << std::endl;

    // scope of the iterator
    for (size_t i {0}; i < 10; ++i)
    {
        std::cout << i << ": I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    // std::cout << "i: " << i << std::endl; // compiler error - i is not in scope

    // Iterator declared outside the loop
    size_t i = 0; // Iterator defined outside
    
    for (i; i < 10; ++i)
    {
        std::cout << i << ": I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    std::cout << "i: " << i << std::endl;

    std::cout << "------------------------------" << std::endl;

    // Leave out the iterator declaration part
    for (; i < 10; ++i)
    {
        std::cout << i << ": I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    std::cout << "i: " << i << std::endl;

    // Don't hard-code values
    const size_t COUNT {100};

    for (size_t i {0}; i < COUNT; ++i)
    {
        std::cout << i << ": I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;

    for (size_t i = 0; i < 10; i++)
    {
        std::cout << i << ": tab-completed intellisense code block" << std::endl;
    }
    
    return 0;
}