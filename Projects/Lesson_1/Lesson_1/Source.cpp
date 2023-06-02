#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int SumOfTwoNumbers(int num1, int num2);//function prototype. This function returns an integer
void DisplayMessage();

void DisplayArray(int myArray[], int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << myArray[i] << endl;
	}
}
int main()
{
	int randomNumber;
	srand(time(NULL));
	cout << "Maximum random number: " << RAND_MAX << endl;
	cout << "A random number between 0 and 5: " << rand() % 6 << endl;//between 0 and 5
	for (int i = 0; i < 20; i++)
	{
		cout << "A random number between 10 and 15: " << rand() % 6 + 10 << endl; //between 10 and 15
	}
	randomNumber = rand() % 10 + 6;
	cout << randomNumber << endl;
	int sum, num1, num2;
	cout << "Enter first: ";
	cin >> num1;
	cout << "Enter second: ";
	cin >> num2;
	sum = SumOfTwoNumbers(5, 6);
	cout << "The sum is: " << sum << endl;
	DisplayMessage();
	
	const int arraySize = 10;
	int myArray[arraySize];
	int myArray[10];
	/*
	for (int i = 0; i < 10; i++)
	{
		myArray[i] = rand();
	}
	*/
	for (int i = 0; i < 10; i++)
	{
		cout << myArray[i] << endl;
	}
	DisplayArray(myArray, arraySize);
	system("pause");

	return 0;
}

int SumOfTwoNumbers(int num1, int num2)
{
	/*
	int sum;
	sum = num1 + num2;
	return sum;
	*/
	return num1 + num2;
}

void DisplayMessage() { //Void cant return value
	cout << "Void function!" << endl;
}