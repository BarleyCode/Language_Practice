/* 142694 ���̻� 9�� �������� */
#include <stdio.h>
#include <math.h>
#define COUNT 5
#define _CRT_SECURE_NO_WARNINGS

typedef struct rect {
	int left;		//�»���� x��ǥ
	int top;		//�»���� y��ǥ
	int right;		//���ϴ��� x��ǥ
	int bottom;		//���ϴ��� y��ǥ
} RECT;

int main(void)
{
	RECT rects[COUNT] = { 0 };
	int i;

	for (i = 0; i < COUNT; i++)
	{
		printf("�»����/���ϴ����� ��ǥ�� �Է��ϼ���(left, top, right, bottom ��)\n");
		scanf("%d %d %d %d", &(rects[i].left), &(rects[i].top), &(rects[i].right), &(rects[i].bottom));
	}

	for (i = 0; i < COUNT; i++)
	{
		int width = abs((rects[i].right) - (rects[i].left));
		int height = abs((rects[i].top) - (rects[i].bottom));
		printf("%d��° ���簢�� : ", i + 1);
		printf("�»���� = [%d, %d] ���ϴ��� = [%d, %d] �� = %d ���� = %d\n", rects[i].left, rects[i].top, rects[i].right, rects[i].bottom, width, height);
		//rects ��� ���
	}
	return 0;
}




