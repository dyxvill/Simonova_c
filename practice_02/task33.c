#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int i = N; i >= 0; i--)
    {
        for (int c = 0; c < N - i; c++)
        {
            printf(" ");
        }
        for (int b = 0; b <= i; b++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}