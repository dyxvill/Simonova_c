#include <stdio.h>
int main () {
    int N;
    scanf("%d", &N);
    int numbers[N];
    int count = 1;
    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d", &x);
        numbers[i] = x;
    }
    for (int i = 0; i < N; i++)
    {
        if (numbers[i] <= numbers[i + 1])
        {
            count += 1;
        }
    }
    if (count == N)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}