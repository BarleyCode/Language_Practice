/* 142694 ���̻� ���� 3�� */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct point {
	int x;
	int y;
} POINT;

int main()
{
	int loop = 0, pointnum = 0, i = 0;	// loop : ��ȯ,  pointnum : ���� ����.

	printf("���� ������ �Է��ϼ���: ");
	scanf("%d", &pointnum);

	POINT *point = (POINT *)malloc(sizeof(POINT)*pointnum); //����ü ������ ���. �����Ҵ��� ���� malloc ���.

	for (loop = 0; loop < pointnum; loop++)
	{
		printf("�� �Է�(x, y): ");
		scanf("%d %d", &point[loop].x, &point[loop].y);	//�� �Է��ϱ�.

	}

	for (loop = 0; loop < pointnum; loop++)
	{
		printf("%d��° ��: [%d, %d]\n", loop + 1, point[loop].x, point[loop].y);
	}
	return 0;
}