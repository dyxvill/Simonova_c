#include <stdio.h>
int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6};
    int l = 6;
    int *p;
    p = numbers;
    for (int i = 0; i < l; i++)
    {
        printf("%d ", *p);
        p++;
    }
    return 0;
}