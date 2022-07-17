/* 142694 ���̻� ���� 3�� */
#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

#define MAKE_RGB(A,B,C) ( ((C)*16*16*16*16) + ((B)*16*16) + (A) )	//RGB �����. C-B-A ������ �����Ƿ� ���ʷ� 16���� 4�ڸ�, 2�ڸ� ����.
#define GET_RED(RGB) ( RGB % (16*16*16*16) ) % (16*16)	//RED ��󳻱�. 16^4�� ���� ���������� �ٽ� 16^2�� ���� ������.
#define GET_BLUE(RGB) ( RGB / (16*16*16*16) )	//BLUE ��󳻱�. 16^4�� ���� ��
#define GET_GREEN(RGB) (RGB - ( GET_BLUE(RGB)*16*16*16*16 ) - ( GET_RED(RGB) ) ) / (16*16)	//GREEN ��󳻱�. ������ ��� RED�� BLUE�� �̿��Ѵ�.

int main()
{
	int red = 0, green = 0, blue = 0;
	printf("Red�� �Է��ϼ���: ");
	scanf("%d", &red);
	printf("Green�� �Է��ϼ���: ");
	scanf("%d", &green);
	printf("Blue�� �Է��ϼ���: ");
	scanf("%d", &blue);

	int rgb = MAKE_RGB(red, green, blue);
	printf("RGB ��: %X\n", rgb);
	
	int getred = GET_RED(rgb);
	int getgreen = GET_GREEN(rgb);
	int getblue = GET_BLUE(rgb);
	printf("RGB �� %X �� Red: %d\n", rgb, getred);
	printf("RGB �� %X �� Green: %d\n", rgb, getgreen);
	printf("RGB�� %X �� Blue: %d \n", rgb, getblue);
	
	
	return 0;
}