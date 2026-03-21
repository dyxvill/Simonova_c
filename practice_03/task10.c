#include <stdio.h>
int main () {
    int N;
    scanf("%d", &N);
    int numbers[N];
    int reversed[N];
    int count = 1;
    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d", &x);
        numbers[i] = x;
    }
    int l_n = numbers[N - 1];
    numbers[N - 1] = numbers[0];
    numbers[0] = l_n;
    for (int i = 0; i < N; i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}