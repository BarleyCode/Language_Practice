#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int year = 0;
	int i = 0;
	printf("연도를 입력하세요: ");
	scanf("%d", &year);

	while (year < 0)		//음수는 입력 안 하셔도 돼요.
	{
		printf("0 이상 입력하십시오: ");
		scanf("%d", &year);
	}

	if (year % 4 == 0 && (year % 100 != 0))		//4로 나누어떨어지고 100으로 나누어떨어지지 않는 수 거르기.
	{
		printf("윤년입니다. \n");		//두 가지 참이면 이거 출력
	}
	else if (year % 400 == 0)			// 4로도 100으로도 나누어떨어질때 이 조건 참조. 400으로 나누어떨어지면 윤년.
		printf("윤년입니다.\n");
	else
		printf("윤년이 아닙니다. \n");	//그것도 아니면 윤년 아님.


			
	return 0;
}

	