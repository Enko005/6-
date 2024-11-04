#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	cout << "Введіть номер космічного тіла x: ";
	cin >> x;
	switch (x)
	{
	case 1: cout << "Внера"; break;
	case 2: cout << "Земля"; break;
	case 3: cout << "Марс"; break;
	case 4: cout << "Нептун"; break;
	case 5: cout << "Місяць"; break;
	case 6: cout << "Плутон"; break;
	case 7: cout << "Юпітер"; break;
	case 8: cout << "Сатурн"; break;
	case 9: cout << "Уран"; break;
	case 10: cout << "Меркурій"; break;
	default: cout << "Не існує"; break;
	}
}

