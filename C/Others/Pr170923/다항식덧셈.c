#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS		

#define MAX_TERMS 101

struct {
	float coef;			// ���
	int expon;			// ����
} terms[MAX_TERMS] = { {8,3}, {7,2}, {1,0}, {10,3}, {3,2}, {1,0} };

int avail;


char compare(int a, int b)		// 2���� ������ ���Ѵ�.
{
	if (a > b) return '>';
	else if (a == b) return '=';
	else return '<';
}

void attach(float coef, int expon)		// ���ο� ���� ���׽Ŀ� �߰��Ѵ�.
{
	if (avail > MAX_TERMS) {
		fprintf(stderr, "���� ������ �ʹ� ����\n");
		exit(1);
	}
	terms[avail].coef = coef;
	terms[avail++].expon = expon;
}

int FindSameExpon(int A_expon, int B_expon, int *C_exponArray, int availNum)		// ���ݱ��� ���� �� ���׽��� ������ �� �߿��� ������ ��Ƴ��� �迭 �� ������ ���� ������ �ִ��� ���ϴ� �Լ��̴�.
{
	int i = 0;
	for (i = 0; i < availNum; i++)
	{
		if (A_expon + B_expon == C_exponArray[availNum])			// for������ C_expon�� ��Ƴ��� �迭 �߿��� �˻�
			return availNum;										// ã������ �� �˻��� ���� ��ġ�� (�� ��°����) ��ȯ
		else
			continue;												// ã�� ������ ��� continue.
	}
	return -1;														// �� ã������ -1 ��ȯ

}


void poly_add(int As, int Ae, int Bs, int Be, int *Cs, int *Ce)
{

	int i = 0;
	float tempcoef;
	*Cs = avail;
	while (As <= Ae && Bs <= Be)
	{
		switch (compare(terms[As].expon, terms[Bs].expon))
		{
		case '>':
			attach(terms[As].coef, terms[Bs].expon);
			As++;
			break;
		case '=':
			tempcoef = terms[As].coef + terms[Bs].coef;
			if (tempcoef)
				attach(tempcoef, terms[As].expon);
			As++; Bs++;
			break;
		case '<':
			attach(terms[Bs].coef, terms[Bs].expon);
			Bs++;
			break;
		}
	}

	for (; As <= Ae; As++)
	{
		attach(terms[As].coef, terms[As].expon);
	}
	for (; Bs <= Be; Bs++)
	{
		attach(terms[Bs].coef, terms[Bs].expon);
	}

	*Ce = avail - 1;

	for (i = 0; *Cs + i <= *Ce; i++)
	{
		printf("%.1lf^%d", terms[*Cs + i].coef, terms[*Cs + i].expon);

		if (*Cs + i > *Ce)
			break;
		else
			printf(" + ");

	}
	printf("\n");
	for (i = *Cs; i <= *Ce; i++)
	{
		if (terms[i].expon == 0)
		{
			printf("%.1f ", terms[i].coef);
			continue;
		}

		printf("%.1f^%d", terms[i].coef, terms[i].expon);

		if (i != *Ce)
			printf(" + ");
	}




}

void main()
{
	int Cs, Ce;
	avail = 6;
	
	poly_add(0, 2, 3, 5, &Cs, &Ce);



}



