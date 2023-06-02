#include <iostream>

using std::cout;

int main(){
    int row = 0, column = 0;
    while (row < 8)
    {
        if (row % 2 != 0)
            cout << " ";
        while (column < 8)
        {
            cout << "* ";
            column++;
        }
        column = 0;
        cout << "\n";
        row++;
    }
}