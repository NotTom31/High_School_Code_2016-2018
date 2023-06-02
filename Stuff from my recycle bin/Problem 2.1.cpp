#include <iostream>
#include <string>

int main()
{
    string hello;
    cin >> hello;
    cout << hello << "\n";
    std::cin.ignore();
    std::getline(cin, hello);
    cout << hello << "\n";
}