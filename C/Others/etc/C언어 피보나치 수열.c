#include <stdio.h>

int Fibo(int n)
{
	if(n<=1)
		return n;
	else
		return Fibo(n-1) + Fibo(n-2);
}

int main(void)
{
	int n;
	int a;
	printf("몇 번째?: ");
	scanf("%d", &n);
	printf("%d번째는 %d \n", n, Fibo(n-1));
	for( a=0; a<n; a++)
	{
		printf("%d ", Fibo(a));
	}
	printf("\n\n");

	return 0;
}