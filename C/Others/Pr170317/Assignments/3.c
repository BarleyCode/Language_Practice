/* ���� 3�� 142694 ���̻� */
#include <stdio.h>
#define us 1120		// us�� ���� 1120 ����

int main(void)
{
	double n = 0;		// ��ȭ ����. int������ ���� �� ��������� �Ҽ����� ����� ���� �ʾ� double�� �����߽��ϴ�.
	printf("ȯ���� ���� �Է��ϼ���: ");
	scanf_s("%lf", &n);		//double���̹Ƿ� %lf ���ֱ�
	double result = n / us;		//����� ����
	printf("%lf �� -> %lf �޷� \n", n, result);
	return 0;
}
