#include <stdio.h>
int main() {
    int i = 1;
    int N;
    scanf("%d", &N);
    for ( ; i < N; i++ )
    {
        if (i % 3 == 0)
        {
            printf("Fizz \n");
        }
        else
        {
            printf("%d \n", i);
        }
    }
    return 0;
}