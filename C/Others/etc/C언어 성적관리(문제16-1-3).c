#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int arr[5][5]={0};
	int i=0, j=0;

	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%d행 %d열 점수 입력: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}
	

	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			arr[i][4] += arr[i][j];		// i행 4열, 즉 가로 합계
		}
	}

	for(j=0; j<5; j++)
	{
		for(i=0; i<4; i++)
		{
			arr[4][j] += arr[i][j];		//이건 반대로 세로 합계
		}
	}

	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%d ", arr[i][j]);		//결과 출력
		}
		printf("\n");
	}

	return 0;
}
		


		

			
