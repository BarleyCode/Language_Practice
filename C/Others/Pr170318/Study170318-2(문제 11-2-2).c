#include <stdio.h>

int main(void)
{
	int length = 0, i = 0;
	char word[15];
	printf("���ܾ� �Է�: ");
	scanf("%s", word);

	for (; i < 14; i++)
	{
		if (word[i] == '\0')		// �� ���� ���� ������ ����. ������ break
			break;
		length = i + 1;		//������ ���� i+1��. �̷��� �ؾ� ����� �������� ���� �� ������ �ؾߵǴ��� �� �𸣰���. �Ƹ� length �ʱⰪ�� 0�̶� �׷��� ����.
	}
	printf("%d\n", length);
	return 0;
}

	
