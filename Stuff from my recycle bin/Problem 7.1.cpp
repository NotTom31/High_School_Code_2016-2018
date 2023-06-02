#include <iostream>
using namespace std;
int main(){
    unsigned int count; //A
    for (count = 1; count <= 5; ++count) { 
        cout << count << " ";
    }
    
    cout << "\n"; //B
    for (count = 1; count <= 10; ++count) {
        if(count != 5) 
            cout << count << " ";
    }
    /*count could be declared inside of the for statement but i guess they wanted 
    to use the value that they counted to later?
    
    the instructions claim that a boolian could be used but im not seeing how 
    thats possible, maybe you could do if (count == 5) bool = false;
    and then youd reset it to true, but that sounds redundant since you already
    have the if. sorry im rambling to myself and you have to read it
    */
}