#include <stdio.h>
int main() {
    printf("N? ");
    int N;
    scanf("%d", &N);
    printf("K? ");
    int K;
    scanf("%d", &K);
    int count = 0;
    for (int i = 1; i < N; i++)
    {
        int j = i;
        if (i + j == K)
        {
            count = count + 1;
        }
    }
    printf("%d", count);
    return 0;
}