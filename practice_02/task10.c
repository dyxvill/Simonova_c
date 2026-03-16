#include <stdio.h>
int main() {
    int i = 1;
    int N;
    scanf("%d", &N);
    int proiz = 1;
    for (; i < N; i++)
    {
        if ( i % 3 == 0 )
        {
            proiz = proiz * i;
        }
    }
    printf("%d", proiz);
    return 0;
}