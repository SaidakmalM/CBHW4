/*
 * 4_4.c
 * 
 * ����� 楫�� �᫮ � "��ॢ�����" ���
 * 
 * ����� ������⥫쭮� �᫮ �������
 * 
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned int n,m=0;
		printf("������ 楫�� �᫮: \n");
		scanf("%d", &n);
	while (n>0)
	{
		m = m*10 + n%10;
		n = n/10;
	}
	printf("%d\n",m);
	return 0;
}
