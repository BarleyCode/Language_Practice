// 탑스팟 2020년 컴퓨터일반 기출문제집 C언어 1052번
#include <stdio.h>
int recursion(int n) {
	if (n < 5) return 1;
	else if (n % 5 == 1) return n + recursion(n - 1);
	else recursion(n - 1);
}

int main() {
	int n = recursion(16);
	printf("%d\n", n);
	return 0;
}