// 탑스팟 2020년 컴퓨터일반 기출문제집 C언어 1050번
#include <stdio.h>
int main() {
	char msg[50] = "Hello World!! Good Luck!";
	int i = 2, number = 0;
	while (msg[i] != '!') {		// 작은따옴표 사용에 유의
		if (msg[i] == 'a' || msg[i] == 'e' || msg[i] == 'i' ||
			msg[i] == 'o' || msg[i] == 'u') {
			number++;
		}
		i++;
	}
	printf("%d\n", number);
	return 0;
}