// 원의 넓이와 둘레 계산
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14159

double area1(int r);
double area2(int r);

int main() {
	int radius;
	printf("반지름? : ");
	scanf("%d", &radius);

	printf("원의 넓이: %lf \n", area1(radius));
	printf("원의 둘레 : %lf \n", area2(radius));
	return 0;
}

// 원의 넓이
double area1(int r) {
	return (PI * r * r);
}

// 원의 둘레
double area2(int r) {
	return (2 * PI * r);
}