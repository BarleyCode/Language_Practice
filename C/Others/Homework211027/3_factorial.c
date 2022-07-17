// 어떤 수의 순열을 구하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fact(int i);

int main() {
	int num, result;
	printf("input number? ");
	scanf("%d", &num);
	result = fact(num);
	printf("fact() -> %d! : %d \n", num, result);
	return 0;
}

int fact(int i) {
	if (i == 1)
		return 1;
	else
		return i * fact(i - 1);
}