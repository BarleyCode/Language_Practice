#include <stdio.h>

int main(void)
{
	int i,j;
	
	for( i=2; i<30; i++)
	{
		for( j=2; j<=i; j++)	//j를 증가시킴 -> i를 1씩 증가된 j로 나눌 준비
		{
			if(i%j==0)			// i를 j로 나누어 나머지가 없으면 for문 탈출
				break;
		}
			if(i==j)			// 탈출 후 아래로 내려와 i=j인지 검사. 맞으면 출력
				printf("%d \n", i);
		
	}
	return 0;
}

