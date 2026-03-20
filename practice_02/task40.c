#include <stdio.h>
int main() {
    printf("N? ");
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0 || i % 3 == 0 || i % 5 ==0) continue;
        {
            printf("%d \n", i);
        }
    }
    return 0;
}