#include <iostream>

using namespace std;

int main()

{
	int a, maska, n, p, m, q, b, g;
	char tmp[33], arr[33], sqr[33];
	g = (1 << 32) - 1;
	_itoa_s(g, sqr, 2);
	setlocale(LC_CTYPE, "Russian");
	cout << " Введите число A ";
	cin >> a;
	_itoa_s(a, tmp, 2);
	cout << " В двоичной системе " << tmp << endl;
	cout << " Введите позицию ";
	cin >> p;
	cout << " Введите число битов ";
	cin >> n;
	maska = 1 << n;
	maska = maska - 1;
	maska = maska << p;
	a = a ^ maska;
	a = (a & maska) >> p;
	_itoa_s(a, tmp, 2);
	cout << " Инвертированная часть числа " << tmp << endl;
}