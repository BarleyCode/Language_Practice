// age:10 ���
#include <stdio.h>
int myfunc(void);

int main() {
	int age;
	age = myfunc();
	printf("age : %d\n", age);
	return 0;
}

int myfunc(void) {
	return 10;
}