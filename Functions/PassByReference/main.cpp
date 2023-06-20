#include <iostream>

// Pass by reference
void say_age(int& age); // declaration

int main() {
    int age = 23; // local
    std::cout << "age (before call): " << age << " &age: " << &age << std::endl; // 23
    say_age(age);
    std::cout << "age (after call): " << age << " &age: " << &age << std::endl; // 24

    return 0;
}

// changes are made on original variable because we are passing in a reference
void say_age(int& age)
{
    ++age;
    std::cout << "Hello, you are " << age << " years old! &age: " << &age << std::endl;
}