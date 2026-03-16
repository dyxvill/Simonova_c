#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int c;
    int count = 0;
    int min_c = 0;
    for ( int i = 1 ; i <= N; i++)
    {
        scanf("%d", &c);
        if (i == 1)
        {
            min_c = c;
        }

        if (c < min_c && c % 2 == 0)
        {
            min_c = c;
        }
    }
    printf("min = %d", min_c);
    return 0;
}