#include <stdio.h>
int main () {
    int N;
    scanf("%d", &N);
    int numbers[N];
    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d", &x);
        if (x < 0)
        {
            x = 0;
        }
        numbers[i] = x;
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}