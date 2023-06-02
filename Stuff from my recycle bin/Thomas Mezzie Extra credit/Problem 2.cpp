#include <iostream>
using std::cout;
using std::cin;

int main()
{
  cout << "Integer\tSquare\tcube\n";
  for (int i = 0; i <= 10; i++)
  {
    cout << i << "\t" << i * i << "\t" << i * i * i << "\n";
  }
}