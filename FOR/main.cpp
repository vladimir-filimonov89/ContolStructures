#include<iostream>
using namespace std;

using std::cin;
using std::cout;
using std::endl;

//#define THIS_IS_WHILE
//#define THIS_IS_FOR_NOT_ENDED
//#define FACTORIAL
//#define STEPENKA
//#define ASCII
//#define ASCII_2
//#define FIBONACCI
//#define FIBONACCI_2
//#define PREDEL_NUM
//define MULTIPLICATION_TABLE
//#define PIFAGOR_TABLE
//#define SIMPLEX_NUMBERS_TEACHER_VARIANT

void main()
{
	setlocale(LC_ALL, "");


#ifdef THIS_IS_WHILE
	int i = 0; // Это счетчик цикла
	int n; // Это количество итераций (повторений)
	cout << "Введите количество итераций:"; cin >> n;
	while (i < n)
	{
		cout << "Hello\n";
		i++;
	}
#endif // THIS_IS_WHILE


#ifdef THIS_IS_FOR_NOT_ENDED
	int n;
	cout << "Введите количество итераций:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // THIS_IS_FOR_NOT_ENDED


#ifdef FACTORIAL
	int n;
	cout << "Введите число для выведения факториала:"; cin >> n;
	int f=1; //Факториал
	for (int i = 1; i <= n; i++)
	{
		cout << i << "!=";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // FACTORIAL


#ifdef STEPENKA
	double a; //основание степени из формулы, double для вывода числа с точкой
	int n; //показатель степени
	double N = 1; //степень, double для вывода числа с точкой
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	if (n < 0) //для работы с отрицательной степенью   
	{
		a = 1 / a; //а это основание
		n = -n; //отрицательная степень
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // STEPENKA

#ifdef ASCII
	int num = 256;

	for (int i = 0; i < num;)
	{
		cout << (char)i++ << " ";
		if (i % 16 == 0) // 16 это полосы (группы по 16 символов)
			cout << endl;
	}
#endif // ASCII

#ifdef ASCII_2
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
#endif // ASCII_2

#ifdef FIBONACCI
	int n;
	cout << "Введите предельное число:"; cin >> n;
	for (int a = 0, b = 1, c = a + b; a <= n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
				
	}
	cout << endl;
#endif // FIBONACCI

#ifdef FIBONACCI_2
	int n, f, num_1 = 0, num_2 = 1;
	cout << "Ввелите значение, сколько чисел из ряда Фиьоначи вывести:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << num_1 << "\t";
		num_1 += num_2;
		f = num_1;
		num_1 = num_2;
		num_2 = f;
	}
#endif // FIBONACCI_2

#ifdef PREDEL_NUM
	int n, a;
	cout << "Введите предельное число:"; cin >> n;
	for (int i = 2; i <= n; i++)
	{
		a = 0;
		for (int j = 2; j < i / 2; j++)
		{
			if (i % j == 0)
			{
				a++;
				break;
			}
		}
		if (a == 0)
			cout << i << "\t";
	}
#endif // PREDEL_NUM


#ifdef MULTIPLICATION_TABLE
	int multiplier_1;
	int multiplier_2;
	int result;
	cout << "Таблица умножения:" << "\n" << endl;
	for (multiplier_1 = 1; multiplier_1 <= 9; multiplier_1++)
	{
		for (multiplier_2 = 1; multiplier_2 <= 9; multiplier_2++)
		{
			result = multiplier_1 * multiplier_2;
			cout << multiplier_1 << "*" << multiplier_2 << "=" << result << "\t";
		}

	}
#endif // MULTIPLICATION_TABLE

#ifdef PIFAGOR_TABLE
	int multiplier_1;
	int multiplier_2;
	int result;
	int counter;
	cout << "Таблица Пифагора:" << "\n" << endl;
	for (multiplier_1 = 1; multiplier_1 <= 9; multiplier_1++)
	{
		counter = 0;
		for (multiplier_2 = 1; multiplier_2 <= 9; multiplier_2++)
		{
			result = multiplier_1 * multiplier_2;
			counter++;
			if (counter == 9)
			{
				cout << "\t" << result << endl;
			}
			else cout << "\t" << result;

		}

	}
#endif // PIFAGOR_TABLE

#ifdef SIMPLEX_NUMBERS_TEACHER_VARIANT
	int n;
	cout << "Введите предельное число:"; cin >> n;
	int simplex_counter = 0;
	for (int i = 0; i <= n; i++)
	{
		bool simple = true; // Предположим, что число простое, но это нужно проверить: 
		//На само себя и на 1, дел-ся все числа. Но не все на 2,3,5,7...Нужно поделить число на все числа, от 2,3,5,7...до этого числа.
		//Если оно ни на что не поделится, то оно простое. -> добавляем цикл for
		for (int j = 2; j < i/2; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break; //Ключевое слово Break - прерывет текущую итерацию и все последующие.
				//Прерываем работу цикла.
			}
		}
		if (simple)simplex_counter++;
			//cout << (simplex_counter++, i) << "\t";
	}
	cout << endl;
	cout << "Amount of simplex numbers:" << simplex_counter << endl;
#endif // SIMPLEX_NUMBERS_TEACHER_VARIANT


	   
}
