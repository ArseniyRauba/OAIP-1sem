#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double y, c, h, m = 6, f = 1.2 * pow(10, 3), s = 5.9;
	for (int n = 1; n <= 3; n++)
	{
		cout << "Введите значение c: " << endl;
		cin >> c;
		y = (s + c) / log(f) / exp(-s);
		cout <<"y= " << y << endl;
		h = (y - m) / log(y);
		cout << "h= " << h << endl;
	}
}