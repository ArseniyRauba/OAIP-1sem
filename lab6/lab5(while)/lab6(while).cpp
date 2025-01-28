#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double y, h, m = 6, f = 1.2 * pow(10, 3), s = 5.9, c=0;
	while (c < 1)
	{
		y = (s + c) / log(f) / exp(-s);
		cout << "y=" << y << endl;
		h = (y - m) / log(y);
		cout << "h=" << h << endl;
		c = c + 0.1;
	} 
}