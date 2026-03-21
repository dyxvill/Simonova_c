#include <stdio.h>
int main () {
    int N;
    scanf("%d", &N);
    int numbers[N];
    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d", &x);
        numbers[i] = x;
        if (x % 2 == 0) 
        {
            printf("YES");
            return 1;
        }
    }
    printf("NO");
    return 0;
}