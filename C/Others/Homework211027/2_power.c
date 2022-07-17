// 어떤 수의 거듭제곱 계산
#include <stdio.h>
int power(int m, int e);

int main() {
	int result;
	int m, e;
	m = 3, e = 5;
	result = power(m, e);
	printf("%d의 %d승 : %d \n", m, e, result);
	printf("%d의 %d승 : %d \n", 2, 3, power(2, 3));
	printf("%d의 %d승 : %d \n", 4, 3, power(4, 3));
	return 0;
}

int power(int m, int e) {
	int tmp;
	tmp = 1;
	for (; e > 0; e--)
		tmp *= m;
	return tmp;
}