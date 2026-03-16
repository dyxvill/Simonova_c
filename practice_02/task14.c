#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int c;
    int count = 0;
    int max_c = 0;
    for ( int i = 1 ; i <= N; i++)
    {
        scanf("%d", &c);
        if (c > max_c)
        {
            max_c = c;
        }
    }
    printf("max = %d", max_c);
    return 0;
}