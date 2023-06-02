#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void GradeTests(string &answerKey, ifstream &cinFile);

int main()
{
	ifstream cinFile;
	cinFile.open("CG1_Test.txt", ios::in);
	string key;
	cout << "Test Grader:\nEnter the answer key: ";
	cin >> key;
	GradeTests(key);
	system("pause");
	return 0;
}

void GradeTests(string &answerKey, ifstream &cinFile)
{
	int x;
	char y = '';
	for (int i = 0; i < 10; i++)
	{
		cinFile >> x >> y;
	}
}
