/* 142694 ���̻� 8�� 23�� */
#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char str[20];
	printf("���ڿ� �Է�: ");
	gets(str);
	char *ptr = str;
	int i = 0, num = 0;

	while (*(ptr+i) != NULL)
	{
		if ( ptr[i] == ' ' || ptr[i] == '\t' || ptr[i] == '\v' || ptr[i] == '\f' || ptr[i] == '\n' || ptr[i] == '\r')	//�������� Ȯ��
		{
			num++;		//�����̸� num�� 1�� ����.
		}
		i++;
	}

	printf("������ ���� : %d��", num);	//num�� ���� ������ ����.
	printf("\n");
	return 0;
}


	

	