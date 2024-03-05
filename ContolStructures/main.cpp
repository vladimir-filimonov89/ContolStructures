//ControlStructures
#include<iostream>
#include<conio.h>

using namespace std;
using std::cin;
using std::cout;
using std::endl;


//#define IF_ELSE
//#define WHILE_1
//#define WHILE_2

void main()
{
	setlocale (LC_ALL, "");

#ifdef IF_ELSE
	int temperature;
	cout << "Введите температуру воздуха:"; cin >> temperature;
	if (temperature > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else
	{
		cout << "На улице холодно" << endl;
	}
#endif // IF_ELSE

#ifdef WHILE_1
	int i = 0;// счетчик цикла (loop counter)
	int n; // количество итераций (number of iterations)
	cout << "Введите количество итераций:"; cin >> n;

	while (++i < n)
	{
		cout << i << "Hello World\n";
		//i++;
	}
#endif // WHILE_1

#ifdef WHILE_2
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	while (n--)
	{
		cout << n << "Hello World" << endl;
	}
	cout << n << endl;
#endif // WHILE_2

	char key;
	do
	{
		key = _getch(); //Функция _getch ожидает нажатие клавиши, и возвращает ASCII-код нажатой клавиши
		//этот ASCII-код мы присваиваем переменной Key
		//Функия _getch() объявлена в билиотеке <conio.h>
		cout << (int)key << "\t" << key << endl;
		//(int)key - это явное преобразование типа Char в  Int, для того чтобы видеть ASCII-код символа
	} while (true);

}