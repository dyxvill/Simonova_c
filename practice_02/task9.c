#include <stdio.h>
int main() {
    int i = 1;
    int N;
    scanf("%d", &N);
    for (; i < N; i++ )
    {
        if ( i % 4 == 0) continue;
        {
            printf("%d \n", i);
        }
    }
    return 0;
}