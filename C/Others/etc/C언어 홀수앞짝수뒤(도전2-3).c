#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int arr[10];
	int temp[10];
	int i, min=0, max=9;

	for( i=0; i<10; i++)
	{
		printf("%d번째 수: ", i+1);
		scanf("%d", &temp[i]);
	}

	for(i=0; i<10; i++)
	{
		if(temp[i] % 2 ==1 )
		{
			arr[min] = temp[i];
			min += 1;
		}
		else
		{
			arr[max] = temp[i];
			max -= 1;
		}

	}
	printf("\n\n");
	
	for(i=0; i<10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
