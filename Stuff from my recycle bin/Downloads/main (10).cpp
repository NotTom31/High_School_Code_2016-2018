#include <iostream>

using std::cout;
using std::cin;

int main(){
    int accNum = 0;
    double startBal, totCharge, totCredit, limCredit, newBal;
    while (accNum != -1)
    {
        cout << "Enter account number (or -1 to quit): ";
        cin >> accNum;
        if (accNum != -1)
        {
           cout << "Enter beginning balance: ";
           cin >> startBal;
           cout << "Enter total charges: ";
           cin >> totCharge;
           cout << "Enter total credits: ";
           cin >> totCredit;
           cout << "Enter credit limit: ";
           cin >> limCredit;
           
           newBal = startBal + totCharge - totCredit;
           
           cout << "New balance is " << newBal << "\n";
           cout << "Account: " << accNum << "\n";
           cout << "Credit limit: " << limCredit << "\n";
           cout << "Balance: " << newBal << "\n";
           if (newBal > limCredit){
               cout << "Credit Limit Exceeded.";
           }
           cout << "\n\n";
        }
    }
}