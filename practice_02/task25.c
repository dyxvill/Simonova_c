#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int i = 0;
    int sum = 0;
    for (; i <= N; i = i + 1)
    {
        if ( N % i == 0)
        {
            sum = sum + i;
        }
    }
    printf("%d", sum);
    return 0;
}