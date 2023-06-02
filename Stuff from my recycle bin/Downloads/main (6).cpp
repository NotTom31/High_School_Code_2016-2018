#include <iostream>

int main()
{
    int a, b = 2;
    double c = 4.2;
    a = b * c;
    std::cout << a; //the value is 8 because the decimal is truncated when setting it equal to int a
}