/*
 * 4_2.c
 * 
 * ����� 楫�� �᫮ � ��।�����, ��୮ ��, �� � �� ஢�� 3 ����
 * 
 * ���� ᫮��: YES ��� NO
 * 
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	int a;
	printf("������ 楫�� �᫮: \n");
	scanf("%d", &a);
	a /= 100;
	printf("%s", a >= 1 && a<=9 ? "YES" : "NO");
	return 0;
}
