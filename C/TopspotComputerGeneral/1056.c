// 탑스팟 2020년 컴퓨터일반 기출문제집 C언어 1056번
#include <stdio.h>

int main() {
	int a = 0, b = 1;
	switch (a) {
	case 0: printf("%d\n", b++); break;
	case 1: printf("%d\n", ++b); break;
	default: printf("0\n", b); break;
	}
	return 0;
}