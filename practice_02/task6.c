#include <stdio.h>
int main() {
    int i = 1;
    int N;
    scanf("%d", &N);
    int result = 0;
    for ( ; i < N; i++)
    {
        if (i % 2 == 0)
        {
            result += 1;
        }
    }
    printf("%d", result);
    return 0;
}