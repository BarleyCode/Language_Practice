/* 142694 윤이삭 문제 2번 */
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int wordlength(char arr[]);

int main(void)
{
	char str[50]={0};
	int i=0;
	printf("문자열을 입력하세요: ");
	gets(str);		//공백까지 포함해야 하므로 scanf 대신 gets 사용

	for( i=0; i <= wordlength(str); i++)		//i가 문자열 길이까지 증가.
	{
		
		if( i != 0  )		//i가 0이 아닌 경우, 즉 str[i]가 문장의 시작이 아닌 경우
		{
			if (str[i] >= 'a' && str[i] <= 'z')		//만약 str[i]가 a~z 소문자 사이
			{
				if( str[i-1] == ' ' )		//그리고 만약 str[i]의 바로 왼쪽 글자가 공백이라면..
				{
					str[i] = str[i] - 32;	//대문자로 바꾼다.
				}
			}
			
		}					
		else						 //i가 0인 경우, 즉 str[i]가 문장의 시작인 경우
		{
			if (str[i] >= 'a' && str[i] <= 'z')		//str[i]가 소문자인 경우 바로 대문자로 바꿔준다(공백 생각 X)
			{
				str[i] = str[i] - 32;
			}
		}

				
	}

	puts(str);		//문자열 출력. 역시 공백 때문에 printf 대신 puts 사용


	return 0;


}

int wordlength(char arr[])		//문자열 길이 계산하는 함수
{
	int i=0;
	while(1)
	{
		if ( arr[i] == '\0')		//널문자일 때까지 i 증가.
			break;
		i++;
	}
	return i;
}
