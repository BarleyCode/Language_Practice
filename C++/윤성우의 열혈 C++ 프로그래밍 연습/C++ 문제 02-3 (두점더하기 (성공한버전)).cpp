// 오후 8:55 2017-08-30
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;


typedef struct __Point {
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2);

int main()
{
	Point *Pnt1 = new Point;
	Pnt1->xpos = 3;
	Pnt1->ypos = 5;
	Point *Pnt2 = new Point;
	Pnt2->xpos = 1;
	Pnt2->ypos = 2;

	/* cout << "1번째 점 입력 [x,y]: ";
	cin >> Pnt1->xpos >> Pnt1->ypos;

	cout << "2번째 점 입력 [x,y]: ";
	cin >> Pnt1->xpos >> Pnt2->xpos; */


	Point &addresult = PntAdder(*Pnt1, *Pnt2);
	cout << "결과 [x,y] : " << addresult.xpos << ' ' << addresult.ypos << endl;

	
	delete[] Pnt1;
	delete[] Pnt2;
	delete[] &addresult;

	return 0;
}

Point& PntAdder(const Point &p1, const Point &p2)
{
	Point *result = new Point;
	result->xpos = p1.xpos + p2.xpos;
	result->ypos = p1.ypos + p2.ypos;
	return *result;
	
}

	
	