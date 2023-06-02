#include <iostream>

using std::cout;

int main(){
    unsigned int x = 2;
    for(;;){//is there any downside to using this over while(true)?
    cout << x << ", ";
    x = x * 2;
    
    /*
    if (x > 10000000)
    std::cin >> x; //pausing output to test if it works
    */
    
    //when i run the code it freezes up for a few seconds then gives me a bunch of zeros
    //That might be because of overflow
    }
}