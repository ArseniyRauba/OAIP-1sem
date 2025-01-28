#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	const int size = 1000;
	char* str1 = new char[size];
	char* str2 = new char[size];
	int num;
	
	cout<<"Введите первую строку: ";
	cin.getline(str1,size);
	cout<<"Введите вторую строку: ";
	cin.getline(str2,size);
	cout<<"Введите номер позиции: ";
	cin>>num;
	

}