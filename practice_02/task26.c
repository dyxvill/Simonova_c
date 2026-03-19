#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int c;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        int number = i;
        int sum = 0;
        while (number > 0)
        {
            int l_n = number % 10;
            sum = sum + l_n;
            number = number / 10;
        }
        if (sum > 10)
        {
            printf("%d \n", i);
        }
    }
    return 0;
}