#include <stdio.h>
int main() {
    int numbers[] = {1, 2, -1, 4, 5, 6};
    int l = 6;
    int *p;
    p = numbers;
    for (int i = 0; i < l; i++)
    {
        if(*p < 0)
        {
            printf("%d", *p);
            return 1;
        }
        p++;
    }
    return 0;
}