#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1 ; i < N; i++)
    {
        for (int b = 1; b < N; b++)
        {
            if (b == i)
            {
                printf("1 ");
            }
            printf("0 ");
        }
        printf("\n");
    }
    return 0;
}