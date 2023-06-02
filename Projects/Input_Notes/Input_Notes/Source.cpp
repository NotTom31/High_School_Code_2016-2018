#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inFile; //input file stream
	ofstream outFile; // output file stream
	int x, y;
	//inFile.open("C:\\Users\\tmezzie23558\\Desktop\\text.txt", ios::in); //in, out, app (append)
	inFile.open("inFile.txt", ios::in);
	//inFile >> x >> y;
	/*
	while (!inFile.eof()) //There is still data in the file that we are reading
	{
		inFile >> x;
		cout << "The contents of the text file are: " << x << endl;
	}
	*/
	while (inFile >> x) //There is still data in the file that we are reading
	{
		//inFile >> x;
		cout << "The contents of the text file are: " << x << endl;
	}

	inFile.close();

	/*
	outFile.open("inFile.txt", ios::out);
	cout << "Enter a value for x: ";
	cin >> x;
	cout << "Enter a value for y: ";
	cin >> y;
	outFile << x << endl << y << endl;
	outFile.close();
	*/
	
	outFile.open("inFile.txt", ios::app);
	cout << "Enter a value for x: ";
	cin >> x;
	cout << "Enter a value for y: ";
	cin >> y;
	outFile << x << endl << y << endl;
	outFile.close();

	system("pause");
	return 0;
}