#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int c;
    int sum = 0;
    for (int i = 1 ; i <= N; i++)
    {
       if (i % 17 == 0)
       {
        printf("%d", i);
        break;
       }
       
    }
    return 0;
}