/* 142694 ���̻� ���� 19�� */
#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char str1[20] = "a";
	char str2[20] = "a";
	int i = 0, check = 0;
	char *ptr1 = str1;
	char *ptr2 = str2;
	printf("ù ��° ���ڿ��� �Է��ϼ���: ");
	gets(str1);
	printf("�� ��° ���ڿ��� �Է��ϼ���: ");
	gets(str2);

	while (str1[i] != NULL)		//���ڿ� ��. str1�� NULL, �� ������ ���ڱ��� ��.
	{
		if (str1[i] == str2[i] || (str1[i] + ('a' - 'A')) == str2[i] || (str1[i] - ('a' - 'A')) == str2[i])		//��ҹ��� �������� �ʰ� �����ϰ� �Ǻ�.
		{
			check++;	//���ڰ� ������ check 1 ����.
		}
		i++;
	}

	if (check == strlen(str1))	//check�� str1�� ���ڿ� ���̿� ���ٸ� OK �޽��� ���.
	{
		printf("%s��(��) %s��(��) �����ϴ�.\n", str1, str2);	
	}
	else
	{
		printf("%s��(��) %s��(��) �ٸ��ϴ�.\n", str1, str2);	//�ٸ��� NO��� ���.
	}
	return 0;
}

	
	



