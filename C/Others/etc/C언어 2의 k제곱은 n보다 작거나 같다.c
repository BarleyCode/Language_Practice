/* 도전! 프로그래밍 1 - 7 */

#include <stdio.h>
int power(int num);		//거듭제곱 함수


int main(void)
{
	int num = 0;

	printf("상수 n 입력: ");
	scanf_s("%d", &num);
	
	printf("k의 최댓값: %d \n", power(num));
	return 0;
	


}


int power(int num)
{
	int k=0, result = 1;
	if (num <= 1)		// num = 1이면 2의 0제곱이니까 k=0 반환
		return 0;
	else
	{
		for (k = -1; result<=num ; k++)		// 계속 2를 곱한 result가 num을 넘지 못하게 조건 걸기. result가 증가할 동안 k도 1씩 증가.
		{									// k=-1로 놓아야 제대로 값이 나오는데 왜 -1로 놓아야 하는지 나도 모르겠음 ㅠㅠ
			result = result * 2;			// result에 계속 2를 곱해 나감.

		}
		return k;
	}
}