#include <stdio.h>

int gcd(int a, int b)
{
	int i,max=0;
	
	for(i=1; i<=a; i++)
	{
		if(a%i==0 && b%i==0)
		{
			max=i;
		}
	}
	return max;

}

int main(void)
{
	int a,b;
	printf("수 2개: ");
	scanf_s("%d %d", &a, &b);
	printf("최대공약수는 %d", gcd(a,b));
	return 0;
}
			
