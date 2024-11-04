#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	cout << "Введіть номер космічнoго тіла x: ";
	cin >> x;
	switch (x)
	{
	case 1: cout << "Меркурій"; break;
	case 2: cout << "Земля"; break;
	case 3: cout << "Венера"; break;
	case 4: cout << "Марс"; break;
	case 5: cout << "Юпітер"; break;
	case 6: cout << "Сатурн"; break;
	case 7: cout << "Уран"; break;
	case 8: cout << "Нептун"; break;
	case 9: cout << "Місяць"; break;
	case 10: cout << "Плутон"; break;
	default: cout << "Не існує"; break;
	}
}