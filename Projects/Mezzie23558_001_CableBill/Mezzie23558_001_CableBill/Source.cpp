#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char choice = ' ', type = ' ';
	int accnum = 0, channel = 0, connection = 0, over = 0;
	float processing = 0, basic = 0, premium = 0, due = 0;
	cout << setprecision(2);
	cout << fixed << showpoint;
	while (choice != 'q' && choice != 'Q')
	{
		cout << "Cable Bill:\nEnter <c> or <C> to compute bill or <q> or <Q> to Quit: ";
		cin >> choice;
		switch (choice)
		{
		case 'c':
		case 'C':
			cout << "\nEnter account number: ";
			cin >> accnum;
			break;
		case 'q':
		case 'Q':
			cout << "Goodbye!\n";
			break;
		default:
			cout << "Invalid input\n\n";
			break;
		}
		if (choice == 'c' || choice == 'C')
		{
			while (type != 'r' && type != 'R' && type != 'b' && type != 'B')
			{
				cout << "Enter customer type: R or r (residential), B or b (Business): ";
				cin >> type;
				switch (type)
				{
				case 'r':
				case 'R':
					processing = 4.50; basic = 20.50; premium = 7.50;
					cout << "Enter number of premium channels: ";
					cin >> channel;
					due = processing + basic + (premium * channel);
					cout << endl << "Account number: " << accnum << endl;
					cout << "Ammount due: $" << due << "\n\n";
					break;
				case 'b':
				case 'B':
					processing = 15.00; basic = 75.00; premium = 50.00;
					cout << "Enter the number of basic service connections: ";
					cin >> connection;
					cout << "Enter number of premium channels: ";
					cin >> channel;
					if (connection < 10)
					{
						due = processing + basic + (premium * channel);
						cout << endl << "Account number: " << accnum << endl;
						cout << "Ammount due: $" << due << "\n\n";
					}
					else
					{
						over = connection - 10;
						due = processing + basic + (over * 5) + (premium * channel);
						cout << endl << "Account number: " << accnum << endl;
						cout << "Ammount due: $" << due << "\n\n";
					}
					break;

				default:
					cout << "Invalid input\n\n";
					break;
				}
				
			}
			type = ' ';
		}
	}
	system("pause");
	return 0;
}