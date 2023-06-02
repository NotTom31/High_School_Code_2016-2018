#include <iostream>
using namespace std;

class Date
{
private:
	int itsMonth = 8;
	int itsDay = 28;
	int itsYear = 2016;
public:
	Date();
	Date(int thatMonth, int thatDay, int thatYear);
	~Date();
	void DisplayDateVariables();
	void DisplayDateGetters();
	void setMonth(int month);
	void setDay(int day);
	void setYear(int year);
	int getMonth();
	int getDay();
	int getYear();
};
Date::Date()
{
	
}
Date::Date(int thatMonth, int thatDay, int thatYear)
{
	itsMonth = thatMonth;
	itsDay = thatDay;
	itsYear = thatYear;
}
Date::~Date()
{

}
void Date::DisplayDateVariables()
{
	cout << "Displaying the date using class variables: Today is: " << itsMonth << "/" << itsDay << "/" << itsYear << endl;
}
void Date::DisplayDateGetters()
{
	cout << "\nDisplaying the date using the Getter members function:\n";
	cout << "The calls class member functions.\n";
	cout << "Calling member functions from inside class function.\n";
	cout << "Today is: " << getMonth() << "/" << getDay() << "/" << getYear() << endl;
}
void Date::setMonth(int month)
{
	if (month > 0 && month < 12)
	{
		itsMonth = month;
	}
	if (month < 1 || month > 12)
	{
		while (month < 1 || month > 12)
		{
			cout << "\nBad month try again.\nEnter a valid month: ";
			cin >> month;
		}
		itsMonth = month;
	}
}
void Date::setDay(int day)
{
	if (day > 0 && day < 31)
	{
		itsDay = day;
	}
	if (day < 1 || day > 31)
	{
		while (day < 1 || day > 31)
		{
			cout << "\nBad day try again.\nEnter a valid day: ";
			cin >> day;
		}
		itsDay = day;
	}
}
void Date::setYear(int year)
{
	itsYear = year;
}
int Date::getMonth()
{
	return itsMonth;
}
int Date::getDay()
{
	return itsDay;
}
int Date::getYear()
{
	return itsYear;
}
int main()
{
	Date date;
	date.DisplayDateVariables();
	char response = ' ', slash, slash2;
	int day, month, year;
	while (response != 'q')
	{
		cout << "\nEnter\t<d> to enter a date\n\t<f> to display a date with getter functions\n\t<q> to Quit\nInput: ";
		cin >> response;
		switch (response)
		{
		case 'd':
			cout << "\nEnter a date in the form of <month/day/year>: ";
			cin >> month >> slash >> day >> slash >> year;
			date.setMonth(month);
			date.setDay(day);
			date.setYear(year);
			cout << "\nDisplaying the date using the Getter members function: ";
			cout << "Today is: " << date.getMonth() << "/" << date.getDay() << "/" << date.getYear() << endl;
			break;
		case 'f':
			cout << "\nEnter a date in the form of <month/day/year>: ";
			cin >> month >> slash >> day >> slash >> year;
			date.setMonth(month);
			date.setDay(day);
			date.setYear(year);
			date.DisplayDateGetters();
			break;
		case 'q':
			cout << "\nGoodbye!\n";
			break;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}