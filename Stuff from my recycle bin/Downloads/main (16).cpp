#include <iostream>
using namespace std;
int main(){
    int n, r;
    cout << "Enter size: ";
    cin >> n;
    cout << "*\n";
    for (r = 2; r <= n; r++){
        cout << "*";
        for (int i = 1; i <= r - 1; i++){
            cout << " ";
        }
        cout << "*\n";
    }
    for (int i = 1; i <= n+2; i++)
        cout << "*";
    
}