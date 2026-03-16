#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int c;
    int count = 0;
    for ( int i = 1 ; i <= N; i++)
    {
        scanf("%d", &c);
        if (c < 0)
        {
            count = count + 1;
        }
    }
    printf("%d", count);
    return 0;
}
