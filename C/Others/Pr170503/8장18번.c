/* 142694 ���̻� 8�� 18�� */
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char str[10] = "abcdefg";	//���ڿ� ����
	char str2[10] = "a";
	int i = 0;
	char *ptr = str;		//���ڿ� str�� ����Ű�� ������ ptr ����

	while (ptr[i] != NULL)		//ptr[i]�� NULL�� �� ������..
	{
		str2[i] = ptr[i];	//str2�� ptr�� ���ڸ� �� ���ھ� ����.
		i++;
	}

	printf("%s", str2);		//���������� ���.
	printf("\n");
	return 0;
}