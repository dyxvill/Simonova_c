#include <stdio.h>
int main() {
	int a = 5;
	int b = 2;
	int c_1 = a % b;
	printf(" %d / %d = %d \n", a, b, c_1);
	float c = (float)a / b;
	printf(" %d / %d = %1.1f", a, b, c); 
	return 0;
}
