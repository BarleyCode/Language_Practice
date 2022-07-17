// 탑스팟 2020년 컴퓨터일반 기출문제집 C언어 1059번
#include <stdio.h>
#define SIZE 7
void main(void) {
	int i, tmp;
	int num[SIZE] = { 58,28,81,98,16,64,70 };
	for (i = 0; i < SIZE / 2; i++) {
		if (num[i] < num[SIZE - 1 - i]) {
			tmp = num[i];
			num[i] = num[SIZE - 1 - i];
			num[SIZE - 1 - i] = tmp;
		}
	}
	for (i = 0; i < SIZE; i++) {
		printf("%d ", num[i]);
	}

}