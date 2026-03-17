#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int c;
    int count = 0;
    int max = 0;
    for ( int i = 1 ; i <= N; i++)
    {
        scanf("%d", &c);
        if (c % 5 == 0 && c > max)
        {
            max = c;
        }
    }
    printf("max = %d", max);
    return 0;
}