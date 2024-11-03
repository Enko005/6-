#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	cout << "Введіть номер фрукту x: ";
	cin >> x;
	switch (x)
	{
	case 1: cout << "гранат"; break;
	case 2: cout << "кумкват"; break;
	case 3: cout << "яблоко"; break;
	case 4: cout << "лимон"; break;
	case 5: cout << "слива"; break;
	case 6: cout << "абрикос"; break;
	case 7: cout << "авокадо"; break;
	case 8: cout << "гуава"; break;
	case 9: cout << "бергамот"; break;
	case 10: cout << "ківі"; break;
	default: cout << "Не існує"; break;
	}
}

ц