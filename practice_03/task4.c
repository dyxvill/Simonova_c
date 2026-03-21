#include <stdio.h>
int main () {
    int N;
    scanf("%d", &N);
    int numbers[N];
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d", &x);
        numbers[i] = x;
        sum += x;
    }
    printf("%d", sum);
    return 0;
}