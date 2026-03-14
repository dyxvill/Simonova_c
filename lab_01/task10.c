#include <stdio.h>
int main() {
	int a = 5;
	int b = 10;
	int c;
	a = c = b;
	printf("a = %d \n", a);
	a = 5;
	b = 10;
	b = c = a;
	printf("b = %d \n", b);
	return 0;
}
