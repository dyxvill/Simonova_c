#include <stdio.h>
int main() {
    int i = 1;
    int N;
    scanf("%d", &N);
    int sum = 0;
    for (; i < N; i++ )
    {
        if (i % 5 == 0)
        {
            sum = sum + i;
        }
    }
    printf("%d", sum);
    return 0;
}