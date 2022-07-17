#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int WinCondition(char arr[10][10]);		//승리 조건 : 모든 칸이 X

int main(void)
{
	char block[10][10];
	int a=0, b=0;		//행, 열 성분
	int x=0, y=0;		//좌표

	for( a=0; a<10; a++)
	{
		for( b=0; b<10; b++ )
		{
			block[a][b]='O';		//맨 처음 O 출력
		}
	}

	for( a=0; a<10; a++)
	{
		for( b=0; b<10; b++ )
		{
			printf("%c ", block[a][b]);
		}
		printf("\n");
	}
	printf("\n");

	while(1)				//모든 칸이 X가 될 때까지 반복한다.
	{
		printf("폭탄 놓을 곳을 입력하세요 (x행,y열): ");
		scanf("%d %d", &x, &y);

		for( a=0; a<10; a++)
		{
			for( b=0; b<10; b++ )
			{
				if( (a == x-1) && (b == y-1) )
				{
					if( ( (x-1 >= 1) && (x-1 <= 8) ) && ( (y-1 >= 1) && (y-1 <= 8) ) )		//일반적일 경우
					{
						block[a][b] = 'X';
						block[a-1][b] = 'X';
						block[a][b-1] = 'X';
						block[a+1][b] = 'X';
						block[a][b+1] = 'X';
					}
					else if ( ( (x-1 == 0) || (x-1 == 9) ) && ( (y-1 >= 1) && (y-1 <= 8) ) )	//맨 왼쪽 or 오른쪽 줄일 경우. 
					{
						if( x-1 == 0)															//왼쪽 줄은 자신+상하우 칸만 바꿔준다
						{
							block[a][b] = 'X';
							block[a][b+1] = 'X';
							block[a][b-1] = 'X';
							block[a+1][b] = 'X';
						}
						else
						{
							block[a][b] = 'X';													//오른쪽 줄은 자신 + 상하좌 칸만 바꿔준다.
							block[a-1][b] = 'X';
							block[a][b+1] = 'X';
							block[a][b-1] = 'X';
						}
					}
					else if ( ( (x-1 >= 1) && (x-1 <= 8) ) && ( (y-1 == 0) || (y-1 == 9) ) )	//맨 위쪽 or 아래쪽일 경우
					{
						if( y-1 == 0 )															//맨 위쪽은 자신+좌우하 칸만 바꾼다.
						{
							block[a][b] = 'X';
							block[a+1][b] = 'X';
							block[a-1][b] = 'X';
							block[a][b+1] = 'X';
						}
						else
						{
							block[a][b] = 'X';													//맨 아래쪽은 자신+상좌우 칸만 바꾼다.
							block[a+1][b] = 'X';
							block[a-1][b] = 'X';
							block[a][b-1] = 'X';
						}
					}
					else if ( (x-1 == 0) && (y-1 == 0) )										//1행1열
					{
						block[0][0] = 'X';
						block[0][1] = 'X';
						block[1][0] = 'X';
					}
					else if ( (x-1 == 0) && (y-1 == 9) )										//1행10열
					{
						block[0][9] = 'X';
						block[0][8] = 'X';
						block[1][9] = 'X';
					}
					else if ( (x-1 == 9) && (y-1 == 0) )										//10행1열
					{
						block[9][0] = 'X';
						block[9][1] = 'X';
						block[8][0] = 'X';
					}
					else if ( (x-1 == 9) && (y-1 == 9) )										//10행10열
					{
						block[9][9] = 'X';
						block[9][8] = 'X';
						block[8][9] = 'X';
					}
				}
			}
		}

	

		for( a=0; a<10; a++)
		{
			for( b=0; b<10; b++ )
			{
				printf("%c ", block[a][b]);		//폭탄 터뜨린 결과물 출력
			
			}
			printf("\n");
		}

		if( WinCondition(block) == 1)		//승리조건 함수가 1 반환시 반복문 탈출
			break;

		printf("\n");

	}


	printf("승리하셨습니다! \n");			//깼다!!!!!


	return 0;

}

int WinCondition(char arr[10][10])		//승리 조건 함수.
{
	int a=0, b=0, n = 0;
	for( a=0; a<10; a++)
	{
		for( b=0; b<10; b++ )
		{
			if( arr[a][b]== 'X' )		//만약 arr[a][b] = 'X'일 경우 n을 1씩 증가
			{
				n++;
			}

		}
	}

	if( n == 100)		//n=100이면 1 반환
	{
		return 1;
	}
}




	



