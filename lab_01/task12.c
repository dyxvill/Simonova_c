#include <stdio.h>
int main() {
	int x;
	printf("Введите трехзначное число:");
	scanf("%d", &x);
	int h = x/100;
	int t = (x/10)%10;
	int u = x%10;
	printf("соток: %d \n", h);
	printf("десяток: %d \n", t);
	printf("едениц: %d \n", u);
	return 0;
}
