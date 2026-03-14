#include <stdio.h>
int main() {
	int x;
	printf("Введите число: \n");
	scanf("%d", &x);
	int c = x%10;
	printf("результат= %d", c);
	return 0;
}
