#include <iostream>

using std::cout;
using std::cin;

int main(){
    double a, b, c, d;
    cout << "Enter leg 1: ";
    cin >> a;
    cout << "Enter leg 2: ";
    cin >> b;
    cout << "Enter hypotenuse: ";
    cin >> c;
    
    a = a * a; //square the values
    b = b * b;
    c = c * c;
    
    d = a + b;
    
    
    if (c == d)
        cout << "Forms a right triangle\n";
    else
        cout << "Does not form a right triangle\n";
    
}