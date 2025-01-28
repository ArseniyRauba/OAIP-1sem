#include<stdio.h>
#include<locale.h>
#include<cmath>
void main()
{
	setlocale(LC_ALL, "rus");
	double d,s;
	printf("Введите длину диагонали квадрата: \n");
	scanf_s("%lf", &d);
	s = (pow(d, 2)) / 2;
	printf("Площадь квадрата равна: ");
	printf("%.2f", s);
}