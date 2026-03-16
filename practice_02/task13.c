#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int c;
    int count = 0;
    for ( int i = 1 ; i <= N; i++)
    {
        scanf("%d", &c);
        if (c < 10) continue; 
        {
            printf("%d \n", c);
        }
    }
    return 0;
}