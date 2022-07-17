// 문자열 거꾸로 출력 및 글자 수 구하기
#include <stdio.h>
#pragma warning(disable:4996)
#define MAX_LENGTH 100
int main() {
	int i, len = 0;
	char str[MAX_LENGTH];

	printf("Input String : ");
	scanf("%[^\n]s", str);

	while (str[len] != 0) len++;

	// 문자열 뒤집기
	for (i = len - 1; i >= 0; i--) {
		printf("%c", str[i]);
	}
	printf("\n");
	printf("문자열의 크기 : %d\n", len);


	return 0;
}