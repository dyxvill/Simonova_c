#include <stdio.h>
int main() {
	int a = 10;
	float b = 3.14;
	char c = 'A';
	printf("a = %d, адрес = %p\n", a,  (void*)&a);
	printf("b = %f, адрес = %p\n", b, (void*)&b);
	printf("c = %c, адрес = %p\n", c, (void*)&c);
	return 0;
}
