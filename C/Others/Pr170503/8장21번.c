/* 142694 ���̻� 8�� 21�� */
#include <stdio.h>
#define _CRT_SECURE_NO_WARNING

int main(void)
{
	int arr[10] = { 15,23,7,78,34,67,45,36,90,71 };
	int *ptr = arr;
	int i = 0;
	int value = 0;

	printf("���� �迭: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(ptr + i));		//���� �迭 ���
	}

	printf("\n");
	printf("�������� �Է��ϼ���: ");
	scanf("%d", &value);
	printf("���� �� �迭: ");

	for (i = 0; i < 10; i++)
	{	
		printf("%d ", ptr[i] + value);		//������ �迭 ���. ptr[i]�� �ص� *(ptr+i)�� ������ ȿ��.
	}
	printf("\n");

	return 0;
}
