#include <stdio.h>
int Big(int num1, int num2, int num3);
int Small(int num1, int num2, int num3);



int main(void)
{
	int num1, num2, num3;
	printf("3���� ������ �Է��ϼ���: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("ū ���� %d \n", Big(num1, num2, num3));
	printf("���� ���� %d \n", Small(num1, num2, num3));
	
	return 0;

}

int Big(int num1, int num2, int num3)
{
	if (num1 > num2)
		return (num1 > num3) ? num1 : num3;
	else
		return (num2 > num3) ? num2 : num3;

}

int Small(int num1, int num2, int num3)
{
	if (num1 < num2)
		return (num1 < num3) ? num1 : num3;
	else
		return (num2 < num3) ? num2 : num3;

}

