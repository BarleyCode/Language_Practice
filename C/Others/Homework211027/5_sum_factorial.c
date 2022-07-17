// 1부터 num까지 재귀함수로 합 구하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum_func(int count);

int main() {
	int num;
	printf("합을 구할 값? ");
	scanf("%d", &num);
	printf("1부터 %d까지의 합 : %d\n", num, sum_func(num));
	return 0;
}

int sum_func(int num) {
	if (num > 1)
		return num + sum_func(num - 1);
	else
		return 1;
}