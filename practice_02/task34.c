#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        for (int c = 0; c < N - i; c++)
        {
            printf(" ");
        }
        for (int b = 1; b <= i; b++)
        {
            printf("%d", b);
        }
        printf("\n");
    }
    return 0;
}