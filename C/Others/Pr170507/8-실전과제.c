#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char str[30];
	char *ptr = str;
	int len;

	printf("���ڿ��� �Է��ϼ��� : ");
	gets(str);

	len = 0;
	while (ptr[len] != NULL)
	{
		len++;
		*ptr = str[len];
	}

	printf("���ڿ��� ���� : %d\n", len);
	return 0;
}
