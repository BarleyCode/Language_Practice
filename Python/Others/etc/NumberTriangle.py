# -*- coding: utf-8 -*-
"""
Created on Fri Nov  5 17:20:58 2021

@author: Barley

반복문 입력해서 출력
1
2 6
3 7 10
4 8 11 13
5 9 12 14 15

"""

num = int(input("최대의 숫자 입력 : "))

'''
행 개수 구하기
행의 개수를 구하기 쉽게 하기 위해 삼각형 모양을 잠시 아래와 같이 가정한다.
1  2  3  4  5
6  7  8  9
10 11 12
13 14
15
끝 부분인 15에서 1행씩 올라갈 때마다 (13,10,6,1) 감소폭이 2에서 3,4,5로 증가한다.
즉, 15에서 1까지 감소하는 반복문으로 행의 개수를 알 수 있다.
'''
row = 0

# 2부터 감소 시작
i = 2
while(num >= 1) :
	num -= i
	if(num == 1) :		# 1이 되는 부분이 바로 행 개수.
		row = i
		break
	i += 1
i = 0

arr = [[0 for x in range(row)] for y in range(row)]

arr_element = 1
for y in range(row) :
	for x in range(y,row,1) :
		arr[x][y] = arr_element
		arr_element += 1

for x in range(row) :
	for y in range(row) :
		if(arr[x][y] != 0) :
			print(arr[x][y], end=" ")
	print("\n")


