#include <iomanip> 
#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	char c, probel = ' ';
	cout << "Введите символ: "; cin >> c;
	//1
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;
	//2
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;
	//3
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;
	//4
	cout << setw(8) << setfill(c) << c << endl;
	//5
	cout << setw(8) << setfill(c) << c << endl;
	//6
	cout << setw(8) << setfill(c) << c << endl;
	//7
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;
	//8
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;
	//9
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;
}