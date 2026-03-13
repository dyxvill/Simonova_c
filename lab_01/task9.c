#include <stdio.h>
int main() {
	int x;
	printf("Введите число x: ");
	scanf("%d", &x);
	int prog1 = x*x + 2*x + 1;
	int prog2 = (x + 1)*(x + 1) - (x - 1)*(x - 1);
	printf("первое выражение = %d \n", prog1);
	printf("второе выражение = %d \n", prog2);
	return 0;
}
