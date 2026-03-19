#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0 ; i < N; i++)
    {
        for (int b = 0; b < N; b++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}