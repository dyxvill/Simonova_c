#include <stdio.h>
int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6};
    int l = 6;
    int *p;
    p = numbers;
    int sum = 0;
    for (int i = 0; i < l; i++)
    {
        sum += *p;
        p++;
    }
    printf("%d ", sum);
    return 0;
}