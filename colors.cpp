#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	cout << "Введіть номер відеогри x: ";
	cin >> x;
	switch (x)
	{
	case 1: cout << "Cyberpunk 2077"; break;
	case 2: cout << "League of Legends"; break;
	case 3: cout << "Valorant"; break;
	case 4: cout << "Minecraft"; break;
	case 5: cout << "Call of Duty: Warzone"; break;
	case 6: cout << "Among Us"; break;
	case 7: cout << "Dota 2"; break;
	case 8: cout << "Brawl Stars"; break;
	case 9: cout << "Undertale"; break;
	case 10: cout << "Tetris (Nintendo)"; break;
	default: cout << "Не існує"; break;
	}
}