#include <iostream>
#include <string>

int main()
{
    std::string hello;
    std::cin >> hello;
    std::cout << hello << "\n";
    std::cin.ignore();
    std::getline(std::cin, hello);
    std::cout << hello << "\n";
}