//Calc
//Polindrom
#include <iostream>
using namespace std;

//#define CALC_1
//#define CALC_2

void main()
{
	setlocale(LC_ALL, "");
	double a, b; // �����, �������� � ����������
	char s; // s - Sign (���� ��������)
	cout << "������� ���������:"; cin >> a >> s >> b;

#ifdef CALC_1
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << "/" << b << "=" << a / b << endl;
	}
	else
	{
		cout << "Error: no operation" << endl;
	}
#endif // CALC_1

	switch (s)
	{
	case'+':cout << a << "+" << b << "=" << a + b << endl; break;
	case'-':cout << a << "-" << b << "=" << a - b << endl; break;
	case'*':cout << a << "*" << b << "=" << a * b << endl; break;
	case'/':cout << a << "/" << b << "=" << a / b << endl; break;
	default:cout << "Error: No operation" << endl;
	}
	main();
	
}