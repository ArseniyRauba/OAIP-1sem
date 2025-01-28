#include <iostream>
#include <cmath>
int main()
{
	setlocale(LC_CTYPE,"RUS");
	float x, y, x2, a, max, min;
	printf("Введите x "); scanf_s("%f", &x);
	printf("Введите y "); scanf_s("%f", &y);
	printf("Введите x2 "); scanf_s("%f", &x2);
	max = x;
	if (y>max) max = y;
	if (x2>max) max = x2;
	min = x;
	if (min > y) min = y;
	if (min > x2) min = x2;
	a = max * min;
	printf("max(x, y, z) * min(x, y, x2) = ");
	printf("%.2f",a);
}