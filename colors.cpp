#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	cout << "Введіть номер кольору x: ";
	cin >> x;
	switch (x)
	{
	case 1: cout << "Синій"; break;
	case 2: cout << "Червоний"; break;
	case 3: cout << "Зелений"; break;
	case 4: cout << "Чорний"; break;
	case 5: cout << "Жовтий"; break;
	case 6: cout << "Помаранчевий"; break;
	case 7: cout << "Білий"; break;
	case 8: cout << "Рожевий"; break;
	case 9: cout << "Коричневий"; break;
	case 10: cout << "Фіолетовий"; break;
	case 11: cout << "Темно-синій"; break;
	case 12: cout << "Золотистий"; break;
	case 13: cout << "Сірий"; break;
	case 14: cout << "Голубий"; break;
	case 15: cout << "Гірчичний"; break;
	default: cout << "Не існує"; break;
	}
}

