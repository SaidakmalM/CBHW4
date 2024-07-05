/*
 * 4_4.c
 * 
 * Ввести целое число и "перевернуть" его
 * 
 * Целое неотрицательное число наоборот
 * 
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned int n,m=0;
		printf("Введите целое число: \n");
		scanf("%d", &n);
	while (n>0)
	{
		m = m*10 + n%10;
		n = n/10;
	}
	printf("%d\n",m);
	return 0;
}
