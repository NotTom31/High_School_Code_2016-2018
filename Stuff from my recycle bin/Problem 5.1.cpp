#include <iostream>
using namespace std;
int main(){
    //A
    for(int i{100}; i >= -20; i -= 5) {
        cout << i << ", ";
    }
    //B
    cout << "\n\n";
    for(int i{1}; i <= 4096; i = i * 2 ) {
        cout << i << ", ";
   	}
   	//C
   	cout << "\n\n";
   	for(int i{44}; i <= 98; i = i += 2 ) {
        cout << i << ", ";
   	}
}