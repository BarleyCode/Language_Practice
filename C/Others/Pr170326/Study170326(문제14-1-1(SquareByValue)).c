#include <stdio.h>
void SquareByValue(int num)
{
	printf("%d \n", num*num);
}

int main(void)
{
	int num;
	printf("���� �Է�: ");
	scanf_s("%d", &num);
	SquareByValue(num);
	return 0;
}

