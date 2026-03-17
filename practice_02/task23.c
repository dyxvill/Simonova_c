#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int i = 1;
    int count = 0;
    for (; i <= N; i++)
    {
        if ( N % i == 0)
        {
            count = count + 1;
        }
    }
    printf("%d", count);
    return 0;
}