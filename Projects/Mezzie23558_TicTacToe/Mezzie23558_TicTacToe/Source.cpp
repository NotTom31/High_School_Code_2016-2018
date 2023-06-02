#include <iostream>
using namespace std;

void Display(char num2d[6][6]);
void Players(char num2d[6][6], bool &player, int &game);
void Check(char num2d[6][6], bool &win);

int main()
{
	bool player = false;
	bool win = false;
	int game = 0;
	char num2d[6][6] = { { ' ','1',' ','2',' ','3' },
	{ '1',' ',179,' ',179,' ' },
	{ ' ',196,197,196,197,196 },
	{ '2',' ',179,' ',179,' ' },
	{ ' ',196,197,196,197,196 },
	{ '3',' ',179,' ',179,' ' } };
	while (game < 9 || win != true)
	{
		if (game % 2 == 0)
			player = false;
		else if (game % 2 == 1)
			player = true;
		Players(num2d, player, game);
		Display(num2d);
		Check(num2d, win);
		if (win == true)
			break;
		if (game == 9)
		{
			cout << "Tie game!\n";
			break;
		}
	}
	system("pause");
	return 0;
}

void Display(char num2d[6][6])
{
	for (int row = 0; row < 6; row++)
	{
		for (int col = 0; col < 6; col++)
		{
			cout << num2d[row][col];
		}
		cout << endl;
	}
}

void Players(char num2d[6][6], bool &player, int &game)
{
	int x = 0, y = 0;
	if (player == 0)
	{
		cout << "Player <x> enter your move: ";
		cin >> x >> y;
		if (x > 3 || y > 3 || x < 1 || y < 1)
		{
			cout << "Invalid input\n";
		}
		else
		{
			x = (x * 2) - 1;
			y = (y * 2) - 1;
			num2d[x][y] = 'x';
			game++;
		}
	}
	else if (player == 1)
	{
		cout << "Player <o> enter your move: ";
		cin >> x >> y;
		if (x > 3 || y > 3 || x < 1 || y < 1)
		{
			cout << "Invalid input\n";
		}
		else
		{
			x = (x * 2) - 1;
			y = (y * 2) - 1;
			num2d[x][y] = 'o';
			game++;
		}
	}
}

void Check(char num2d[6][6], bool &win)
{
	if ((num2d[1][1] == 'x' && num2d[1][3] == 'x' && num2d[1][5] == 'x') || (num2d[3][1] == 'x' && num2d[3][3] == 'x' && num2d[3][5] == 'x') || (num2d[5][1] == 'x' && num2d[5][3] == 'x' && num2d[5][5] == 'x'))
	{
		cout << "\nPlayer <x> wins!\n";
		win = true;
	}
	else if ((num2d[1][1] == 'x' && num2d[3][1] == 'x' && num2d[5][1] == 'x') || (num2d[1][3] == 'x' && num2d[3][3] == 'x' && num2d[5][3] == 'x') || (num2d[1][5] == 'x' && num2d[5][3] == 'x' && num2d[5][5] == 'x'))
	{
		cout << "\nPlayer <x> wins!\n";
		win = true;
	}
	else if ((num2d[1][1] == 'x' && num2d[3][3] == 'x' && num2d[5][5] == 'x') || (num2d[5][1] == 'x' && num2d[3][3] == 'x' && num2d[1][5] == 'x'))
	{
		cout << "\nPlayer <x> wins!\n";
		win = true;
	}
	if ((num2d[1][1] == 'o' && num2d[1][3] == 'o' && num2d[1][5] == 'o') || (num2d[3][1] == 'o' && num2d[3][3] == 'o' && num2d[3][5] == 'o') || (num2d[5][1] == 'o' && num2d[5][3] == 'o' && num2d[5][5] == 'o'))
	{
		cout << "\nPlayer <o> wins!\n";
		win = true;
	}
	else if ((num2d[1][1] == 'o' && num2d[3][1] == 'o' && num2d[5][1] == 'o') || (num2d[1][3] == 'o' && num2d[3][3] == 'o' && num2d[5][3] == 'o') || (num2d[1][5] == 'o' && num2d[5][3] == 'o' && num2d[5][5] == 'o'))
	{
		cout << "\nPlayer <o> wins!\n";
		win = true;
	}
	else if ((num2d[1][1] == 'o' && num2d[3][3] == 'o' && num2d[5][5] == 'o') || (num2d[5][1] == 'o' && num2d[3][3] == 'o' && num2d[1][5] == 'o'))
	{
		cout << "\nPlayer <o> wins!\n";
		win = true;
	}
}