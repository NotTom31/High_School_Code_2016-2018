#include <iostream>
#include <string>
using namespace std;

class userDefinedType
{
private:
	string itsName;
	int itsId;
	int itsGrade;
public:
	void SetName(string name);
	const string GetName();
	void SetId(int id);
	const int GetId();
	void SetGrade(int gradeLvl);
	const int GetGrade();
};

void userDefinedType::SetName(string name)
{
	itsName = name;
}

const string userDefinedType::GetName()
{
	return itsName;
}

void userDefinedType::SetId(int id)
{
	itsId = id;
}

const int userDefinedType::GetId()
{
	return itsId;
}

void userDefinedType::SetGrade(int gradeLvl)
{
	itsGrade = gradeLvl;
}

const int userDefinedType::GetGrade()
{
	return itsGrade;
}

int main()
{
	string name;
	int id, gradeLvl;
	userDefinedType User;
	cout << "Enter your name: ";
	getline(cin, name);
	User.SetName(name);
	cout << "Enter your student id: ";
	cin >> id;
	User.SetId(id);
	cout << "Enter your Grade Level: ";
	cin >> gradeLvl;
	User.SetGrade(gradeLvl);
	cout << "\nYour name is: " << User.GetName() << endl;
	cout << "Your student id is: " << User.GetId() << endl;
	cout << "Your Grade Level is: " << User.GetGrade() << endl;
	system("pause");
	return 0;
}