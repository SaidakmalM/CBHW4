/*
 * 4_3.c
 * 
 * Ввести целое число и определить, верно ли, что все его цифры чётные
 * 
 * Одно слово: YES или NO
 * 
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	int a;
	printf("Введите целое число: \n");
	scanf("%d", &a);
	while (a>0)
	{
		if ((a%10)%2 != 0)
		{
			printf("NO");
			return 0;
		}
		a /= 10;
	}
	printf("YES");
	return 0;
}
