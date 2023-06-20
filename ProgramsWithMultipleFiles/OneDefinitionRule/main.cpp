#include <iostream>
#include "person.h"

// Variable: declaration and definition
double weight {};

double add(double a, double b);

struct Point
{
    double m_x{};
    double m_y{};
};

int main() {
    Person p1("John Snow", 35);
    p1.print_info();

    return 0;
}