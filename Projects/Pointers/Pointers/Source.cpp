#include <iostream>
using namespace std;

int AddOne(int &num)
{
	return ++num;
}

int main()
{
	int x;
	cout << "Enter a number: ";
	cin >> x;
	cout << "The value of x: " << x << endl;
	cout << "Adding one to x: " << AddOne(x) << endl;

	cout << "\nThe address of x: " << &x << endl;
	int *pNum = &x; //A pointer is a variable that stores a memory location of another variable
	//The * asterisks is not the multiplication operator the * is the dereferencing operator
	//int ptrNum = &x;
	cout << "pNum: " << pNum << endl;
	cout << "Address of pNum: " << &pNum << endl;
	cout << "The value stored in pNum: " << *pNum << endl;
	x = 14;
	cout << "The value of x: " << x << endl;
	cout << "The value stored in pNum: " << *pNum << endl;
	
	int *pNum1; //A pointer to an integer object
	int *pNum2, *pNum3; //Declaring multiple pointers on one statement.
	int * pNum4; //This is not recommended
	int *pNum5 = &x, *pNum6 = &x; //Assigning multiple poiters with same address.

	int *pDog = 0; //When you declare a pointer and unsure where it needs to point intitialize it with a value of 0.
	int num;
	pNum = &num;
	*pNum = 15;
	cout << "The value of num: " << num << endl;
	cout << "The value of x: " << x << endl;
	cout << "The value stored in pNum5: " << *pNum5 << endl;
	cout << "The value stored in pNum6: " << *pNum6 << endl;

	//Lets take a look at the addresses
	cout << "\nThe address of x: " << &x << endl;
	cout << "The address of pNum5: " << pNum5 << endl;
	cout << "The address of pNum6: " << pNum6 << endl;

	//Pointer arithmetic
	(*pNum)++;
	//*pNum += 1;
	cout << "The value stored in pNum: " << *pNum << endl;
	system("pause");
	return 0;
}