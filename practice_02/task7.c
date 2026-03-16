#include <stdio.h>
int main() {
    int i = 1;
    int N;
    scanf("%d", &N);
    for ( ; i < N; i++)
    {
        if (i * i > 50)
        {
            printf("%d \n", i * i);
        }
    }
    return 0;
}