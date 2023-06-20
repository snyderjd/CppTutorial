#include <iostream>

// Function declaration/prototype
int max(int a, int b); 
int min(int a, int b);
int inc_mult(int a, int b);

int main() {
    int x = 5;
    int y = 12;

    int maximum = max(x, y);
    std::cout << "max: " << maximum << std::endl;

    int minimum = min(x,y);
    std::cout << "min: " << minimum << std::endl;

    int result = inc_mult(x, y);
    std::cout << "result: " << result << std::endl;

    return 0;
}

// Function definition, shows up after main() 
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }   
}

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    } else
    {
        return b;
    }
}

int inc_mult(int a, int b)
{
    return ((++a) * (++b));
}