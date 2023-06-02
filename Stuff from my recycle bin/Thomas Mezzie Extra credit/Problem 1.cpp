/*
Title:          Decision Making
Author:         Thomas Mezzie
Description:    A program serving as an exercise for relational operators
                and decision making.
*/
#include <iostream>

using std::cin;
using std::cout;

int main() {
    
    int x = 0, five = 0, four = 0, three = 0, two = 0, one = 0;
    cout << "Enter a 5 digit value: ";
    cin >> x;
    
    if (x < 9999 || x > 100000)
        cout << "Value is not 5 digits";
        
    else
        {
            five = x / 10000;
            four = ((x - five * 10000) / 1000);
            three = (x - five * 10000 - four * 1000) / 100;
            two = (x - five * 10000 - four * 1000 - three * 100) / 10;
            one = (x - five * 10000 - four * 1000 - three * 100 - two * 10);
        }
    cout << five << " " << four << " " << three << " " << two << " " << one << " ";
}