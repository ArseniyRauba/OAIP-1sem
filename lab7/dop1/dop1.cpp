#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int sosud1, sosud2, half1, half2;
	cout << "Введите объём воды первого сосуда: ";
	cin >> sosud1;
	cout << "Введите объём воды второго сосуда: ";
	cin >> sosud2;
	for(int i=1; i<= 12;i++)
	{
		half1 = sosud1 * 0.5;
		sosud1 = sosud1 - half1;
		sosud2 = sosud2 + half1;
		half2 = sosud2 * 0.5;
		sosud2 = sosud2 - half2;
		sosud1 = sosud1 + half2;
	}
	cout << "Конечный объём воды первого сосуда: " << sosud1 << endl;
	cout << "Конечный объём воды второго сосуда: " << sosud2 << endl;
}