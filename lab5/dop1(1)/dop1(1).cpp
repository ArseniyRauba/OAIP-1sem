#include <iostream>
#include <cmath>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "RUS");
	int a, b, c, d;
	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите c: ";
	cin >> c;
	a % 5 == 0 ? a = a : a = 0;
	b % 5 == 0 ? b = b : b = 0;
	c % 5 == 0 ? c = c : c = 0;
	d = a + b + c;
	d == 0 ? cout << "error":cout << "Сумма чисел, кратным 5: " << d;
}