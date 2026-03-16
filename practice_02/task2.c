#include <stdio.h>
int main() {
    int i = 1;
    int N;
    scanf("%d", &N);
    printf("%d \n", i);
    for ( ; i < N; i=+2)
    {
        if (i % 3 == 0)
        {
            printf("%d \n", i);
        }
    }
    return 0;
}