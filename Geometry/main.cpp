#include<iostream>
using namespace std;

using std::cin;
using std::cout;
using std::endl;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define ROMB_AT_HOME
//#define PLUS_MINUS_AT_HOME
//#define PLUS_MINUS_AT_SCHOOL


void main()
{
	setlocale(LC_ALL, "");

	int n;
	cout << "������� ���������� ���������:"; cin >> n;

#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE_1 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2 
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2 

#ifdef TRIANGLE_3 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_3 

#ifdef TRIANGLE_4
	for (int i= 0; i < n; i++)
	{
		for (int j = i; j < n-1; j++)cout << "  ";
		for (int j = 0; j <= i; j++)cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_4

#ifdef ROMB_AT_HOME
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << "  ";
		cout << "/";
		for (int j = 0; j < i; j++)cout << "    ";
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << "  ";
		cout << "\\";
		for (int j = i; j < n - 1; j++)cout << "    ";
		cout << "/";
		cout << endl;
	}
#endif // ROMB_AT_HOME

#ifdef PLUS_MINUS_AT_HOME
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i + j) % 2 == 0)cout << "+ ";
			else cout << "- ";
		}
		cout << endl;
	}
#endif // PLUS_MINUS_AT_HOME

#ifdef PLUS_MINUS_AT_SCHOOL
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i + j) % 2 == 0)cout << "+ "; else cout << "- ";
			//if (i % 2 == j % 2)cout << "+ "; else cout << "- ";
			//(i % 2 == j % 1) ? cout << "+ " : cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif // PLUS_MINUS_AT_SCHOOL


	

}