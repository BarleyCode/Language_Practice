/* ���� ���α׷��� 1 - 6 */
#include <stdio.h>

int main(void)
{
	int num = 0;
	int h = 0, m = 0;		// ��, �� ���� ����

	printf("�� �Է�: ");
	scanf_s("%d", &num);

	if (num < 60)		// ���� : 60�� �̳�, 60�� �̻�~1�ð� �̳�, 1�ð� �̻�
		printf("h:0 m:0 s:%d \n", num);
	else if (num >= 60 && num < 3600)
	{
		m = 1;		// �̰� �����ָ� 1�ð� �̳� �ð��� 1�о� �þ �� �׷����� ���߿� �����. �Ƹ� 1�� �̻��̶� 1�� �ʱ�ȭ�ؾߵǼ� �׷�����.
		for (; m < 60; m++)
		{
			num = num - 60;
			if (num < 60)
				break;
		}
		printf("h:0 m:%d s:%d \n", m, num);
	}
	else
	{
		for (; ; h++)		
		{
			while(m<60)
			{
				if (num >= 60)
					num = num - 60;		// num �� �ʰ� 60 �Ʒ��� �� ������ ����
				else if (num < 60)		// 60 ���ϸ� ���߱�
					break;
				m++;
			}
			if (m >= 60)		// �̾ �е� 60 �̻��̸� ��� ����, ���ϸ� ���߱�
			{
				m = m - 60;
				m = 0;
			}
			else if (m < 60)
				break;
		}
		
		printf("h:%d m:%d s:%d \n", h, m, num);
	}

	
	return 0;
}