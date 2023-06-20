#include <iostream>

int main() {
    // Declare pointer and reference
    double double_value = 12.34;
    double &ref_double_value = double_value; // reference to double_value
    double *p_double_value = &double_value; // pointer to double_value

    // Reading
    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;

    // Writing through pointer
    *p_double_value = 15.44;

    std::cout << std::endl;
    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;
    
    // Writing through reference
    ref_double_value = 18.44;

    std::cout << std::endl;
    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;

    double some_other_double = 78.45;

    // Make the reference reference something else - just assigns some_other_double
    // to the same place in memory that ref_double_value already references
    ref_double_value = some_other_double;

    std::cout << "Making the reference reference something else..." << std::endl;
    std::cout << std::endl;
    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;
    std::cout << std::endl;   

    // Make the pointer point to something else - pointer will point to a different address whereas the reference will not
    p_double_value = &some_other_double;

    std::cout << "Making the pointer point somewhere else..." << std::endl;
    std::cout << std::endl;
    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "&double_value: " << &double_value << std::endl;
    std::cout << "&ref_double_value: " << &ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;

    *p_double_value = 555.5;

    std::cout << std::endl;
    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "&double_value: " << &double_value << std::endl;
    std::cout << "&ref_double_value: " << &ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;

    return 0;
}