#include <stdio.h>
int main() {
    int sum = 0;
    int N;
    scanf("%d", &N);
    while (N != 0)
    {
        int l_n = N % 10;
        sum = sum + l_n;
        N = N / 10;
    }
    printf("Сумма цифр = %d", sum);
    return 0;
}