#include <iostream>
#include "compare.h" // preprocessor
#include "operations.h"

int main() {
    int maximum = max(134, 56);
    std::cout << "max: " << maximum << std::endl;

    int minimum = min(146, 23);
    std::cout << "min: " << minimum << std::endl;

    int x = 4;
    int y = 5;

    int result = incr_mult(x, y);
    std::cout << "result: " << result << std::endl;

    return 0;
}