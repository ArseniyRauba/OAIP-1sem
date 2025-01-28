#include <iomanip> 
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	double a, b, c;
	cout << "Введите число a: ";
	cin >> a;
	c = (a - 5) / 2;
	b = c + 5;
	cout << "Первая часть: " << c <<endl;
	cout << "Вторая часть: " << b;
}