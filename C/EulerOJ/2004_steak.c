#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	// n : 마법학교 학생들, k : 동시에 K장 굽기
	// 예: 3 2 -> 3이므로 2개는 2분 가능, 1개는 반으로 잘라서 동시에 구우면 1분 가능해서 결과값이 3인듯?
	int n = 0, k = 0;
	scanf("%d %d", &n, &k);
	int rest = n % k;
	int result = 0;
	if (rest == 0) {
		// 예 : n=18, k=6이면 스테이크 동시에 6개씩, 3번(n/k) 만들면 된다
		// 앞뒷면 합쳐 2분이므로 2분 * 3번 = 6분.
		result += (2 * (n / k));
	}
	else {
		// 나머지에 2를 곱했을 때 k를 넘는지 확인
		// 예 : 22 % 6 = 4 -> 4*2=8>6이므로 절반을 동시에 구운다 해도 한번에 k개 이상 구울 수 없다.
		if (rest * 2 > k) {
			// 프라이팬을 풀로 돌릴 때 시간 (6개씩 3번) + 나머지 시간 (4개 남았으므로 8조각 -> 무조건 2분이다.)
			result += ((2 * (n / k)) + 2);
		}
		else {
			// k를 안 넘으면 동시에 절반을 구울 수 있다! 따라서 시간은 무조건 1분.
			result += ((2 * (n / k)) + 1);
		}
		
	}
	printf("%d\n", result);
	return 0;
}