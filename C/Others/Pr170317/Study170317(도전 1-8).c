/* ����! ���α׷��� 1 - 8 */

#include <stdio.h>

int twopower(int n);


int main(void)
{
	int n = 0;
	printf("2�� �� ��?: ");
	scanf_s("%d", &n);
	printf("2�� %d���� %d \n", n, twopower(n));


	return 0;
}

int twopower(int n)
{
	if (n < 1 && n >= 0)		//2�� 0���� 1�̱� ������ 1 ��ȯ
		return 1;
	else if (n >= 1)
	{
		return twopower(n - 1) * 2;		// ����Լ� �̿�. twopower �Լ��� ���� ���� 2�� �������ν� 2�� �ŵ������� ����� �� �ִ� �ڵ� �ϼ�.
	}

}	