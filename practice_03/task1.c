#include <stdio.h>
int main () {
    int N;
    scanf("%d", &N);
    int numbers[N];
    int reversed[N];
    for (int i = 0; i < N; i++)
    {
        numbers[i] = i + 1;
        printf("%d ", numbers[i]);
    }
    printf("\n");
    for (int i = 0; i < N; i++)
    {
        reversed[i] = N - i;
        printf("%d ", reversed[i]);
    }
    return 0;
}