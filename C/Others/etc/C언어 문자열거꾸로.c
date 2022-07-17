/* 142694 윤이삭 문제 4번 */

#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int wordlength(char arr[]);		//단어길이 계산

int main(void)
{
	char str[30];		
	char temp;
	int i=0;

	printf("input string: ");
	scanf("%s", str);		//문자열 입력
	

	for(i=0; i<wordlength(str)/2; i++)		//어차비 글자바꾸기이므로 i가 단어길이의 절반정도까지 오면 다 바뀜
	{
		temp = str[i];		//temp에 원래 str[i] 저장
		str[i] = str[wordlength(str)-i-1];		//str[i]의 반대쪽에 있는 문자 저장
		str[wordlength(str)-i-1] = temp;		//str[i]의 반대쪽에 있는 문자에 temp 저장
	}

	printf("reverse string: ");
	printf("%s\n", str);
	printf("\n");
	return 0;
}

int wordlength(char arr[])
{
	int i=0;
	
	while(1)
	{
		if( arr[i] == '\0')
			break;
		i++;
	}
	return i;
}









