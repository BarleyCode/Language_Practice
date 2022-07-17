/* 142694 윤이삭 문제 3번 */
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int arr[10]={0};
	int i=0;
	int num=0;			//찾을 원소
	int order = 1;		//순서

	for( i=0; i<10; i++)		//숫자 10개 입력
	{
		printf("%d번째 원소 입력: ", i+1);
		scanf("%d", &arr[i]);
	}

	printf("\n");
	printf("배열에서 찾을 값을 입력하세요: ");			
	scanf("%d", &num);

	for( i=0; i<10; i++)		
	{
		if( arr[i] != num)			//arr[i]가 num이 아니면 order 1 증가
		{
			order += 1;
		}
		else if( arr[i] == num )		//arr[i] = num이면 break
			break;
	}

	printf("%d(은)는 %d번째 원소입니다. \n", num, order);
	return 0;
}


	