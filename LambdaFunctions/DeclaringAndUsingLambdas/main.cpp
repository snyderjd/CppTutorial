#include <iostream>

int main() {
    // Lambda function signature
    // [capture list] (parameters) -> return type
    // {
    //      function body
    // }

    // Declaring a lambda function and calling it through a name
    auto func = [](){
        std::cout << "Hello World!" << std::endl;
    };
    func();

    std::cout << "--------------------" << std::endl;

    // Declaring a lambda function and call it directly
    [](){
        std::cout << "Hello World!" << std::endl;
    }();

    std::cout << "--------------------" << std::endl;

    // Lambda function that takes parameters
    [](double a, double b) {
        std::cout << "a + b: " << (a + b) << std::endl;
    }(10.0, 50.0);

    auto func1 = [](double c, double d) {
        std::cout << "c + d: " << (c + d) << std::endl;
    };
    
    func1(10, 20);
    func1(5, 7);

    std::cout << "--------------------" << std::endl;

    // Lambda function that returns something
    auto result = [](double a, double b) {
        return a + b;
    }(10, 60);

    std::cout << "result: " << result << std::endl;

    std::cout << "result2: " << [](double a, double b){
        return a + b;
    }(10, 60) << std::endl;

    auto func2 = [](double a, double b){
        return a + b;
    };

    auto result2 = func2(23, 7);
    auto result3 = func2(9, 45);

    std::cout << "result2: " << result2 << std::endl;
    std::cout << "result3: " << result3 << std::endl;
    std::cout << "direct call: " << func2(5, 2) << std::endl;

    std::cout << "--------------------" << std::endl;
    
    // Explicitly specify the return type
    auto func3 = [](double a, double b) -> int {
        return a + b;
    };

    auto func4 = [](double a, double b) {
        return a + b;
    };

    double a = 6.9;
    double b = 3.5;

    auto result4 = func3(a, b);
    auto result5 = func4(a, b);

    std::cout << "result4: " << result4 << std::endl;
    std::cout << "result5: " << result5 << std::endl;
    std::cout << "sizeof(result4): " << sizeof(result4) << std::endl; // 4
    std::cout << "sizeof(result5): " << sizeof(result5) << std::endl; // 8

    std::cout << "Done!" << std::endl;

    return 0;
}