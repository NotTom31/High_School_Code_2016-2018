#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;

int main(){
    string whatever;
    cin >> whatever;
    cout << whatever << "\n";
    std::cin.ignore();
    std::getline(cin, whatever);
    cout << whatever << "\n";
}