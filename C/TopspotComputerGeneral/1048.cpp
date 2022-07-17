// 탑스팟 2020년 컴퓨터일반 기출문제집 C언어 1048번
#include <iostream>
using namespace std;

int main() {
	int x;
	for (x = 1; x <= 7; x++) {
		if (x == 5) {
			continue;
		}
		else if (x == 6) {
			break;
		}
		cout << x;

	}
	return 0;

}