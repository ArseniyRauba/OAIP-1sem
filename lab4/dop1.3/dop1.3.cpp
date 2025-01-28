#include<stdio.h>
#include<locale.h>
void main()
{
	setlocale(LC_ALL, "rus");
	double a, b;
	printf("Введите переменные a: \n");
	scanf_s("%lf", &a);
	printf("Введите переменные b: \n");
	scanf_s("%lf", &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a= ", a);
	printf("%.f\n", a);
	printf("b= ");
	printf("%.f",b );
}