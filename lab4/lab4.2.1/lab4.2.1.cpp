#include<stdio.h>
#include<iostream>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	setlocale(LC_CTYPE, "rus");
	char f;
	printf("Введите символ: ");
	scanf_s("%c", &f);
	printf("  %c     %c     %c     %c\n",f,f,f,f);
	printf("   %c   %c%c%c    %c    %c\n",f,f,f,f,f,f);
	printf("%c%c%c%c%c %c %c %c %c %c %c %c%c%c%c%c\n",f,f,f,f,f,f,f,f,f,f,f,f,f,f,f,f);
	printf("   %c    %c    %c%c%c   %c\n",f,f,f,f,f,f);
	printf("  %c     %c     %c     %c\n",f,f,f,f);
}