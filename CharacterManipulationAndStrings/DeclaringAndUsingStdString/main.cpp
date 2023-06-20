#include <iostream>
#include <string>

int main() {
    std::string full_name; // empty string
    std::string planet = "Earth. Where the sky is blue"; // Initialize with string literal
    std::string preferred_planet = planet; // Initialize with other existing string
    std::string message {"Hello there", 5}; // Initialize with part of a string literal, contains Hello
    std::string weird_message(4, 'e'); // initialize with multiple copies of a char, contains eeee
    std::string greeting = "Hello World";
    std::string saying_hello {greeting, 6, 5}; // initialize with part of an existing std::string, starting at index 6, take 5 characters

    std::cout << "full_name: " << full_name << std::endl;
    std::cout << "planet: " << planet << std::endl;
    std::cout << "preferred_planet: " << preferred_planet << std::endl;
    std::cout << "message: " << message << std::endl;
    std::cout << "weird_message: " << weird_message << std::endl;
    std::cout << "greeting: " << greeting << std::endl;
    std::cout << "saying_hello: " << saying_hello << std::endl;

    // Changing std::string at runtime
    planet = "Earth. Where the sky is blue Earth. Where the sky is blue Earth. Where ";
    std::cout << "planet: " << planet << std::endl;

    // Use a raw array
    const char *planet1 {"Earth. Where the sky is blue Earth."};
    planet1 = "Earth. Where the sky is blue Earth. Where the sky is blue Earth. Where ";
    std::cout << "planet1: " << planet1 << std::endl;

    return 0;
}