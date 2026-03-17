#include <stdio.h>
int main() {
    int i = 1;
    int N;
    scanf("%d", &N);
    int proiz = 1;
    for (; i < N; i++)
    {
        if ( i % 2 == 0 )
        {
            printf("%d \n", i);
        }
    }
    return 0;
}