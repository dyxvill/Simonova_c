#include <stdio.h>
int main () {
    int N;
    scanf("%d", &N);
    int numbers[N];
    int f_o; 
    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d", &x);
        numbers[i] = x;
        if (x > 0) continue;
        {
            printf("%d", i);
            return 1;
        }
    }
    printf("%d", -1);
    return 0;
}