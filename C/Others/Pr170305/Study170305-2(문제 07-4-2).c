#include <stdio.h>
int main(void)
{
	int num = 0, a = 1;
	int total = 1;
	printf("������ �Է��Ͻʽÿ�: ");
	scanf_s("%d", &num);

	while (num < 0)
	{
		printf("���� ������ �Է��Ͻʽÿ�: ");
		scanf_s("%d", &num);
	}


	for (; a <= num; a++)
	{
		total = total * a;
	}
	printf("����� %d \n", total);
	return 0;
}


