#include <stdio.h>
int main() {
    int proiz = 1;
    int N;
    scanf("%d", &N);
    while (N != 0)
    {
        int l_n = N % 10;
        if (l_n == 0)
        {
            l_n = 1;
        }
        proiz = proiz * l_n;
        N = N / 10;
    }
    printf("Произведение цифр = %d", proiz);
    return 0;
}