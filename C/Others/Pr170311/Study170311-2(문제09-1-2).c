#include <stdio.h>
int CelToFah(int cel, int fah)
{
	fah = 1.8 * cel + 32;
	return fah;
}

int FahToCel(int cel, int fah)
{
	cel = (fah - 32) / 1.8;
	return cel;
}


int main(void)
{
	int cel = 0, fah = 0;
	int choice = 0;
	printf("����(0) or ȭ��(1): ");
	scanf_s("%d", &choice);

	while (choice>1)
	{
		printf("0 �ƴϸ� 1�� �Է��Ͻʽÿ�: ");
		scanf_s("%d", &choice);
	}

	switch (choice)
	{
	case 0:
		printf("���� �µ� �Է�: ");
		scanf_s("%d", &cel);
		printf("ȭ�� �µ��� %d \n", CelToFah(cel, fah));
		break;
	case 1:
		printf("ȭ�� �µ� �Է�: ");
		scanf_s("%d", &fah);
		printf("���� �µ��� %d \n", FahToCel(cel, fah));
	}
	return 0;
}
	