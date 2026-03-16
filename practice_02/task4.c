#include <stdio.h>
int main() {
    int i = 1;
    int N;
    scanf("%d", &N);
    int sum;
    for (; i < N; )
    {
        if (i % 5 == 0)
        {
            sum = sum + i;
        }
    }
    printf("%d", sum);
    return 0;
}