#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "RUS");
	int a, b;
	cout << "Введите a ";
	cin >> a;
	cout << "Введите b ";
	cin >> b;
	cout << "a/b= " << a << "/" << b << endl;
	if (a < b)
		cout << "Дробь a/b - правильная";
	else if (a == b)
		cout << "1";
	else
		cout << "Дробь a/b - неправильная";
}