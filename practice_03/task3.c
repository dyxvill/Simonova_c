#include <stdio.h>
int main () {
    int N;
    scanf("%d", &N);
    int numbers[N];
    int min_n;
    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d", &x);
        numbers[i] = x;
        if (i == 0)
        {
            min_n = x;
        }
        if ( x < min_n)
        {
            min_n = x;
        }
    }
    printf("Минимальное - %d \n", min_n);
    for (int i = 0; i < N; i++)
    {
        if (numbers[i] == min_n)
        {
            printf("Индекс - %d", i);
        }
    }
    return 0;
}