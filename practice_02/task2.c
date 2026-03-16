#include <stdio.h>
int main() {
    int i = 1;
    int N;
    scanf("%d", &N);
    for ( ; i < N; i = i + 2)
    {
        if ( ! i % 2 == 0)
        {
            printf("%d \n", i);
        }
    }
    return 0;
}