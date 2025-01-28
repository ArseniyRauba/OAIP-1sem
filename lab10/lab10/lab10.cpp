#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	const int N = 100;
	int i,sz, A[N], max=-5,k; 
	double sr,sum=0;
	cout << "Размер массива: ";
	cin >> sz;
	cout << "Массив равен: ";
	srand((unsigned)time(NULL));
	for( i=0; i<sz;i++)
	{
		A[i] = rand()%100;
		cout << A[i] <<" ";
		sum += A[i];
		if (A[i] > max) 
		{
			max = A[i];
		}
	}
	cout << endl;
	sr = sum / sz;
	cout << sr << endl;
	for(i=0;i<sz;i++)
	{
		if(abs(A[i]-sr)<max)
		{
			k = i;
			max = abs(A[i]-sr);
		}
	}
	cout << k + 1 << endl;
}