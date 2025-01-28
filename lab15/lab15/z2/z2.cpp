#include <iostream>
#include <stdio.h>	
#include <stdlib.h>

void main()
{
	setlocale(LC_CTYPE, "russian");
	using namespace std;
	int stlb, str, ** A, sum;
	cout << "Введите количество строк " << endl;
	cin >> str;
	cout << "Введите количество столбцов " << endl;
	cin >> stlb;

	A = new int* [str];//создаем матрицу

	for (int i = 0; i < stlb; i++) {
		A[i] = new int[str];
		//вводим элементы
		for (int j = 0; j < str; j++) {
			cout << "Введите элемент" << endl;
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < stlb; i++) {//выводим эту матрицу
		for (int j = 0; j < str; j++)
			cout << "A[" << i << "][" << j << "]" << A[i][j] << endl;
	}
	for (int i = 0; i < stlb; i++) {//нахождение строки и ее суммы
		int flag = 0; sum = 0;
		for (int j = 0; j < str; j++) {
			if (A[i][j] > 0) {
				flag = 1;//создаем флаг и даем ему значение 1
			}
			else {
				break;
			}
			if (flag == 1) {
				sum = sum + A[i][j];
			}
		}
		if (flag == 1) {
			cout << "Строка: " << i + 1 << endl;
			cout << "Сумма: " << sum << endl;
			break;
		}
	}
	for (int i = 0; i < str; i++) {//уменьшение всех элементов массива на сумму строки
		for (int j = 0; j < stlb; j++) {
			A[i][j] -= sum;
			cout << "A[" << i << "][" << j << "]-сумма= " << A[i][j] << endl;
		}
	}
}