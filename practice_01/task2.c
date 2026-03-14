#include <stdio.h>
int main() {
	int a;
	int b;
	scanf("%d", &a);
	scanf("%d", &b);
	int c = a + b;
	int d = a - b;
	int e = a * b;
	int f = a / b;
	printf("Сумма = %d \n", c);
	printf("Разность = %d \n", d);
	printf("Произведение = %d \n", e);
	printf("Деление = %d \n", f);
	return 0;
}
