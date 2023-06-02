#include <iostream>
using namespace std;

int main()
{
	int myArray[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int counter = 0;
	int *p;
	p = myArray;
	while ((sizeof(myArray) / sizeof(int) > counter))
	{
		cout << "myArray " << counter << ": " << *(p + counter) << endl;
		counter++;
	}
	system("pause");
	return 0;
}