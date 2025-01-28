#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double c,s, y, h, m = 6, f = 1.2 * pow(10, 3);
	for (int n = 1; n < 4; n++)
	{
		cout << "Введите значение s: " << endl;
		cin >> s;
		c = 0.2;
		while (c < 0.5)
		{
			y = (s + c) / log(f) / exp(-s);
			cout << "y= " << y << endl;
			h = (y - m) / log(y);
			cout << "h= " << h << endl;
			c += 0.1;
		}
	}
}