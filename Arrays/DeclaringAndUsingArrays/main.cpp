#include <iostream>

int main() {
    // Declare an array of ints
    int scores [10]; // junk data

    // Read data with a loop
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    }

    scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22;

    // Print the data out
    std::cout << std::endl;
    std::cout << "---------- Set some values ----------" << std::endl;

    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    }

    std::cout << std::endl;
    std::cout << "---------- Set values in a loop ----------" << std::endl; 
    
    // Write data in a loop and print it out
    for (size_t i = 0; i < 10; i++)
    {
        scores[i] = i * 10;
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    }

    std::cout << std::endl;
    std::cout << "---------- Salaries ----------" << std::endl;

    // Declare and initialize at the same time
    double salaries [5] {12.7, 7.5, 13.2, 8.1, 9.3};

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "salaries[" << i << "]: " << salaries[i] << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "---------- Families ----------" << std::endl;

    // If you don't initialize all the elements, those you leave out are initialized to 0
    int families [5] {12, 7, 5};

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "families[" << i << "]: " << families[i] << std::endl; 
    }
    
    std::cout << std::endl;
    std::cout << "---------- Class sizes ----------" << std::endl;

    // Omit the size of the array at declaration
    int class_sizes[] {10, 12, 15, 11, 18, 17, 23, 56};

    // Will print this with a range based for loop
    for (auto value : class_sizes)
    {
        std::cout << "value: " << value << std::endl;
    }

    // Read only arrays
    const int birds[] {10, 12, 15, 11, 18, 17, 23, 56};
    // birds[2] = 8; >> compiler error trying to re-assign a read-only value

    std::cout << std::endl;
    std::cout << "---------- Scores ----------" << std::endl;

    // Sum up scores array, store result in sum
    int scores_2 [] {2, 5, 8, 2, 5, 6, 9};
    int sum = 0;

    for (int element : scores_2)
    {
        sum += element;
    }
    std::cout << "Score sum: " << sum << std::endl;

    int things [5]; // junk data
    int things2 [5] {}; // initial values of 0
    std::cout << "things: " << things << std::endl;

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "things2[" << i << "]: " << things2[i] << std::endl;        
    }
    
    return 0;
}