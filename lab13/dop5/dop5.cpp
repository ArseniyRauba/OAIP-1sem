#include <iostream>
#include <stdio.h>
using namespace std;

void main()
{
	string a[50], c[50];
	char b[100], d[100];
	int i, j, k1 = 0, k2 = 0, count = 0, prev = 0;
	gets_s(b, 99);
	gets_s(d, 99);

	for (i = 0; i <= strlen(b); i++)
	{
		if (b[i] == ' ')
		{
			count = prev;
			while (count <= i)
			{

				a[k1] += b[count];
				count++;
			}
			k1 += 1;
			prev = i;
		}
	}

	prev = 0;


	for (i = 0; i <= strlen(d); i++)
	{
		if (d[i] == ' ')
		{
			count = prev;
			while (count <= i)
			{

				c[k2] += d[count];
				count++;
			}
			k2 += 1;
			prev = i;
		}
	}

	for (i = 0; i <= k1; i++)
	{
		for (j = i; j <= k1; j++)
		{
			if (size(a[i]) > size(a[j])) swap(a[i], a[j]);
		}
	}

	for (i = 0; i <= k1; i++)
	{
		count = 0;
		for (j = 0; j <= k2; j++)
		{
			if (a[i] == c[j]) count += 1;
		}
		if (count == 0)
		{
			cout << a[i];
			break;
		}
	}

}