#include <iostream>
#include <cmath>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "RUS");
	float r,p,q,h;
	cout << "Введите радиус шара: ";
	cin >> r;
	cout << "Введите радиус большую диагональ ромба: ";
	cin >> p;
	cout << "Введите радиус меньшую диагональ ромба: ";
	cin >> q;
	h = (p*q)/(sqrt(pow(p/2,2)+pow(q/2,2)));
	if (r <= h) cout << "Шар пройдёт";
	else
		cout << "Шар не пройдёт";
}