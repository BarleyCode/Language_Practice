/* 142694 ���̻� 8�� 22�� */
#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char str[20];
	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);	//���ڿ� ���. fgets�� ���� ������ sizeof(str)���� Ȯ���ϰ� �Է��ϱ� ���ؼ�.
	char *ptr = str;
	int i = 0;
	char temp = 'a';
	int a = strlen(str);		//a = ���ڿ� ����

	for (i = 0; i < (a/2); i++)		//���ڿ��� ���� ���̱����� �ٲٸ� ��.
	{
		temp = *(ptr + a - i - 1);		//temp = ���� �� ����.
		*(ptr + a - i - 1) = *(ptr + i);		//�� ���� <- ó�� ����
		*(ptr + i) = temp;		//ó�� ���� <- temp
	}
	
	

	printf("�ڹٲ� ���ڿ� : ");
	puts(str);
	printf("\n");
	return 0;
}

		
		


