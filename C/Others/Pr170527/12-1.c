/*142694 ���̻� ���� 1�� */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define _CRT_SECURE_NO_WARNINGS
#define UPPER(CH) CH-32		//�빮�� ��ũ��
#define LOWER(CH) CH+32		//�ҹ��� ��ũ��
#define STRCPY(A) (char *)A		//���ڿ����� ��ũ��
#define STRCAT(A, B) printf(#A#B)	//���ڿ����� ��ũ��. ������ �� ���ڿ��� �״�� �ٿ� ���.


void UpperLower(void)
{
	char str[13] = "Good Morning";	//���ڿ� �ޱ�.
	int i = 0;
	for (i = 0; i < 12; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')		//str[i]�� �ҹ��ڸ� 32�� ���� �빮�� �����(ASCII �̿�)
		{
			str[i] = UPPER(str[i]);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')	//�̰͵� ��������. 32 ���� �ҹ��� �����.
		{
			str[i] = LOWER(str[i]);
		}
		else if (str[i] == ' ')		//�����̸� ó������ ���ư� ���� ������ ���ҿ��� ����.
			continue;
	}
	printf("str : %s\n", str);
}

void StringCopy(void)
{
	char *str1 = "ABCDE";
	char *str2 = STRCPY(str1);	//(char *)�� �̿��� ���ڿ� ����.


	printf("����� ���ڿ� : %s \n", str2);
}

void StringCatenate(void)
{
	printf("����� ���ڿ�: ");
	STRCAT(ABCDE, 12345);
	printf("\n");

}




int main()
{
	UpperLower();
	StringCopy();
	StringCatenate();
	return 0;
}





