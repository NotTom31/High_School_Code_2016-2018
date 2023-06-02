#include <iostream>
using namespace std;

int Swap(int *pNum1, int *pNum2)
{
	int temp;
	cout << "\nIn the Swap function before the swap:\nValue of Num1: " << *pNum1 << " Value of Num2: " << *pNum2 << endl;
	temp = *pNum1;
	*pNum1 = *pNum2;
	*pNum2 = temp;
	cout << "\nIn the Swap function after swap:\nValue of Num1: " << *pNum1 << " Value of Num2: " << *pNum2 << endl;
	cout << "\nThe address of pNum1 is pointing to: " << pNum1 << endl << "The address of pNum2 is pointing to: " << pNum2 << endl << endl << "The address pNum1: " << &pNum1 << endl << "The address pNum2: " << &pNum2 << endl;
	return *pNum1;
	return *pNum2;
}

int main()
{
	int Num1, Num2;
	cout << "Enter two numbers to swap: ";
	cin >> Num1 >> Num2;
	cout << "\nInside of main:\nValue of Num1: " << Num1 << " Value of Num2: " << Num2 << endl << "The address of num1: " << &Num1 << endl << "The address of num2: " << &Num2 << endl;
	Swap(&Num1, &Num2);
	cout << "\nBack in main after function call:\nValue of Num1: " << Num1 << " Value of Num1: " << Num2 << endl << endl << "Success the numbers have been swapped!\n";
	system("pause");
	return 0;
}