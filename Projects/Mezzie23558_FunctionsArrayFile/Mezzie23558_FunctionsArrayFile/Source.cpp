#include <iostream>
#include <cstdlib>
#include <time.h>
#include <fstream>
using namespace std;

void RandomArray(int myArray[], int arraySize);
void PrintArray(int myArray[], int arraySize);
void InitializeManual(int myArray[], int arraySize);
void Duplicate(int myArray[], int arraySize);
void Load(int myArray[], ifstream &cinFile);
void Save(int myArray[]);

int main()
{
	ifstream cinFile;
	ofstream coutFile;
	cinFile.open("textFile.txt", ios::in);

	srand(time(NULL));
	int myArray[10];
	int i = 0;
	int arraySize = 10;
	int x = 0;
	char choice = ' ';
	Load(myArray, cinFile);

	cinFile.close();
	while (choice != 'q')
	{
		cout << "Enter <r> to randomly initialize array:\nEnter <p> to print array:\nEnter <i> to initialize array manually:\nEnter <d> to count the duplicate numbers:\nEnter <s> to save:\nEnter <q> to quit: ";
		cin >> choice;
		switch (choice)
		{
		case 'r':
			cout << endl;
			RandomArray(myArray, arraySize);
			Save(myArray);
			break;
		case 'p':
			cout << endl;
			PrintArray(myArray, arraySize);
			break;
		case 'i':
			cout << "\nEnter a number form 1 to 10!\n";
			InitializeManual(myArray, arraySize);
			break;
		case 'd':
			cout << endl;
			Duplicate(myArray, arraySize);
			break;
		case 's':
			cout << endl;
			Save(myArray);
			break;
		case 'q':
			cout << endl;
			cout << "Goodbye!\n";
			Save(myArray);
			break;
		default:
			cout << "\nInvalid try again!\n\n";
		}
	}
	Save(myArray);
	system("pause");
	return 0;
}

void RandomArray(int myArray[], int arraySize)
{
	int i = 0;
	while (i < arraySize)
	{
		myArray[i] = rand() % 10 + 1;
		i++;
	}
}

void PrintArray(int myArray[], int arraySize)
{
	ofstream coutFile;
	coutFile.open("textFile.txt", ios::out);
	int x = 0, i = 0;
	
	for (int i = 0; i < arraySize; i++)
	{
		cout << "Array " << i << ": " << myArray[i] << endl;
		coutFile << x;
	}
	cout << endl;
}

void InitializeManual(int myArray[], int arraySize)
{
	int i = 0;
	while (i < arraySize)
	{
		cout << "#" << i << ": ";
		cin >> myArray[i];
		if (myArray[i] < 0 || myArray[i] > 10)
		{
			cout << "Invalid!\n";
		}
		else
			i++;
	}
}

void Duplicate(int myArray[], int arraySize)
{
	int num = 0, found = 0;
	cout << "Enter a number to look for duplicates: ";
	cin >> num;
	for (int i = 0; i < arraySize; i++)
	{
		if (myArray[i] == num)
			found++;
	}
	cout << "The number: " << num << " was found: " << found << " times\n\n";
}
void Load(int myArray[], ifstream &cinFile)
{
	for (int i = 0; i < 10; i++)
	{
		cinFile >> myArray[i];
	}
}
void Save(int myArray[])
{
	std::ofstream coutFile;
	coutFile.open("textFile.txt", ios::out);
	for (int i = 0; i < 10; i++)
	{
		coutFile << myArray[i] << endl;
	}
	coutFile.close();
}