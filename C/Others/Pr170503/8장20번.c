/* 142694 ���̻� 8�� 20�� */
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };		//�迭 ����
	int *ptr = arr;					//�迭 ����Ű�� ������ ����
	int i = 0;
	double avg = 0;

	printf("�迭 : ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ptr[i]);		//�迭 ���Ҹ� ����Ű�� ������ ���
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		avg += *(ptr + i);
	}

	printf("�迭�� ��� : %lf\n", avg/5);

	return 0;
}
	
	

