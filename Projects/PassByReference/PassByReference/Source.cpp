#include <iostream>
using namespace std;

//int ReturnValue(int num1) //Pass by value creates a copy of the variable being passed in
int ReturnValue(int &num1) //Pass by reference. Need to use by adress of operator. We are not creating a copy, what we are doing is passing in the address of the variable that is being passed
{
	cout << "In function: " << num1 << endl;
	cout << "Address of num1: " << &num1 << endl;
	num1++;
	cout << "In function after modified: " << num1 << endl;
	return num1;
}

int main()
{
	int num1 = 5;
	cout << "Address of num1: " << &num1 << endl;
	cout << "In main: " << num1 << endl;
	ReturnValue(num1);
	cout << "Back in main: " << num1 << endl;
	system("pause");
	return 0;
}