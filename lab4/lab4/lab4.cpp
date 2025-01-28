#include <iomanip> 
#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	char c, probel = ' ';
	cout << "Введите символ: "; cin >> c;
	//1 строка
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(6) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(6) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(6) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	//2 строка
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	//3 строка
	cout << setw(5) << setfill(c) << c;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	//4 строка
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	//5 строка
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(6) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(6) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(6) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
}
