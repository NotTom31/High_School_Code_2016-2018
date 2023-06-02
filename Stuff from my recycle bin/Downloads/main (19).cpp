#include <iostream>
using namespace std;
int main(){
    //A
    unsigned int total = 0;
    for(double v{2}; v <= 10; v+=2) {
        total += v;
    }
    cout << total << " ";
    //They were incrementing v after changing the value of total when it should have been before
    //they were checking if v did not equal 10 which would be more error prone
    //random semicolon after for
    //reversed the order of +=
    //no real reason that v should be a double
    //total needs to be set to 0 before using it
    //im probably missing errors that i fixed and forgot to note but there is a float
    
    //B
    char letter{'u'};
    const char letterE{'e'};
    switch(letter) {
        default      : cout << "The letter is not a vowel";break;
        case 'a'     : cout << "Letter is an 'a'"; break;
        case letterE :
        case 'i'     :
        case 'o'     : 
        case 'u'     : cout << "Letter is some vowel other than 'a'"; break;
    }
    //letter e needed to be constant 
    //some break statements needed to be added or removed
    //kind of nitpicky but default would be better at the bottom
    //u needed single quotes

}