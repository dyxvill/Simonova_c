#include <stdio.h>
int main() {
    int N;
    int i = 1;
    scanf("%d", &N);
    int result = 1;
    for ( ; i <= N; i++)
    {
        if (i % 2 != 0)
        {
            result = result * i;
        }
    }
    printf("%d", result);
    return 0;
}