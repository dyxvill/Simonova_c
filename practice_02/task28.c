#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int c;
    int sum = 0;
    for (int i = 1 ; i <= N; i++)
    {
       if (i % 10 == 3)
       {
        printf("%d \n", i);
       }
       
    }
    return 0;
}