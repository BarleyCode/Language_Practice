#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void password(void);

int main(void)
{

	password();

	return 0;
}

void password(void)
{
	char str[30];
	int i=0;
	printf("영어를 입력하세요: ");
	gets(str);

	for(i=0; i<=(strlen(str)-1); i++)
	{
		if( str[i] >= 'a' && str[i] <= 'z' )
		{
			str[i] += 3;
		}
		else if ( str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 3;
		}
	}

	puts(str);
}


