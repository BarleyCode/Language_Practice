#include <stdio.h>
int main(void)
{
	double gae, a = 1, b=0, num;
	double result;

	printf("���� �� �� �Է�? : ");
	scanf_s("%lf", &gae);

	while (a <= gae)
	{
		scanf_s("%lf", &num);
		a++;
		b += num;
		
	}

	result = b / gae;
	printf("��� : %lf \n", result);
	return 0;
}



