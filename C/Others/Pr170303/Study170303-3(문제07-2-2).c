#include <stdio.h>
int main(void)
{
	int a = 0, b = 0, c = 0;
	printf("�ִ� �� ���� o ���?: ");
	scanf_s("%d", &c);
	
	while (c < 1)
	{
		printf(" 1 �̻� �Է��Ͻʽÿ�: ");
		scanf_s("%d", &c);
	}
		while (a <= c)
		{
			while (b < a)
			{
				printf("o ");
				b++;
			}
			b = 0;
			a++;
			printf("* \n");
		}
	
	return 0;
}


