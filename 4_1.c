/*
 * 4_1.c
 * 
 * ����� ��� 楫�� �᫠ a � b (a<=b)
 * 
 * �뢥�� �㬬� �����⮢ ��� �ᥫ �� a �� b
 * 
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b;
	int s = 0; 
	printf("������ ��� 楫�� �᫠ �� 0 �� 100: \n");
	scanf("%d%d", &a,&b);
	for (int i = a; i <= b; i++)
		s += i * i;
	printf("%d\n", s);
	return 0;
}
