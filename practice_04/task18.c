#include <stdio.h>
int main() {
    int numbers[] = {1, 2, -1, 4, 5, 6};
    int l = 6;
    int *p;
    p = numbers;
    int X;
    scanf("%d", &X);
    int count = 0;
    for (int i = 0; i < l; i++)
    {
        if(*p > X)
        {
            count += 1;
        }
        p++;
    }
    printf("%d", count);
    return 0;
}