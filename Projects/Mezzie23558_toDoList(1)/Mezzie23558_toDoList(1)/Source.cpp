#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int Menu(int &menu);
void DisplayList();
void AddToList();
void DeleteContents();

int main()
{
	int menu = ' ';
	while (menu != 0) {
		Menu(menu);
		switch (menu) {
		case 0:
			cout << "\nGoodbye!\n\n";
			break;
		case 1:
			DisplayList();
			break;
		case 2:
			AddToList();
			break;
		case 3:
			DeleteContents();
			break;
		default:
			cout << "\nInvalid choice try again!\n\n";
			break;
		}
	}
	system("pause");
	return 0;
}

int Menu(int &menu)
{
	cout << "Enter <0> to Quit:\nEnter <1> to view List :\nEnter <2> to add item to list :\nEnter <3> to delete the items on the Todo List :\n\nEnter a choice: ";
	cin >> menu;
	return menu;
}

void DisplayList()
{
	ifstream File; string x;
	File.open("ToDo.txt");
	cout << "\nHere are the contents of your Todo List:\n";
	while (File >> x)
	{
		cout << x;
	}
	File.close();
	cout << "\n";
}

void AddToList()
{
	ofstream File;
	string append;
	File.open("ToDo.txt", ios::app);
	cout << "Enter message: ";
	getline(cin, append);
	File << append << endl;
	cin.ignore(100, '/n');
	File.close();
}

void DeleteContents()
{
	char del;
	cout << "\nWarning!You are about to delete the contents of your Todo List!\nEnter <y> to delete or <n> to go back to menu : ";
	cin >> del;
	if (del == 'y')
	{
		ofstream File;
		File.open("ToDo.txt");
		File.close();
		cout << "\nAsta La Vista Baby! The contents of your Todo List are Gone Like the Wind!\n";
	}
	else if (del == 'n')
	{
		cout << "What are you, Chicken?";
	}
}