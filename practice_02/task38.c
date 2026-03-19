#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int count = 0;
    for (int i = 1; i < N; i++)
    {
        printf("%d \n", i);
        int j = i;
        printf("%d \n", j);
        if (i <= N && i >= 1 && j <= N && j >= 1 && i * j % 7 == 0 )
        {
            count = count + 1;
        }
    }
    printf("%d", count);
    return 0;
}