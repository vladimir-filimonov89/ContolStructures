//ControlStructures
#include<iostream>
#include<conio.h>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define Escape 27
#define Enter 13
#define UpArrow 72
#define DownArrow 80
#define LeftArrow 75
#define RightArrow 77

//#define SHOOTER_1
#define SHOOTER_2

void main()
{
	setlocale(LC_ALL, "");

#ifdef SHOOTER_1
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W' || key == UpArrow)cout << "������" << endl;
		else if (key == 's' || key == 'S' || key == DownArrow)cout << "�����" << endl;
		else if (key == 'a' || key == 'A' || key == LeftArrow)cout << "�����" << endl;
		else if (key == 'd' || key == 'D' || key == RightArrow)cout << "������" << endl;
		else if (key == ' ')cout << "������" << endl;
		else if (key == 13)cout << "�����" << endl;
		else if (key == 27)cout << "�����" << endl;
		else if (key != -32) cout << "Error" << endl;
	} while (key != Escape);
#endif // SHOOTER_1

	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case 'w':
		case 'W':
		case UpArrow:cout << "������" << endl; break;
		case 's':
		case 'S':
		case DownArrow:cout << "�����" << endl; break;
		case 'a':
		case 'A':
		case LeftArrow:cout << "�����" << endl; break;
		case 'd':
		case 'D':
		case RightArrow:cout << "������" << endl; break;
		case ' ':cout << "������" << endl; break;
		case Enter:cout << "�����" << endl; break;
		case Escape: cout << "�����" << endl;
		case -32: break;
		default: cout << "Error" << endl;
		}
	} while (key != Escape);


}