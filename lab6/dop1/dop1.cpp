#include <iostream>
using namespace std;
int main()
{
	double firstprice, lastprice, i;
	setlocale(LC_ALL, "rus");
	cout << "Введите начальную цену: ";
	cin >> firstprice;
	cout << "Введите конечную цену: ";
	cin >> lastprice;
	i = 0;
	while(firstprice < lastprice)
	{
		firstprice = firstprice + firstprice * 0.03;
		i = i + 1;
	}
	cout << "Конечная цена: " << firstprice << endl;
	cout << "Количество дней: " << i << endl;
}
