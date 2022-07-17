﻿#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void mode_change(int result);
int plus(int a, int b);
int minus(int a, int b);
int multi(int a, int b);
int divide(int a, int b);

int main(void)
{
	int a = 0, b = 0, buho = 0, result = 0;

	while (1)		//항상 무한반복시키기
	{
		printf("수식을 입력하세요. (종료: -1 -1 -1)\n");
		printf("가운데 부호 설명:\n");
		printf("덧셈 : 1\n");		
		printf("뺼셈 : 2\n");
		printf("곱셈 : 3\n");
		printf("나눗셈 : 4\n");
		scanf("%d %d %d", &a, &buho, &b);	//부호를 정수형으로 설정해 1,2,3,4를 넣으면 연산할 수 있게끔 만들었어요.
											//char형으로 선언하여 문자 + - * / 넣어서 계산하는 것은 종료가 안되길래 정수로 만들었어요 ㅠㅠ
		if (a == -1 && buho == -1 && b == -1)
			return 0;
		else if (a == 0 && buho == 0 && b == 0)		// a,b,buho 모두 0이면 결과값 result를 진수변환하여 출력
		{
			mode_change(result);
		}

		else
		{
			switch (buho)
			{
			case 1:
				printf("%d + %d = %d\n", a, b, plus(a, b));
				result = plus(a, b);		// plus(a,b)로 연산 후 result에 결과값 저장. 후에 진수변환용으로 쓸 거임.
				break;
			case 2:
				printf("%d - %d = %d\n", a, b, minus(a, b));
				result = minus(a, b);
				break;
			case 3:
				printf("%d * %d = %d\n", a, b, multi(a, b));
				result = multi(a, b);
				break;
			case 4:
				printf("%d / %d = %d\n", a, b, divide(a, b));
				result = divide(a, b);
				break;
			default:
				printf("계산할 수 없습니다.\n");
				break;
			}
		}

	}


	
	return 0;


}


void mode_change(int result)
{
	printf("8진수 : %#o, 16진수 : %#x, 10진수 : %d\n", result, result, result);

}


int plus(int a, int b)
{
	return a + b;
}

int minus(int a, int b)
{
	return a - b;
}

int multi(int a, int b)
{
	return a * b;
}

int divide(int a, int b)
{
	return a / b;
}
