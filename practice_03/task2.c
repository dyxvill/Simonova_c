#include <stdio.h>
int main () {
    int N;
    scanf("%d", &N);
    int numbers[N];
    int max_n = 0;
    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d", &x);
        numbers[i] = x;
        if ( x > max_n)
        {
            max_n = x;
        }
    }
    printf("%d", max_n);
    return 0;
}