#include<stdio.h>
#include<iostream>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	setlocale(LC_CTYPE, "rus");
	char c;
	printf("Введите символ: ");
	scanf_s("%c", &c);
	printf("   %c%c\n", c,c);
	printf("  %c%c%c%c\n", c, c, c,c);
	printf(" %c%c%c%c%c%c\n", c, c, c, c, c,c);
	printf("   %c%c\n",c,c);
	printf("  %c%c%c%c\n",c, c, c,c);
	printf(" %c%c%c%c%c%c\n",c, c, c, c, c,c);
	printf("%c%c%c%c%c%c%c%c\n",c, c, c, c, c, c, c,c);
	printf("  %c%c%c%c\n", c, c, c, c);
	printf(" %c%c%c%c%c%c\n",c, c, c, c, c, c);
	printf("%c%c%c%c%c%c%c%c\n", c, c, c, c, c, c, c, c);
	printf("   %c%c\n",c,c);
	printf("   %c%c\n", c,c);
}