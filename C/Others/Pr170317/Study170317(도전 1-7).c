/* ����! ���α׷��� 1 - 7 */
#include <stdio.h>
int power(int num);		//�ŵ����� �Լ�


int main(void)
{
	int num = 0;

	printf("��� n �Է�: ");
	scanf_s("%d", &num);
	
	printf("k�� �ִ�: %d \n", power(num));
	return 0;
	


}


int power(int num)
{
	int k=0, result = 1;
	if (num <= 1)		// num = 1�̸� 2�� 0�����̴ϱ� k=0 ��ȯ
		return 0;
	else
	{
		for (k = -1; result<=num ; k++)		// ��� 2�� ���� result�� num�� ���� ���ϰ� ���� �ɱ�. result�� ������ ���� k�� 1�� ����.
		{									// k=-1�� ���ƾ� ����� ���� �����µ� �� -1�� ���ƾ� �ϴ��� ���� �𸣰��� �Ф�
			result = result * 2;			// result�� ��� 2�� ���� ����.

		}
		return k;
	}
}