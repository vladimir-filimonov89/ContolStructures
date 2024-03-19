#include<iostream>
using namespace std;

using std::cin;
using std::cout;
using std::endl;

//#define HARD_CHESS2_ver1
//#define HARD_CHESS2_ver2
//#define HARD_CHESS2_ver3
#define HARD_CHESS2_ver4

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер доски: "; cin >> n;
#ifdef HARD_CHESS2_ver1
	for (int i = 0; i < n*n; i++)
	{
		for (int j = 0; j < n*n; j++)
		{
			cout << (i / n % 2 == j / n % 2 ? "* " : "  ");
			//cout << (i / n % 2 == j / n % 2 ? "* " : "  ");
		}
		cout << endl;
	}
#endif // HARD_CHESS2_ver1
#ifdef HARD_CHESS2_ver2
	for (int i = 0; i < n*n; i++)
	{
		for (int j = 0; j < n*n; j++)
		{
			cout << ((i / n & 1) == (j / n & 1) ? "* " : "  ");
			//cout << (i / n % 2 == j / n % 2 ? "* " : "  ");
		}
		cout << endl;
	}
#endif // HARD_CHESS2_ver2
#ifdef HARD_CHESS2_ver3
	for (int i = 0; i < n*n; i++)
	{
		for (int j = 0; j < n*n; j++)
		{
			cout << (i / n & 1 ^ j / n & 1 ? "  " : "* ");
			//cout << (i / n % 2 == j / n % 2 ? "* " : "  ");
		}
		cout << endl;
	}
#endif // HARD_CHESS2_ver3
	for (int i = 0; i < n*n; i++)
	{
		for (int j = 0; j < n*n; j++)
		{
			cout << (i / n & 1 ^ j / n & 1 ? "  " : "* ");
			//cout << (i / n % 2 == j / n % 2 ? "* " : "  ");
		}
		cout << endl;
	}

}