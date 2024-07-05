/*
 * 4_2.c
 * 
 * Ввести целое число и определить, верно ли, что в нём ровно 3 цифры
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
	a /= 100;
	printf("%s", a >= 1 && a<=9 ? "YES" : "NO");
	return 0;
}
