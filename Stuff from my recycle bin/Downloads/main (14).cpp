#include <iostream>

using std::cout;
using std::cin;

int main(){
    double pi = 3.14159, radius, diameter, circumference, area; 
    cout << "Enter radius of circle: ";
    cin >> radius;
    diameter =  radius * 2;
    cout << "The diameter is: " << diameter << "\n";
    circumference = diameter * pi;
    cout << "The circumference is: " << circumference << "\n"; 
    area = pi * radius * radius;
    cout << "The area is: " << area << "\n"; 
}