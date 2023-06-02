#include <iostream>
using namespace std;

void swapFunction(int &num1, int &num2);

int main()
{
	int num1, num2;
	cout << "Enter 2 two numbers to swap: ";
	cin >> num1 >> num2;
	cout << "\nInside of main:\nValue of Num1: " << num1 << ", Value of Num2: " << num2 << endl;
	swapFunction(num1, num2);
	cout << "\nInside of main after function call:\nValue of Num1: " << num1 << ", Value of Num2: " << num2 << "\n\n";
	cout << "Success the numbers have been swapped!\n";
	system("pause");
	return 0;
}

void swapFunction(int &num1, int &num2)
{
	int temp = 0;
	cout << "\nIn the swap function before the swap:\nValue of Num1: " << num1 << ", Value of Num2: " << num2 << endl;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "\nIn the swap function after the swap:\nValue of Num1: " << num1 << ", Value of Num2: " << num2 << endl;
}