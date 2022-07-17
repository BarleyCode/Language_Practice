// 온스를 입력받아 컵의 단위로 바꾸는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void to_cup(int ounce);

int main() {
	int ounce;
	printf("몇 온스입니까?: ");
	scanf("%d", &ounce);
	to_cup(ounce);
	return 0;
}

void to_cup(int ounce) {
	if ((ounce / 8) != 0)
		printf("%d온스는 %d컵입니다.\n", ounce, (ounce / 8)+1);		// 남는 나머지 물도 한 컵으로 처리
	else
		printf("%d온스는 %d컵입니다.\n", ounce, (ounce / 8));
}