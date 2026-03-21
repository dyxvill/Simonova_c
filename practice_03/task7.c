#include <stdio.h>
int main () {
    int N;
    scanf("%d", &N);
    int numbers[N];
    int sum = 0;
    double sr_snach;
    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d", &x);
        numbers[i] = x;
        sum += x;
    }
    sr_snach = sum / N;
    printf("%f", sr_snach);
    return 0;
}