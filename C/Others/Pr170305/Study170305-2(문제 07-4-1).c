#include <stdio.h>
int main(void)
{
	int num1 = 0, num2 = 0;
	int total = 0;

	printf("���� 1 �Է�: ");
	scanf_s("%d", &num1);
	printf("���� 2 �Է�: ");
	scanf_s("%d", &num2);

	for (; num1 <= num2; num1++)
	{
		total = total + num1;
	}
	printf("���� 1���� ���� 2������ �� : %d \n", total);
	return 0;
}


		