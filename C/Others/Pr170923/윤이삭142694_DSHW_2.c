/* 142694 ���̻� �ڷᱸ�� HW 2 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS		

#define MAX_TERMS 101

struct {
	float coef;			// ���
	int expon;			// ����
} terms[MAX_TERMS];

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

typedef struct _poly_terms {
	float coef;
	int expon;
	struct _poly_terms *next;

} poly_terms;

typedef poly_terms *Poly;

Poly Init()
{
	Poly head = NULL, tail = NULL;
	head = (Poly)malloc(sizeof(Poly));
	tail = (Poly)malloc(sizeof(Poly));
	if (head == NULL || tail == NULL)
		exit(1);

	head->next = tail;
	tail->next = NULL;

	return head;


}



void node_add(Poly head, float coef, int expon)
{
	Poly firstnode = NULL;
	Poly secondnode = NULL;
	Poly pointer = NULL;
	firstnode = head;				// firstnode�� ����� ù ��°�� �ʱ�ȭ
	secondnode = head->next;		// secondnode�� ����� �� ��°�� �ʱ�ȭ
	int equal = 0;
	int i = 0;

	for (; secondnode->next != NULL; secondnode = secondnode->next)
	{
		if (expon >= (firstnode->expon))
		{
			equal = ((expon == secondnode->expon) ? 1 : 0);
			break;
		}
	}

	firstnode = secondnode;

	if (equal)
	{
		secondnode->coef = (secondnode->coef) + coef;
	}
	else
	{
		pointer = (Poly)malloc(sizeof(Poly));

		if (pointer == NULL)
			exit(1);

		pointer->coef = coef;
		pointer->expon = expon;
		pointer->next = secondnode;
		firstnode->next = pointer;
	}
}



void poly_multi2(int As, int Ae, int Bs, int Be, int *Cs, int *Ce)
{
	Poly a_start = NULL;
	Poly a_end = NULL;
	Poly b_start = NULL;
	Poly b_end = NULL;
	Poly c_start = NULL;
	Poly c_end = NULL;


}

void poly_multi(Poly Ahead, Poly Bhead, Poly Chead)
{
	Poly a_start = NULL;
	Poly a_end = NULL;
	Poly b_start = NULL;
	Poly b_end = NULL;
	Poly c_start = NULL;
	Poly c_end = NULL;

	a_start = Ahead;
	a_end = Ahead->next;
	//b_start = Bhead;
	//b_end = Bhead->next;
	c_start = Chead;
	c_end = Chead->next;

	for (; a_end->next != NULL; a_end = a_end->next)
	{
		b_start = Bhead;
		b_end = Bhead->next;
		for (; b_end->next != NULL; b_end = b_end->next)
		{
			node_add(Chead, (a_end->coef) * (b_end->coef), (a_end->expon) + (b_end->expon));
			b_start = b_end;
		}
		a_start = a_end;
	}



}

void print(Poly head, int num)
{
	Poly point = head->next;

	for (; point->next != NULL; point = point->next)
	{
		printf("%.1f^%d\n", num*(point->coef), point->expon);
	}
	printf("\n");
}

void main()
{

	/* terms[0].coef = 2.0; terms[0].expon = 15;
	terms[1].coef = 3.0; terms[1].expon = 10;
	terms[2].coef = -1.0; terms[2].expon = 3;
	terms[3].coef = 0.5; terms[3].expon = 2;
	terms[4].coef = 1.0; terms[4].expon = 1;
	terms[5].coef = 1.0; terms[5].expon = 0;
	terms[6].coef = 3.0; terms[6].expon = 8;
	terms[7].coef = -8.0; terms[7].expon = 4;
	terms[8].coef = 1.0; terms[8].expon = 1;
	terms[9].coef = -5; terms[9].expon = 0; */

	//= { { 2.0, 15 },{ 3.0, 10 },{ -1.0, 3 },{ 0.5, 2 },{ 1, 1 },{ 1, 0 },{ 3, 8 },{ -8, 4 },{ 1, 1 },{ -5, 0 } };
	
	avail = 10;

	Poly First_head = NULL;
	Poly Second_head = NULL;
	Poly Result_head = NULL;

	First_head = Init(avail);
	Second_head = Init(avail);
	Result_head = Init(avail);

	node_add(First_head, 2, 15);
	node_add(Second_head, 3, 8);
	poly_multi(First_head, Second_head, Result_head);
	print(Result_head, 1);


	
}



