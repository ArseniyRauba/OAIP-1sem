#include<stdio.h>
#include<locale.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	setlocale(LC_ALL,"Russian");
	double a, b,c;
	printf("Введите a: ");
	scanf_s("%lf", &a);
	b = a*a;
	c = b * b;
	printf("а^4= ");
	printf("%.2f", c);
	return 0;
}