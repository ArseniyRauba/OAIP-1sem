#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "rus");
	double a, b, p, q, r, s;
	cout << "Введите размеры участка: ";
	cin >> a;
	cin >> b;
	cout << "Введите размеры первого дома: ";
	cin >> p;
	cin >> q; 
	cout << "Введите размеры второго дома: ";
	cin >> r;
	cin >> s;
	if (p + r <= a && q + s <= b || p + s <= a && q + r <= b)
		cout << "Можно";
	else
		cout << "Нельзя";
}