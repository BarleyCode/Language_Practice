#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int wordlength(char arr[100]);

int main(void)
{

	char str[100];
	char ch1, ch2;
	int i = 0;
	int change = 0;
	printf("문자열을 입력하세요: ");
	gets(str);		//아마 엔터값도 있기 때문에 엔터를 인식할 수 있는 gets를 써야 하는 것 같다.

	printf("수정할 특정문자와 교체할 문자를 입력하세요: ");
	scanf("%c %c", &ch1, &ch2);

	for (i = 0; i < wordlength(str); i++)
	{
		if ( str[i] == ch1)
		{
			str[i] = ch2;
			
			change += 1;
		}
	}

	printf("전체 문자열의 개수는 %d이고, 고쳐진 특정문자 개수는 %d입니다\n", wordlength(str), change);
	printf("교체된 문자열은 %s입니다.", str);
	return 0;

}


int wordlength(char arr[100])
{
	int i = 0;
	while (1)
	{
		if (arr[i] == '\0')
			break;
		i++;
	}
	return i;
}