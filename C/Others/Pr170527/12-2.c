/* 142694 ���̻� ���� 2�� */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

#define ALGORITHM 1		//�˰��� ����
	
typedef struct fruit {
	char fruit[20];		//���� ����ü ���� (�� ���� ���)
} FRUIT;

#if ALGORITHM == 2		//�� ���� ���

typedef struct fruit {
	char fruit[20];		//fruit���Ұ� �ִ� ����ü ����.
} FRUIT;

int CompareName(const char *e1, const char *e2)		//����ü �̸� �񱳿� �Լ�
{
	FRUIT *frt1 = (FRUIT *)e1;
	FRUIT *frt2 = (FRUIT *)e2;
	return strcmp(frt1->fruit, frt2->fruit);	//��������
}

int main()
{
	FRUIT fruitbox[5] = {
		{"watermelon"},
		{"strawberry"},
		{"kiwi"},
		{"mango"},
		{"banana"},
	};

	int i = 0;

	printf("���� �� ���ڿ�: ");
	for (i = 0; i < 5; i++)
	{
		printf("%s ", fruitbox[i].fruit);
	}



	qsort(fruitbox, 5, sizeof(FRUIT), CompareName);		//qsort�� �������ֱ�
	printf("\n");
	printf("���� �� ���ڿ�: ");
	for (i = 0; i < 5; i++)
	{
		printf("%s ", fruitbox[i].fruit);
	}
	printf("\n");
	return 0;
}

#elif ALGORITHM == 1		//���� ���� ���
int main()
{
	char *str[5] = { "watermelon", "strawberry", "kiwi", "mango", "banana" };
	int i, j;
	int index;
	char *tmp;
	char *max;

	printf("���� �� ���ڿ�: ");
	for (i = 0; i < 5; i++)
	{
		printf("%s ", str[i]);
	}
	printf("\n");


	for (i = 0; i < 5; i++)
	{
		index = i;
		max = str[i];
		for (j = i + 1; j < 5; j++)		//str[i+1]���� max�� ��.
		{
			if (strcmp(max, str[j]) > 0)	//���� max�� str[j]���� ������ �ڿ� �ִٸ�...
			{
				max = str[j];	//max�� str[j]�� �ȴ�.
				index = j;		//index�� j�� �ȴ�.
			}
		}
		tmp = str[i];	//���� �迭������ �ٲ۴�.(tmp�̿� �±�ȯ����)
		str[i] = str[index];
		str[index] = tmp;
	}

	printf("���� �� ���ڿ�: ");
	for (i = 0; i < 5; i++)
	{
		printf("%s ", str[i]);
	}
	printf("\n");
	return 0;
}


#endif
	



