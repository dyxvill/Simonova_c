#include <stdio.h>
int main() {
	int x;
	printf("Введите время с начала суток в секундах:");
	scanf("%d", &x);
	int hours = x/3600;
	int minutes = (x%3600)/60;
	int sec = (x%3600)%60;
	printf("Время: %02d:%02d:%02d", hours, minutes, sec);
	return 0;
}
