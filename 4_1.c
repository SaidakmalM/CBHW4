/*
 * 4_1.c
 * 
 * Ввести два целых числа a и b (a<=b)
 * 
 * Вывести сумму квадратов всех чисел от a до b
 * 
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b;
	int s = 0; 
	printf("Введите два целых числа от 0 до 100: \n");
	scanf("%d%d", &a,&b);
	for (int i = a; i <= b; i++)
		s += i * i;
	printf("%d\n", s);
	return 0;
}
