/* ���� 11-1-1 */
#include <stdio.h>

int main(void)
{
	int i, max = 0, min=0;		//�ִ�, �ּڰ� ���� ����
	int arr[5];
	printf("5�� ���� �Է�: ");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	i = 0;
	max = arr[0];
	min = arr[0];

	for (i = 0; i < 4; i++)			// �ִ� arr[i+1]�� ��. arr[i+1]�� �� ũ�� �װ� �ִ�����, �ƴϸ� �״��. �̰� for������ �ݺ�.
	{
		if (max <= arr[i + 1])
		{
			max = arr[i + 1];
		}
		
	}

	for (i = 0; i < 4; i++)		//�ּڰ��� ��������. arr[i+1]�� �� ������ �װ� �ּڰ�.
	{
		if (min > arr[i + 1])
		{
			min = arr[i + 1];
		}
	}

	printf("�ִ� : %d \n", max);
	printf("�ּڰ� : %d \n", min);
	printf("�հ� : %d \n", arr[0] + arr[1] + arr[2] + arr[3] + arr[4]);		//�հ�� �׳� ����.
	return 0;
}

