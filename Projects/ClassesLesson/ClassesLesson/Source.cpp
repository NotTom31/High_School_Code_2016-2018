#include <iostream>
#include <string>
using namespace std;
/*
class userDefinedType //class definition
{
private: /class members, can only be accessed through the public member function
	int someInteger;
	double PI;
	//all variable go here
public:
	void InitializeSomeVariable(int someInt);
	//all function prototype go here.
}; // dont forget simicolon

void userDefinedType::InitializeSomeVariable(int someInt) //the scope resolution operator :: identifies which class the member function belongs to.
{
	someInteger = someInt;
}
*/

class Dog
{
private:
	int itsAge;
	string itsName;
public:
	Dog();
	~Dog();
	Dog(string name, int age);
	void SetAge(int age);
	void SetName(string name);
	const int GetAge();
	const string GetName();
	void Bark();
};

Dog::Dog()
{
	cout << itsName << " was just born." << endl;
}

Dog::Dog(string name, int age)
{
	itsName = name;
	itsAge = age;
	cout << itsName << " was just born." << endl;
}

Dog::~Dog()
{
	cout << itsName << " was just killed" << endl;
}

void Dog::SetName(string name)
{
	itsName = name;
}

const string Dog::GetName()
{
	Bark();
	return itsName;
}

void Dog::SetAge(int age)
{
	itsAge = age;
}

const int Dog::GetAge()
{
	return itsAge;
}

void Dog::Bark()
{
	cout << "Burk Bark Bork!" << endl;
}

int main()
{
	int num1 = 10;
	int age;
	Dog snoopy;

	Dog snoopDog("Snoop Dog", 40);
	
	cout << "Enter Snoopy's age: ";
	cin >> age;
	snoopy.SetAge(age);
	cout << "Snoopy is: " << snoopy.GetAge() << " years old." << endl;
	/*
	cout << "Enter Snoop Dogs's age: ";
	cin >> age;
	snoopDog.SetAge(age);
	*/
	cout << "Snoop Dogs's name is: " << snoopDog.GetName() << endl;
	cout << "Snoop Bark: ";
	
	snoopDog.Bark();
	system("pause");
	return 0;
}