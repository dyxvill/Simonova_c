#include <stdio.h>
int main () {
    int N;
    scanf("%d", &N);
    int numbers[N];
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d", &x);
        numbers[i] = x;
        if (x < 0)
        {
            count += 1;
        }
    }
    printf("%d", count);
    return 0;
}