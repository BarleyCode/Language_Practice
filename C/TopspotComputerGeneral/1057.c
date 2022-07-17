// 탑스팟 2020년 컴퓨터일반 기출문제집 C언어 1057번
#include <stdio.h>
#define SIZE 3
void func(int* m, int* a, int b);

int main() {
	int num[SIZE] = { 1,3,6 };
	int a = 10, b = 30;
	func(num, &a, b);
	printf("a=%d, b=%d\n", a, b);
	return 0;

}

void func(int* m, int* x, int y) {
	int i = 0, n = 0;
	y = *x;
	n = *(m + 1) + (*m + 2);
	*x = ++n;
}