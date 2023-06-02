#include <iostream>
using namespace std;

/*
void MethodC()
{
	cout << "In Method C";
}
void MethodB()
{
	cout << "In Method B";
	MethodC();
}
void MethodA()
{
	cout << "In Method A";
	MethodB();
}
*/

void MethodA(); //Function prototype
void MethodB();
void MethodC();

int main()
{
	MethodA();
	system("pause");
	return 0;
}

void MethodA()
{
	cout << "In Method A" << endl;
	MethodB();
}

void MethodB()
{
	cout << "In Method B" << endl;
	MethodC();
}

void MethodC()
{
	cout << "In Method C" << endl;
}