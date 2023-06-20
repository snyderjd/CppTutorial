#include <iostream>

void say_age(int* age); // declaration

int main() {
    int age = 23; // local
    std::cout << "age (before call): " << age << " &age: " << &age << std::endl; // 23

    // Pass the address of the variable when calling a function w/ pointer parameter 
    say_age(&age); // argument
    std::cout << "age (after call): " << age << " &age: " << &age << std::endl; // 24
}

// Passing by pointer
void say_age(int* age) // parameter
{
    ++(*age);
    std::cout << "Hello, you are " << *age << " years old! &age: " << &age << std::endl; // 24
}