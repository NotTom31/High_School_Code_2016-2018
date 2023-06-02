#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int num1 = 5, num2 = 10;
	double num3;

	cout << setprecision(3); //Set ammount of decimal point
	cout << fixed << showpoint;

	cout << "Enter a number: ";
	cin >> num3;
	cout << num3 << endl;

	if (num1 == num2)
		cout << "They are equal\n";
	else if (num1 < num2)
		cout << "The first number is smaller\n";
	else if (num1 < num2)
		cout << "The first number is bigger\n";
	else
		cout << "They are not equal";

	if (5 < 10 && 6 > 3)
		cout << "It was true\n";
	else
		cout << "It was false\n";
	char choice = ' ';
	/*
	3 types of loops
	1. counter
	2. sentinel
	3. flag
	*/
	while (choice != 'q')//this is a sentinel loop
	{
		cout << "enter <y> for yes, <n> for no, or <q> to quit." << endl;
		cin >> choice;
		switch (choice)
		{
		case 'y':
		case 'Y':
			cout << "Yes\n";
			break;
		case 'n':
		case 'N':
			cout << "No\n";
			break;
		case 'q':
		case 'Q':
			cout << "quit\n";
			break;
		default:
			cout << "Sucks for you\n";
		}
	}
	int counter = 0;
	while (counter < 10)// counter controlled loop
	{
		cout << counter << " Loop!\n";
		counter++;
		/*
		counter++;
		counter = counter + 1;
		counter += 1;
		*/
	}
	while (true)//Flag controlled loop
	{
		cout << "In the flag loop\n";
		break;
	}
	cout << "out of the flag loop\n";
	for (int i = 1; i <= 10; i++) //For loops are always counter controlled
	{
		cout << i << endl;
	}



	/*
	Relational operators:
	== != < > >= <=
	Logical Operators:
	and &&, or ||, not !
	*/
	system("Pause");
	return 0;
}