#include <stdio.h>
int main()
{
	int i = 0, j = 0;
	int input = 0;
	int count = 0;

	printf("삼각형의 크기를 입력하세요 : ");
	scanf("%d", &input);

	for (i = 0; i <= input; i++)
	{
		for (j = 0; j < input - count; j++)
			printf(" ");
		j = 0;
		for (j = 0; j < count; j++)
			printf("*");

		count++;
		printf("\n");
	}

	return 0;
	

}