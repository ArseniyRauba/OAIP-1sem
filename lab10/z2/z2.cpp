#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	const int N = 100;
	int i, sz, A[N], B[N], max, counter,tmp;
	cout << "размер массивов: ";
	cin >> sz;
	cout << "1 массив равен: ";
	srand((unsigned)time(NULL));

	for (i = 0; i < sz; i++)
	{
		A[i] = rand() % 100;
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "2 массив равен: ";

	for (i = 0; i < sz; i++)
	{
		B[i] = rand() % 100;
		cout << B[i] << " ";
	}
	cout << endl;
	max = A[i];
	for (int j = 0; j < sz-1; j++) 
	{
		counter = 0;
		for (i = 0; i < sz; i++)
		{
			if (A[i + 1] > max)
			{
				max = A[i + 1];
				tmp = i + 1;
			}
		}
		for (i = 0; i < sz; i++)
		{
			if (B[i] == max)
			{
				counter += 1;
			}
		}
		if (counter == 0)
		{
			cout << "Наибольшее число: " << max << endl;
			max = 0;
			A[tmp] = -5;
		}
		else
		{ 
			max = 0;
			A[tmp] = -5;
		}
	}
}