#include <iostream>

int main() {
    // Declare array
    char message [6] {"Hello"};
    int data[5] {1, 2, 3, 4, 5};

    std::cout << "data: " << data << std::endl;

    // Print out the array through looping
    std::cout << "message: ";
    for (auto c : message)
    {
        std::cout << c;
    }
    std::cout << std::endl;

    std::cout << "--------------------" << std::endl;

    // Change characters in our array
    message[1] = 'a';

    // Print out the array through looping
    for (auto c : message)
    {
        std::cout << c;
    }
    std::cout << std::endl;

    std::cout << "--------------------" << std::endl;

    // This will probably print garbage after your char array
    std::cout << "message: " << message << std::endl;

    // If a character array is null terminated, it's called C-string
    char message1 [] {'H', 'e', 'l', 'l', 'o', '\0'};
    std::cout << "message1: " << message1 << std::endl;
    std::cout << "sizeof(message1): " << sizeof(message1) << std::endl;

    std::cout << "--------------------" << std::endl;
    
    char message2 [6] {'H', 'e', 'l', 'l', 'o'}; // This is a c-string
    std::cout << "message2: " << message2 << std::endl;
    std::cout << "sizeof(message2): " << sizeof(message2) << std::endl;

    char message3 [] {'H', 'e', 'l', 'l', 'o'}; // This is not a c-string
    std::cout << "message3: " << message3 << std::endl;
    std::cout << "sizeof(message3): " << sizeof(message3) << std::endl;
    
    std::cout << "--------------------" << std::endl;

    // String literal
    char message4 [] {"Hello"};
    std::cout << "message4: " << message4 << std::endl;
    std::cout << "sizeof(message4): " << sizeof(message4) << std::endl;

    std::cout << "String literal is stored as array of chars" << std::endl;
    for (auto element : message4)
    {
        std::cout << element << std::endl;
    }
    

    // Can't safely print out arrays other than those of characters
    int numbers [] {1, 2, 3, 4, 5};
    std::cout << "numbers: " << numbers << std::endl;

    return 0;
}