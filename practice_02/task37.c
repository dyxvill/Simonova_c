#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0 ; i < N; i++)
    {
        for (int b = 0; b < N; b++)
        {
            if ((i + b) % 2 == 0)
            {
                printf("1 ");
            }
            else 
            {
                printf("0 ");
        }   }
        printf("\n");
    }
    return 0;
}