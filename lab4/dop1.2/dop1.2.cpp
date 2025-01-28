#include<stdio.h>
#include<locale.h>
void main()
{
	setlocale(LC_ALL, "rus");
	double a, b, c;
	printf("Введите переменные a: \n");
	scanf_s("%lf", &a);
	printf("Введите переменные b: \n");
	scanf_s("%lf", &b);
	c = a;
	a = b;
	b = c;
	printf("a= ", a);
	printf("%.f\n",a);
	printf("b= ");
	printf("%.f",c);
} 