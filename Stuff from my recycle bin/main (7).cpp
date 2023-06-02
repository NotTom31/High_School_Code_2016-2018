//Problem #18
#include <iostream>

using std::cin;
using std::cout;

int main(){
    int x, y, z;
    cout << "Enter 3 integers: ";
    cin >> x >> y >> z;
    if (z % x == 0 && z % y == 0)
        cout << x << " and " << y << " are factors of " << z << "\n";
    else 
        cout << x << " and/or " << y << " are not factors of " << z << "\n";
        
}