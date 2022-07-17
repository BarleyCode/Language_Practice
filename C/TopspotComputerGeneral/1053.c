// 탑스팟 2020년 컴퓨터일반 기출문제집 C언어 1053번
#include <stdio.h>
int main() {
	int i, sum = 0;
	for (i = 1; i <= 10; i += 2) {
		if (i % 2 && i % 3) continue;
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}