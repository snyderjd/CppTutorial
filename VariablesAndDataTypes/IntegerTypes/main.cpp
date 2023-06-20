#include <iostream>

int main() {
    // Braced initialization int name {initial_value};
    // Variable may contain random garbage value
    // int elephant_count;

    // int lion_count{}; // initializes to 0
    // int dog_count {10}; // initializes to 10
    // int cat_count {15}; // initializes to 15

    // // Can use expression as initializer
    // int domesticated_animals { dog_count + cat_count };

    // std::cout << "Elephant count: " << elephant_count << std::endl;
    // std::cout << "Lion count: " << lion_count << std::endl;
    // std::cout << "Dog count: " << dog_count << std::endl;
    // std::cout << "Cat count: " << cat_count << std::endl;
    // std::cout << "Domesticated animal count: " << domesticated_animals << std::endl;

    // Functional initilization int name(initial_value);
    // int apple_count(5);
    // int orange_count(10);
    // int fruit_count (apple_count + orange_count);

    // // int bad_initiliazation (doesnt_exist1 + doesnt_exist2);

    // // Information lost, less safe than braced initializers - this gets chopped down to 2 because 2.9 is > 4 bytes (the size of an int)
    // int narrowing_conversion_functional(2.9);

    // std::cout << "Apple count: " << apple_count << std::endl;
    // std::cout << "Orange count: " << orange_count << std::endl;
    // std::cout << "Fruit count: " << fruit_count << std::endl;
    // std::cout << "Narrowing conversion: " << narrowing_conversion_functional << std::endl;

    // Assignment initialization int name = initial_value;
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9; // also chopped down to 2

    std::cout << "Bike count: " << bike_count << std::endl;
    std::cout << "Truck count: " << truck_count << std::endl;
    std::cout << "Vehicle count: " << vehicle_count << std::endl;
    std::cout << "Narrowing conversion: " << narrowing_conversion_assignment << std::endl;

    // Check the size with sizeof
    std::cout << "sizeof int: " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count: " << sizeof(truck_count) << std::endl;

    return 0;
}