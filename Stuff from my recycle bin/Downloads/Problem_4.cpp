#include <iostream>
using namespace std;
int main(){
    for (unsigned int i{1}; i <= 100; i++) { //A
        cout << "Banana";
    }
    
    cout << "\n";
    
    unsigned int i{7}; //B
	while (i <= 77) {
   	 	cout << "Banana";
   	 	i+= 7;
	}
}