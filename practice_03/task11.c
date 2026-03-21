#include <stdio.h>
int main () {
    int N;
    printf("long? ");
    scanf("%d", &N);
    int numbers[N];
    printf("x? ");
    int x;
    scanf("%d", &x);
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        int n;
        scanf("%d", &n);
        numbers[i] = n;
        if (n == x) 
        {
            count += 1;
        }
    }
    printf("%d", count);
    return 0;
}