#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream cinFile;	//Whatever you call the ifstream object, the object cinFile is basically the typical cin statement you have been using so far.
	ofstream coutFile;	//Whatever you call the ofstream object, the object coutFile is basically the typical cout statement you have been using so far.
	cinFile.open("textInput.txt");
	coutFile.open("textOutput.txt", ios::app);
	int x, y;
	cin >> x >> y;
	cout << "X: " << x << " y: " << y << endl;
	
	cinFile >> x >> y;
	coutFile << "X: " << x << " y: " << y << endl;

	system("pause");
	return 0;
}