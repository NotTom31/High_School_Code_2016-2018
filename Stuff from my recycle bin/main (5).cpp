//Problem #18
#include <iostream>

using std::cin;
using std::cout;

int main(){
    int x, y;
    cout << "Enter 2 integers: ";
    cin >> x >> y;
    if (x < y)
        cout << "\n" << x << " is smaller\n";
    else if (x > y)
        cout << "\n" << y << " is smaller\n";
    else
        cout << "\n" << x << " and " << y << " are equal.\n";
        
}