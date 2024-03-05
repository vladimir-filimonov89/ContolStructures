//ControlStructures
#include<iostream>
#include<conio.h>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define SHOOT_WHILE
//#define SHOOT_SWITCH

void main()
{
	setlocale(LC_ALL, "");
	char key;



#ifdef SHOOT_WHILE
	do
	{
		key = _getch();
		if (key == 119)
		{
			cout << "w" << "-" << "move_forward" << endl;
		}
		else if (key == 115)
		{
			cout << "s" << "-" << "move_back" << endl;
		}
		else if (key == 97)
		{
			cout << "a" << "-" << "move_left" << endl;
		}
		else if (key == 100)
		{
			cout << "d" << "-" << "move_right" << endl;
		}
		else if (key == 32)
		{
			cout << "space" << "-" << "move_jump" << endl;
		}
		else if (key == 13)
		{
			cout << "enter" << "-" << "fire" << endl;
		}
		else if (key == 27)
		{
			cout << "esc" << "-" << "exit_on_game" << endl;
		}
		else
		{
			cout << "ERROR" << endl;
		}
	} while (key != 27);
#endif // SHOOT_WHILE

#ifdef SHOOT_SWITCH
	while (true)
	{
		key = _getch();
		switch (key)
		{
		case(119): cout << "w" << "-" << "move_forward" << endl; break;
		case(115): cout << "s" << "-" << "move_back" << endl; break;
		case(97): cout << "a" << "-" << "move_left" << endl; break;
		case(100):cout << "d" << "-" << "move_right" << endl; break;
		case(32): cout << "space" << "_" << "move_jump" << endl; break;
		case(13): cout << "enter" << "-" << "fire" << endl; break;
		case(27): cout << "esc" << "-" << "exit_on_game" << endl; break;
		default: cout << "ERROR" << endl;
		}

	}
#endif // SHOOT_SWITCH


}