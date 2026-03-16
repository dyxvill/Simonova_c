#include <stdio.h>
int main() {
        int i = 0;
    int N;
    scanf("%d", &N);
    for ( ; i < N; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d \n", i);
        }
    }
    return 0;
}