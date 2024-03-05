//PascalTriangle
#include<iostream>
using namespace std;

using std::cin;
using std::cout;
using std::endl;

const int width = 8;

void main()
{
	setlocale(LC_ALL, "");
	int h;
	cout << "Введите высоту треугольника: "; cin >> h; //Вычисление биномиального коофициента
	for (int i = 0; i < h; i++)
	{
		cout.width(width/2);
		cout << "";
	}
	cout << left;
	cout << 1 << endl;
	int nf = 1; // факториал n;
	for (int n = 1; n <= h; n++)
	{
		nf *= n;
		int mf = 1; // факториал m;
		for (int i = 0; i < h - n; i++)
		{
			cout.width(width / 2);
			cout << "";
		}
		cout.width(width);
		cout << 1;
		for (int m = 1; m <= n; m++)
		{
			mf *= m;
			int nmf = 1;
			for (int nm = 1; nm <= n - m; nm++)nmf *= nm;
			cout.width(width);
			cout << nf / mf / nmf;
		}
		cout << endl;
	}




}