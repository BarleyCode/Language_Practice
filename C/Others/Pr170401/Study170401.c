#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void mode_change(int result);
int plus(int n1, int n2);
int minus(int n1, int n2);
int multi(int n1, int n2);
int divide(int n1, int n2);

int main(void)
{
	int num1 = 0, num2 = 0, num3 = 0;
	printf("�����Դϴ�.\n");
	printf("����� ��ȣ�Դϴ�. + - / * �� �Է��ϼ���.\n");
	printf("�Է��ϼ���!\n");
	printf("����: -1 -1 -1, �����ٲٱ�: 0 0 0 \n");
	scanf("%d %d %d", &num1, &num2, &num3);

	while (num1 == -1 && num2 == -1 && num3 == -1)
	{

		if (num2 != 0 || num2 != -1)
		{
			switch (num2)
			{
			case '+':
				printf("%d", plus(num1, num3));
				break;
			case '-':
				printf("%d", minus(num1, num3));
				break;
			case '*':
				printf("%d", multi(num1, num3));
				break;
			case '/':
				printf("%d", divide(num1, num3));
				break;
			default:
				printf("��ȣ�� �߸� �Է��ϼ̽��ϴ�.");
				break;
			}
		}
		else if (num1 == 0 && num2 == 0 && num3 == 0)
			mode_change(result);
	}

			



	return 0;
}

void mode_change(int result)
{
	int jinsu = 0;
	printf("������ �Է��ϼ��� (1: 8����, 2: 16����, 3: 10����) \n ");
	scanf("%d", &jinsu);
	switch (jinsu)
	{
	case 1:
		printf("%#o \n", result);
		break;
	case 2:
		printf("%#x \n", result);
		break;
	case 3:
		printf("%d \n", result);
		break;
	default:
		printf("������ �߸� �Է��ϼ̽��ϴ�.\n");
		break;
	}
}

int plus(int n1, int n2)
{
	int result = n1 + n2;
	return result;
}

int minus(int n1, int n2)
{
	int result = n1 - n2;
	return result;
}

int multi(int n1, int n2)
{
	int result = n1 * n2;
	return result;
}

int divide(int n1, int n2)
{
	int result = n1 / n2;
	return result;
}

		
	
	
