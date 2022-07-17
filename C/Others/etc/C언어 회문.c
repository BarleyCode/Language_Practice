#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void word(void);
int wordlength(char word[20]);

int main(void)
{
	
	word();
	return 0;

}

void word(void)
{
	char str[20];		//20글자는 내 맘대로 정한거.
	int i=0, check=0;
	printf("단어 입력: ");		//단어 입력.
	scanf("%s", str);

	for(i=0; i <= ( ( wordlength(str) / 2) - 1); i++)		//단어를 절반으로 나누고 i값이 단어의 절반 길이 값까지 증가.
		{
			if( str[i] == str[ (wordlength(str) - i - 1) ] )	//첫 번째 글자 = 마지막 글자인지 먼저 확인. 그 다음 왼쪽에서 2번째 글자	= 오른쪽에서 2번째 글자... 이런 식으로 계속 확인
			{							// -i -1을 해준 이유는 단어의 마지막 글자는 배열에서 전체길이 - 1번째에 위치하기 때문.
										
				check += 1;		//글자가 같을 때마다 check가 1씩 증가.
			}
			
		}

		if( check == ( wordlength(str) / 2 ))	//check값이 단어의 길이의 절반일 때 회문이다.
			printf("회문입니다.\n");
		else
			printf("회문이 아닙니다.\n");

	
	

}

int wordlength(char word[20])		//단어길이 정하는 함수, 입력값은 위의 word함수에서 입력한 단어.
{
	int length=0, i=0;
	while(1)
	{
		if(word[i] == '\0')		//i번째 글자가 널값이 나올 때까지 반복문 돌리기.
			break;
		i++;
	}
	length = i;		//이 때 i를 길이 length라고 하자.
	return length;		//단어길이 length 반환.
	


}


